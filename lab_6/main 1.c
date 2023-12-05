#include <stdio.h>
#include <stdlib.h>

void zad_1();
void zad_2();
void zad_3();
int ciag_arytmetyczny(int n);
void zad_5();

int main() 
{
    int n;
    zad_1();
    zad_2();
    zad_3();

    // zadanie 4
    printf("Zadanie 4.\nPodaj dlugosc n ciagu arytmetycznego(n>2): ");
    scanf_s("%d", &n);
    if (ciag_arytmetyczny(n))
        printf("To jest ciag arytmetyczny.\n");
    else 
        printf("To nie jest ciag arytmetyczny.\n");

    zad_5();
    return 0;
}

void zad_1() 
{
    int N, pomoc = 0;
    float x, srednia = 0;
    printf("Zadanie 1.\nPodaj wielkosc zbioru N: ");
    scanf_s("%d", &N);

    for (int i = 0; i < N; i++) 
    {
        printf("Podaj %d liczbe rzeczywista ze zbioru N: ", i + 1);
        scanf_s("%f", &x);
        if (x > 0) 
        {
            srednia += x;
            pomoc++;
        }
    }
    if (pomoc)
        printf("Srednia liczb dodatnich wynosi: %.2f\n", srednia / pomoc);
    else printf("Nie ma liczb dodatnich.\n");
}

void zad_2() 
{
    char znak;
    int liczba;
    printf("Zadanie 2.\nPodaj znak: ");
    scanf_s(" %c", &znak);
    printf("Podaj liczbe znakow: ");
    scanf_s("%d", &liczba);

    for (int i = 0; i < liczba; i++)
        printf("%c", znak);
    printf("\n");
}

void zad_3() 
{
    int n;
    float liczba;
    printf("Zadanie 3.\nPodaj ilosc liczb: ");
    scanf_s("%d", &n);

    if (n < 10)
    {
        float iloczyn = 1, pierwsza;
        for (int i = 0; i < n; i++) 
        {
            if (i == 0)
            {
                printf("Podaj %d liczbe rzeczywista: ", i + 1);
                scanf_s("%f", &pierwsza);
            }
            else 
            {
                printf("Podaj %d liczbe rzeczywista: ", i + 1);
                scanf_s("%f", &liczba);
                if (liczba > pierwsza)
                    iloczyn *= liczba;
            }
        }
        printf("Iloczyn podanych liczb wiekszych od pierwszej = %.2f\n", iloczyn);
    }
    else 
    {
        float suma = 0;
        for (int i = 0; i < n; i++)
        {
            printf("Podaj %d liczbe rzeczywista: ", i + 1);
            scanf_s("%f", &liczba);
            suma += liczba;
        }
        printf("Suma podanych liczb = %.2f\n", suma);
    }
}

int ciag_arytmetyczny(int n)
{
    if (n <= 2) return 0;
    
    int poprzednia, terazniejsza, roznica;
    printf("Podaj 1 liczbe naturalna: ");
    scanf_s("%d", &poprzednia);
    printf("Podaj 2 liczbe naturalna: ");
    scanf_s("%d", &terazniejsza);

    for (int i = 2; i < n; i++)
    {
        roznica = terazniejsza - poprzednia;
        poprzednia = terazniejsza;
        printf("Podaj %d liczbe naturalna: ", i + 1);
        scanf_s("%d", &terazniejsza);
        if (terazniejsza - poprzednia != roznica)
            return 0;
    }
    return 1;
}

void zad_5() 
{
    int n;
    float placa, suma = 0, podwyzka;
    printf("Zadanie 5.\nPodaj ilosc pracownikow firmy: ");
    scanf_s("%d", &n);
    printf("Podaj zarobki pracownikow: \n");

    for (int i = 0; i < n; i++) 
    {
        printf("Stara placa pracownika n%d: ", i + 1);
        scanf_s("%f", &placa);

        if (placa <= 5000) podwyzka = 1.1;
        else podwyzka = 1.05;

        printf("Nowa placa pracownika  n%d: %.2f\n", i + 1, placa * podwyzka);
        suma = suma + (placa * podwyzka);
    }
    printf("Suma nowych plac pracownikow = %.2f\n", suma);
}
