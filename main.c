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


void test_licz_silnie_0(int licznik) {
    if (licz_silnie(0) != 1)
        printf("Test nr %i nie działa", licznik);
}
void test_licz_silnie_1(int licznik) {
    if (licz_silnie(1) != 1)
        printf("Test nr %i nie działa", licznik);
}
void test_licz_silnie_2(int licznik) {
    if (licz_silnie(2) != 2)
        printf("Test nr %i nie działa", licznik);
}
void test_licz_silnie_5(int licznik) {
    if (licz_silnie(5) != 120)
        printf("Test nr %i nie działa", licznik);
}
void run_test_pool(){
    int licznik = 0;
    test_licz_silnie_0(++licznik);
    test_licz_silnie_1(++licznik);
    test_licz_silnie_2(++licznik);
    test_licz_silnie_5(++licznik);

};

int main()  {

    #ifndef TEST



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

    run_test_pool();

    #endif

    return 0;
}