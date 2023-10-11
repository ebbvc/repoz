#include <iostream>
using namespace std;

int main()
{
	int szukana;
	int tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };

	cout << "Jaka liczba wariacie?: "; cin >> szukana;

	wyszukiwanie(szukana, tab);

	if (wyszukiwanie(szukana, tab) == -1) {
		cout << "Taka liczba nie istnieje";
	}
	else {
		cout << "Liczba " << szukana << " wystêpuje w indeksie " << wyszukiwanie(szukana, tab) << endl;
	}
}