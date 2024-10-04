    #include <cmath>
    #include <cstdio>
    #include <vector>
    #include <iostream>
    #include <algorithm>
    #include <cstdlib>
    #include <exception>
    using namespace std;

    /*
    Deskripsi: Buatlah program yang meminta pengguna untuk memasukkan
    bilangan bulat positif N dan mencetak bilangan dari 1 hingga N
    menggunakan do-while loop. Jika pengguna memasukkan angka negatif,
    program harus menghentikan perhitungan dan memberikan pesan
    kesalahan.
    */

    class kodesalah : public exception {
    public:
        const char* what() const noexcept override {
            return "Kode Error: Angka Negatif atau Nol\n";
        }
    };


    int main() {
        int n;
        cin >> n;
        if (n <= 0) {
            try {
                throw kodesalah();
            }
            catch (exception& e) {
                cout << e.what();
                exit(EXIT_FAILURE);
            }
        }
        int i = 1;
        do {
            cout << i << " ";            
            ++i;
        } while (i <= n);
        return 0;
    }
