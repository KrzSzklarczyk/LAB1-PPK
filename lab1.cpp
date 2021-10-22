using namespace std;

#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
#include <cstdlib>

#define zadanie1f

#ifdef zadanie1e
int main()
{
    double x, a, b, c, wynikA, wynikB, wynikC;
    const double D = 2.5;
    const double E = 5 * M_PI * sqrt(5);
    double e = 2.7182;

    cout << "podaj zmienne: x, a, b oraz c" << endl;
    cin >> x;
    cin >> a;
    cin >> b;
    cin >> c;

    wynikA = E + D * pow((2*b / (5+a) * x + log10(c)), e+x/2);
    cout << "Wynik funckji f(x)= " << wynikA << endl;

    wynikB = E * fabs(a * pow(x, 3) - D) / (b * pow(x, 2)) + c * x;
    cout << "Wynik funkcji g(x)= " << wynikB << endl;

    wynikC = fabs(a * sin(E * x) + b * cos(E * x) / D * (c + 5));
    cout << "wynik funkcji h(x)= " << wynikC << endl;
}
#endif

#ifdef zadanie1f
int main()
{
    string c;
        unsigned int;
}
#endif