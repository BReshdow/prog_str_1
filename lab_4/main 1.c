#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Zadanie 1.
int suma(int a, int b);
void roznica();
void iloczyn();
float iloraz(float a, float b);
// Zadanie 2.
float pole_kwadratu(float a);
float obwod_kwadratu(float a);
float pole_prostokata(float a, float b);
float obwod_prostokata(float a, float b);
float pole_trapezu(float a, float b, float h);
float obwod_trapezu(float a, float b, float c, float d);
float pole_trojkata(float a, float b, float c);
float obwod_trojkata(float a, float b, float c);
// Zadanie 3.
void sr_arytm();
void sr_geom();
// Zadanie 4.
void p_trojkata();

int main()
{
    printf("Zadanie 1.\n");
    printf("Podaj dwie liczby w celu obliczenia ich sumy\n");
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    printf("Suma podanych liczb wynosi %d\n", suma(x,  y));

    roznica();
    iloczyn();

    printf("Podaj dwie liczby w celu obliczenia ich ilorazu\n");
    float c, d;
    scanf("%f", &c);
    scanf("%f", &d);
    printf("Iloraz podanych liczb wynosi %f\n", iloraz(c, d));
    c = 0;
    d = 0;

    printf("Zadanie 2.\n");
    float a, b, h;
    printf("Podaj dlugosc boku kwadratu w celu obliczenia jego pola i obwodu \n");
    scanf("%f", &a);
    printf("Pole tego kwadratu = %f, obwod = %f\n", pole_kwadratu(a), obwod_kwadratu(a));

    printf("Podaj dlugosc bokow prostokata w celu obliczenia jego pola i obwodu \n");
    scanf("%f", &a);
    scanf("%f", &b);
    printf("Pole tego prostokata = %f, obwod = %f\n", pole_prostokata(a, b), obwod_prostokata(a,b));

    printf("Podaj dlugosc bokow trapezu oraz wysokosc w celu obliczenia jego pola i obwodu \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    scanf("%f", &h);
    printf("Pole tego trapezu = %f, obwod = %f\n", pole_trapezu(b, d, h), obwod_trapezu(a, b, c, d));

    printf("Podaj dlugosc bokow trojkata w celu obliczenia jego pola i obwodu \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    printf("Pole tego trojkata = %f, obwod = %f\n", pole_trojkata(a, b, c), obwod_trojkata(a, b, c));

    printf("Zadanie 3.\n");
    sr_arytm();
    sr_geom();

    printf("Zadanie 4.\n");
    p_trojkata();

    return 0;
}

int suma(int a, int b)
{
    return a + b;
}

void roznica()
{
    printf("Podaj dwie liczby w celu obliczenia ich roznicy \n");
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    printf("Roznica podanych liczb wynosi %d\n", x - y);
}

void iloczyn()
{
    printf("Podaj dwie liczby w celu obliczenia ich iloczynu \n");
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    printf("Iloczyn podanych liczb wynosi %d\n", x * y);
}

float iloraz(float a, float b)
{
    return a / b;
}

float pole_kwadratu(float a)
{
    return a * a;
}

float obwod_kwadratu(float a)
{
    return 4 * a;
}

float pole_prostokata(float a, float b)
{
    return a * b;
}

float obwod_prostokata(float a, float b)
{
    return 2 * a + 2 * b;
}

float pole_trapezu(float a, float b, float h)
{
    return 0.5 * (a + b) * h;
}

float obwod_trapezu(float a, float b, float c, float d)
{
    return a + b + c + d;
}

float pole_trojkata(float a, float b, float c)
{
    float p = 0.5 * (a + b + c);
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

float obwod_trojkata(float a, float b, float c)
{
    return a + b + c;
}

void sr_arytm()
{
    int num1 = 0, num2 = 0;
    printf("Podaj dwie liczby w celu obliczenia ich sredniego arytmetycznego:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("Srednia arytmetyczna tych liczb stanowi %f\n", (float)(num1 + num2) / 2);
}

void sr_geom()
{
    int num1 = 0, num2 = 0;
    printf("Podaj dwie liczby w celu obliczenia ich sredniego geometrycznego:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("Srednia geometryczna tych liczb stanowi %f\n", (float)sqrt(num1 * num2));
}

void p_trojkata()
{
    float a_x = 0, a_y = 0, b_x = 0, b_y = 0, c_x = 0, c_y = 0;
    float ab = 0, bc = 0, ac = 0;
    printf("Podaj wspolrzedne pierwszego wierzcholka trojkata: \n");
    scanf("%f", &a_x);
    scanf("%f", &a_y);
    printf("Podaj wspolrzedne drugiego wierzcholka trojkata: \n");
    scanf("%f", &b_x);
    scanf("%f", &b_y);
    printf("Podaj wspolrzedne trzeciego wierzcholka trojkata: \n");
    scanf("%f", &c_x);
    scanf("%f", &c_y);
    ab = sqrt(pow(b_x - a_x, 2) + pow(b_y - a_y, 2));
    bc = sqrt(pow(c_x - b_x, 2) + pow(c_y - b_y, 2));
    ac = sqrt(pow(c_x - a_x, 2) + pow(c_y - a_y, 2));
    printf("Pole takiego trojkata = %f", pole_trojkata(ab, bc, ac));
}
