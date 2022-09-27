#include <iostream>

using namespace std;

int main()
{
    // NOMOR 1
    int X = 7, Y = 5, Z = 3, K = 1, sum;
    sum = X + Y + Z + K;

    cout << X << endl;
    cout << Y << endl;
    cout << Z << endl;
    cout << K << endl;
    cout << "Hasil dari penjumlahan keempat bilangan terbeut ialah: " << sum << endl;

    // NOMOR 2
    int X = 7, Y = 5, Z = 3;
    Z = Y;
    cout << "a. " << Z << endl;
    Z = Z + X;
    cout << "b. " << Z << endl;
    Z = Z - X * Y;
    cout << "c. " << Z << endl;
    Z = X % Y;
    cout << "d. " << Z << endl;

    // NOMOR 3
    int A = 5, B = 2, T;
    T = A;
    cout << "T = " << T << endl;
    A = B;
    cout << "A = " << A << endl;
    B = T;
    cout << "B = " << B << endl;

    return 0;
}