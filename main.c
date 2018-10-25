#include <stdio.h>
#include <stdbool.h>

//#define TEST

long licz_silnie(int podstawa) {
    if (podstawa == 0) {
        return 1;
    } else
        {
        long licznik;
        long silnia = 1;

    for (licznik = 1 ; licznik <= podstawa ; ++licznik) {
        silnia *=licznik;
    }
    return silnia;
}}

bool test_licz_silnie(){
    if (licz_silnie(0) ==1)
        if (licz_silnie(1) ==1)
            if (licz_silnie(2) ==2)
                if (licz_silnie(5) ==120)
                printf("test_licz_silnie() przechodzi");
                return true;

        printf("test_licz_silnie nie działa!");
        return false;

}

int main()  {

    #ifndef TEST

    test_licz_silnie();

    long wynik;
    long podstawa;
    printf("podaj podstawę silni 0 do 15: \n");
    scanf("%ld", &podstawa);

    if (podstawa > 0 && podstawa <= 15){
        wynik = licz_silnie(podstawa);
        printf("silnia : %ld = %ld",podstawa, wynik);
    }
    else{
        printf("podałeś liczbę z poza zakresu: \n");
    }


    #else

    test_licz_silnie();

    #endif
    return 0;
}