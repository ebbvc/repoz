#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Podaj podstawe: "; cin >> a;
    int n;
    cout << "Podaj wykladnik: "; cin >> n;
    int w = 1;

    while (n > 0) {
        if (n % 2 == 1) {
            w = w * a;
        }
            a = a * a;
            n = n / 2;
    }
    cout << a << " do potegi " << n << " wynosi " << w << endl;
    return w;
}
