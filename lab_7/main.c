#include <stdio.h>
#include <stdlib.h>

void zad_1();
void zad_2();
int ciag(int n);
void zad_4();
void zad_5();

int main()
{
    int num;
    zad_1();
    zad_2();

    printf("Podaj n ilosc liczb: ");
    scanf("%d", &num);
    if (ciag(num)) printf("To jest ciag rosnacy.\n");
    else printf("To nie jest ciag rosnacy.\n");

    zad_4();
    zad_5();
    return 0;
}

void zad_1()
{
    int zbior, licznik = 0;
    float suma = 0, element;
    printf("Podaj wielkosc zbioru: ");
    scanf("%d", &zbior);
    while (licznik < zbior)
    {
        printf("Podaj element ze zbioru: ");
        scanf("%f", &element);
        if (element > 100)
            suma += element;
        licznik++;
    }
    printf("Suma liczb wiekszych od 100 wynosi: %.2f\n", suma);
}

void zad_2()
{
    int n, licznik = 0;
    float suma = 0, liczba;
    printf("Podaj n: ");
    scanf("%d", &n);
    while (licznik < n)
    {
        printf("Podaj liczbe rzeczywista: ");
        scanf("%f", &liczba);
        suma += liczba;
        printf("Dotychczasowa suma podanych liczb wynosi %.2f\n", suma);
        licznik++;
    }
}

int ciag(int n)
{
    if (n <= 2) return 0;

    float poprzednia, terazniejsza;
    int licznik = 2;
    printf("Podaj liczbe rzeczywista: ");
    scanf("%f", &poprzednia);
    printf("Podaj liczbe rzeczywista: ");
    scanf("%f", &terazniejsza);

    while (licznik < n)
    {
        licznik++;
        poprzednia = terazniejsza;
        printf("Podaj liczbe rzeczywista: ");
        scanf("%f", &terazniejsza);
        if (terazniejsza <= poprzednia)
            return 0;
    }
    return 1;
}

void zad_4()
{
    int a, b, iloczyn = 1;
    printf("Podaj liczby A i B: \n");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    while (a <= b)
    {
        if (!(a % 3)) iloczyn *= a;
        a++;
    }
    printf("Iloczyn liczb z przedzialu (a, b) wynosi %d\n", iloczyn);
}

void zad_5()
{
    int n, liczba, licznik = 0, iloczyn = 1;
    printf("Podaj n: ");
    scanf("%d", &n);
    while (licznik < n)
    {
        printf("Podaj liczbe: ");
        scanf("%d", &liczba);
        if (!(liczba % 2)) iloczyn *= liczba;
        licznik++;
    }
    printf("Iloczyn liczb parzystych wynosi %d", iloczyn);
}
