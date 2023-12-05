#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void zad_1();
void zad_2();
void zad_3();
void zad_4();
void zad_chet_1();
void zad_chet_2();

int main()
{
    int zadanie = 0;
    printf("Zadanie 1.\nPodaj numer zadania(1, 2 lub 3): ");
    scanf("%d", &zadanie);
    switch (zadanie)  // Zadanie 5.
    {
        case 1: zad_1(); break;
        case 2: zad_2(); break;
        case 3: zad_3(); break;
        default: printf("Niepoprawne dane!\n");
    }
    zad_4();
    zad_chet_1();
    zad_chet_2();
    return 0;
}

void zad_1()
{
    int x, y;
    printf("Zadanie 1.\nPodaj zmienne X i Y:\n");
    scanf("%d %d", &x, &y);
    if (x < 0 && y < 0)
        printf("Wynik funkcji w przypadku 1 wynosi: %d.\n", ((x * x) + (y * y)));
    else if (x * y <= 0)
        printf("Wynik funkcji w przypadku 2 wynosi: %d.\n", 0);
    else
        printf("Wynik funkcji w przypadku 3 wynosi: %f.\n", sqrt(x + y));
}

void zad_2()
{
    float x, y;
    printf("Zadanie 2.\nPodaj wspolrzedne punktu A(x, y):\n");
    scanf("%f %f", &x, &y);
    if (x > 0 && y > 0)
        printf("Punkt A(%.2f, %.2f) znajduje sie w I cwiartce ukladu wspolrzednych.\n", x, y);
    else if (x < 0 && y > 0)
        printf("Punkt A(%.2f, %.2f) znajduje sie w II cwiartce ukladu wspolrzednych.\n", x, y);
    else if (x < 0 && y < 0)
        printf("Punkt A(%.2f, %.2f) znajduje sie w III cwiartce ukladu wspolrzednych.\n", x, y);
    else
        printf("Punkt A(%.2f, %.2f) znajduje sie w IV cwiartce ukladu wspolrzednych.\n", x, y);
}

void zad_3()
{
    float a, b, c, delta;
    printf("Zadanie 3.\nPodaj wspolczynniki rownania kwadratowego(a, b, c): \n");
    scanf("%f %f %f", &a, &b, &c);
    if (a && b && c)
    {
        delta = b*b - (4 * a * c);
        if (delta > 0)
            printf("Rozwiazaniami tego rownania sa: x1 = %f, x2 = %f.\n",
               ((-b) - sqrt(delta)) / (2 * a), ((-b) + sqrt(delta)) / (2 * a));
        else if (delta == 0)
            printf("Rozwiazaniem tego rownania jest: x = %f.\n", (-b) / (2 * a));
        else printf("Rownanie nie ma rzeczywistych rozwiazan(delta < 0).\n");

    }
    else if (!a && b)
        printf("Rozwiazaniem tego rownania jest x = %f.\n", (-c) / b);
    else if (!a && !b && c)
        printf("Takie rownanie (%.2f = 0) nie ma rozwiazan.\n", c);
    else
        printf("Wszystkie liczby rzeczywiste sa rozwazaniami tego rownania (0 = 0).\n");
}

void zad_4()
{
    float x, y;
    char znak;
    printf("Zadanie 4.\nPodaj liczby x, y oraz operacje arytmetyczna(+,-,*,/):\n");
    scanf("%f %f %c", &x, &y, &znak);
    if (znak == '+')
        printf("Wynik = %f.\n", x + y);
    else if (znak == '-')
        printf("Wynik = %f.\n", x - y);
    else if (znak == '*')
        printf("Wynik = %f.\n", x * y);
    else if (znak == '/')
        printf("Wynik = %f.\n", x / y);
    else
        printf("Podales niepoprawny znak operacji.\n");
}

void zad_chet_1()
{
    int podana;
    printf("Zadanie dla chetnych 1.\nPodaj liczbe calkowita: ");
    scanf("%d", &podana);
    if (podana % 2) printf("Podana liczba jest nieparzysta.\n");
    else printf("Podana liczba jest parzysta.\n");
}


void zad_chet_2()
{
    int miesiac;
    printf("Zadanie dla chetnych 2.\nPodaj numer miesiaca:\n");
    scanf("%d", &miesiac);
    if (miesiac > 0 && miesiac < 13)
    {
        printf("Podany miesiac nalezy do %d kwartalu roku.\n", (miesiac + 2) / 3);
        if (miesiac == 2)
            printf("W podanym miesiacu 28 lub 29 dni (zaleznie od roku).\n");
        else if (miesiac <= 7)
            printf("W podanym miesiacu %d dni.\n", (miesiac % 2) + 30);
        else
            printf("W podanym miesiacu %d dni.\n", 31 - (miesiac % 2));
    }
    else printf("Numer miesiaca nie moze byc mniejszy od 1 lub wiekszy od 12!\n");
}
