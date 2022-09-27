#include <iostream>

using namespace std;

int main()
{
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

    return 0;
}