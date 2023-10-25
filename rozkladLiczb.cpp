#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Podaj liczbe naturalna: "; cin >> n;
    int k = 2;

    while (n > 1) {
        while (n % k == 0) {
            cout << k << endl;
            n = n / k;
        }
        k = k + 1;
    }
}

