#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
Buatlah program yang menghitung faktorial dari angka positif yang
dimasukkan oleh pengguna menggunakan while loop.
*/

int main() {
    int n;
    cin >> n;
    int faktorial = 1;

    if (n <= 0) return 1;

    ++n;
    while (n--) {
        if (n == 0) break;
        faktorial *= n;
        if (n == 1) {
            cout << n;
            break;
        }
        cout << n << " x ";
    }

    cout << " = " << faktorial << endl;
    return 0;
}
