#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
Buatlah program yang meminta pengguna memasukkan angka bulat positif
N dan mencetak deret bilangan ganjil dari 1 hingga N menggunakan for loop.
Gunakan continue untuk melewati bilangan genap.
*/

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            continue;
        }
        else {
            cout << i << " ";
        }
    }
}
