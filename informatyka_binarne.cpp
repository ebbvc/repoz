#include <iostream>
using namespace std;
int main() 
{
	int tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
	int szukana;
	cout << "Podaj szukana: "; cin >> szukana;

	wyszukiwanie(szukana, tab);
	if (wyszukiwanie(szukana, tab) == -1) {
		cout << "B³¹d";
	}else {
		cout << "Liczba " << szukana << " wystêpuje pod indeksem " << wyszukiwanie(szukana, tab) << endl;
	}
} 

int wyszukiwanie(int szukana, int tab[]) {
	int pozycja;
	int l = 0;
	int p = 15;
	int sr = (l + p) / 2;
	while (l <= p) {
		if (tab[sr] == szukana) {
			return sr;
		}
		if (tab[sr] > szukana) {
			p = sr - 1;
		}else {
			l = sr + 1;
		}
		sr = (l + p) / 2;
	}
	return -1;
}