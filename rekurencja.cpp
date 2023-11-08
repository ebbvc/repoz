#include <iostream>
using namespace std;
int silnia(int x){
	if (x < 1) {
		return 1;
	}
	else {
		return x * silnia(x - 1);
	}
}
int main(){
	int x;
	cout << "Podaj wartosc: ";
	cin >> x;
	cout << "Silnia z " << x << " wynosi " << silnia(x) << endl;
}