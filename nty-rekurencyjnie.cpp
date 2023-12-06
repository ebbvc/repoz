using namespace std;
#include <iostream>


int ciag(float n) {
	if (n == 1) {
		return 1;
	}
	else if (n == 2) {
		return 0.5;
	}
	else {
		return -ciag(n - 1) * ciag(n - 2);
	}

}

int main()
{
	float n;
	cout << "Podaj liczbe: "; cin >> n;
	cout << ciag(n);
}


