#include <stdio.h>


int licz_silnie(int podstawa) {
    if (podstawa == 0) {
        return 1;
    } else {
        int licznik;
        int silnia;

    for (licznik = 1 ; licznik <= podstawa ; ++licznik) {
        silnia *=licznik;
    }
    return silnia;
}

int main()
{
    int wynik;
    int podstawa
    printf("podaj podstawę silni 0 do 15: \n");
    scanf("%i", &podstawa)

    if (podstawa > 0 && podstawa <= 15){
        wynik = licz_silnie(podstawa);
        printf("silnia : %i", wynik);
    }
    else{
        printf("podałeś liczbę z poza zakresu: \n");
    }
    return 0;
}