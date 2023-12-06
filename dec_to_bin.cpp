using namespace std;
#include <iostream>

int decin(int liczba)
{
	int i = 0;
	int tab[15];
	while (liczba > 0) {
		tab[i++] = liczba % 2;
		liczba = liczba / 2;
	}
	for (int j = i - 1; j >= 0; j = j - 1) {
		cout << tab[j];
	}
	return 0;
}
int main()
{
    int liczba;
    cout << "Podaj liczbe: "; cin >> liczba;
	cout << "po zamianie to: ";
	decin(liczba);
}



