#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

int obliczenia(int a, int b, int c, int *objetosc);

float pole_obj_walca(float prom, float wys, float *obj);

int iloczyn_liczb(int n, int *iloczyn);

int najwieksze_liczby(int n, int* druga);

int main()
{
    int a, b, c, N, dr, obj = 0, ilo = 1;
    float prom, wys, obj_w = 0;

    printf("Podaj wartosci dlugosci bokow prostopadloscianu: \n");
    scanf_s("%d %d %d", &a, &b, &c);
    printf("Pole prostopadloscianu wynosi: %d\n", obliczenia(a, b, c, &obj));
    printf("Objetosc wynosi: %d\n", obj);

    printf("Podaj wartosci dlugosci promienia podstawy i wysokosci walca: \n");
    scanf_s("%f %f", &prom, &wys);
    printf("Pole walca wynosi: %f\n", pole_obj_walca(prom, wys, &obj_w));
    printf("Objetosc walca wynosi: %f\n", obj_w);

    printf("Podaj ilosc liczb(N): \n");
    scanf_s("%d", &N);
    if (iloczyn_liczb(N, &ilo))
        printf("Wartosc iloczynu liczb spelniajacych warunek wynosi: %d\n", ilo);
    else printf("Nie ma liczb spelniajacych warunek!\n");

    printf("Podaj ilosc liczb(N): \n");
    scanf_s("%d", &N);
    printf("Pierwsza najwieksza liczba = %d\n", najwieksze_liczby(N, &dr));
    printf("Druga najwieksza liczba = %d\n", dr);

    return 0;
}

int obliczenia(int a, int b, int c, int *objetosc)
{
    *objetosc = a * b * c;

    if (a <= 0 || b <= 0 || c <= 0) return 0;
    else
        return 2*a*b + 2*a*c + 2*b*c;
}

float pole_obj_walca(float prom, float wys, float *obj)
{
    *obj = wys * (M_PI * prom * prom);

    if (prom <= 0 || wys <= 0) return 0;
    else
        return 2 * M_PI * prom * wys + 2 * M_PI * prom * prom;
}

int iloczyn_liczb(int n, int *iloczyn)
{
    int liczba, licznik = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Podaj liczbe: \n");
        scanf_s("%d", &liczba);
        if (liczba >= 1 && liczba <= 100)
        {
            licznik++;
            *iloczyn *= liczba;
        }
    }
    return licznik;
}

int najwieksze_liczby(int n, int* druga)
{
    int pierwsza, liczba;
    printf("Podaj liczbe: ");
    scanf_s("%d", &pierwsza);
    printf("Podaj liczbe: ");
    scanf_s("%d", druga);
    
    if (*druga > pierwsza)
    {
        int tmp = pierwsza;
        pierwsza = *druga;
        *druga = tmp;
    }
    for (int i = 2; i < n; i++)
    {
        printf("Podaj liczbe: ");
        scanf_s("%d", &liczba);
        if (liczba > pierwsza)
        {
            *druga = pierwsza;
            pierwsza = liczba;
        }
        else if (liczba > *druga) *druga = liczba;
    }
    return pierwsza;
}
