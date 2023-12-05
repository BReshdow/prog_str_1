#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Zadanie 1.
int main()
{
    int x = 0;
    float y = 0;
    int suma = 0, roznica = 0, iloczyn = 0, modulo = 0;
    float iloraz = 0;
    printf("Podaj dwie liczby w celu obliczenia ich sumy, roznicy, iloczynu, ilorazu i modulo\n");
    scanf("%d", &x);
    scanf("%f", &y);
    suma = x + y;
    roznica = x - y;
    iloczyn = x * y;
    iloraz = x / y;
    //modulo = x % y;
    printf("suma: %d\n", suma);
    printf("roznica: %d\n", roznica);
    printf("iloczyn: %d\n", iloczyn);
    printf("iloraz: %f\n", iloraz);
    //printf("modulo: %d\n", modulo);
    return 0;
}*/
/* Zadanie 2.
int main()
{
    double a = 0, b = 0, c = 0, d = 0, h = 0, pole = 0, obwod = 0, p = 0;
    
    printf("Podaj dlugosc boku kwadratu: ");
    scanf("%lf", &a);
    pole = a * a;
    obwod = 4 * b;
    printf("Pole kwadratu: %lf, obwod kwadratu: %lf\n", pole, obwod);
    
    printf("Podaj dlugosc pierwszego boku prostokata: ");
    scanf("%lf", &a);
    printf("Podaj dlugosc drugiego boku prostokata: ");
    scanf("%lf", &b);
    pole = a * b;
    obwod = 2 * a + 2 * b;
    printf("Pole prostokata: %lf, obwod prostokata: %lf\n", pole, obwod);
    
    printf("Podaj dlugosc pierwszej podstawy trapezu: ");
    scanf("%lf", &a);
    printf("Podaj dlugosc drugiej podstawy trapezu: ");
    scanf("%lf", &b);
    printf("Podaj dlugosc pierwszego boku trapezu: ");
    scanf("%lf", &c);
    printf("Podaj dlugosc drugiego boku trapezu: ");
    scanf("%lf", &d);
    printf("Podaj wysokosc trapezu: ");
    scanf("%lf", &h);
    pole = 0.5 * (a + b) * h;
    obwod = a + b + c + d;
    printf("Pole trapezu: %lf, obwod trapezu: %lf\n", pole, obwod);
    
    printf("Podaj dlugosc pierwszego boku trojkata: ");
    scanf("%lf", &a);
    printf("Podaj dlugosc drugiego boku trojkata: ");
    scanf("%lf", &b);
    printf("Podaj dlugosc trzeciego boku trojkata: ");
    scanf("%lf", &c);
    p = (a + b + c) * 0.5;
    pole = sqrt(p * (p - a) * (p - b) * (p - c));
    obwod = a + b + c;
    printf("Pole trojkata: %lf, obwod trojkata: %lf\n", pole, obwod);
    
    return 0;
}*/
/* Zadanie 3.
int main() 
{
    double k_mech = 0, km_h = 0;
    printf("Podaj moc w koniach mechanicznych: ");
    scanf("%lf", &k_mech);
    printf("Moc w watach: %lf\n", k_mech * 735);
    
    printf("Podaj predkosc w km/h: ");
    scanf("%lf", &km_h);
    printf("Predkosc w m/s: %lf\n", km_h / 3.6);
    
    return 0;
}*/
/*
int main()
{
    double x = 0, a = 0, b = 0, n1 = 0, n2;
    printf("Podaj wartosc x: ");
    scanf("%lf", &x);
    n1 = 1 + pow(x, 2) + sqrt(1 + pow(x, 2));
    printf("n1 = %lf\n", n1);
    
    printf("Podaj wartosc x: ");
    scanf("%lf", &x);
    printf("Podaj wartosc a: ");
    scanf("%lf", &a);
    printf("Podaj wartosc b: ");
    scanf("%lf", &b);
    n2 = fabs(a + b * x) + pow(x, 100) + cbrt(1 + x);
    printf("n2 = %lf\n", n2);
    
    return 0;
}*/
