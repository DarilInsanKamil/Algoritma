#include <iostream>

using namespace std;

main()
{
    // NOMOR 2
    int T = 0, A = 5, B = 10;
    if (A > B)
    {
        T = T + A;
        T = T + B;
        cout << "T: " << T;
    }
    else
    {
        T = T - A;
        T = T - A;
    }
    // Z = Y;
    // cout << "a. " << Z << endl;
    // Z = Z + X;
    // cout << "b. " << Z << endl;
    // Z = Z - X * Y;
    // cout << "c. " << Z << endl;
    // Z = X % Y;
    // cout << "d. " << Z << endl;

    return 0;
}