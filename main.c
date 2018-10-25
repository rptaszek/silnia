#include <stdio.h>


long licz_silnie(int podstawa) {
    if (podstawa == 0) {
        return 1;
    } else {
        long licznik;
        long silnia = 1;

    for (licznik = 1 ; licznik <= podstawa ; ++licznik) {
        silnia *=licznik;
    }
    return silnia;
}}

int main()
{
    long wynik;
    long podstawa;
    printf("podaj podstawę silni 0 do 15: \n");
    scanf("%ld", &podstawa);

    if (podstawa > 0 && podstawa <= 15){
        wynik = licz_silnie(podstawa);
        printf("silnia : %ld", wynik);
    }
    else{
        printf("podałeś liczbę z poza zakresu: \n");
    }
    return 0;
}