
using namespace std;
#include <iostream>

#define zadanie3

#ifdef zadanie1
void main(void)
{
	int a, b, c; // Zadeklarowanie zmiennych typu calkowitego
	cout << "Podaj a: "; // wypisanie na ekranie konsoli 
	cin >> a; // przekazanie wartosci do zmiennej a
	cout << "Podaj b: "; // wypisanie na ekranie konsoli 
	cin >> b; // przekazanie wartosci do zmiennej b
	c = (a + b) / 2; // 
	cout << "Wynik to: " << c << endl; // kodu.
#endif

#ifdef zadanie2
	void main(void)
	{
		double a, b, c; // Zadeklarowanie zmiennych typu calkowitego
		cout << "Podaj a: "; // wypisanie na ekranie konsoli 
		cin >> a; // przekazanie wartosci do zmiennej a
		cout << "Podaj b: "; // wypisanie na ekranie konsoli 
		cin >> b; // przekazanie wartosci do zmiennej b
		c = (a + b) / 2; // 
		cout << "Wynik to: " << c << endl; // kodu.

		// aby zadanie dzialalo tak jak w przykladzie w tabelce ponizej, trzeba bylo zmienic typ zmiennej na double
	}
#endif 

#ifdef zadanie3
		void main(void)
		{
			double d{}, f, g, h; // Zarezerwuj pamięć na 4 zmienne typu rzeczywistego: d, f, g oraz h.
			cout << "Podaj d: "; // Poproś użytkownika o podanie wartości zmiennej d.
			cin >> d; //  Pobierz wartość zmiennej d z klawiatury.
			cout << "Podaj f: "; //  Poproś użytkownika o podanie wartości zmiennej f
			cin >> f; // Pobierz wartość zmiennej f z klawiatury.
			g = (d + f) / (d - f); //  Oblicz wartość wyrażenia:  i wynik umieść w zmiennej g.
			h = d * d + f / g; // . Oblicz wartość wyrażenia: i wynik zapisz do zmiennej h.
			cout << "wynik g: " << g << endl;
			cout << "wynik h: " << h << endl;
		}
#endif // zadanie3



