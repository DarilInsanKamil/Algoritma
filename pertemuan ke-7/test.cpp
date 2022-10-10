#include <iostream>
using namespace std;

main()
{
    string jwb, a = "Di kampus", b = "tidak dikampus";
    cout << "Apakah kamu kuliah hari ini: ";

    cin >> jwb;

    if (jwb == "y")
    {
        cout << a << endl;
    }
    else if (jwb == "t")
    {
        cout << b << endl;
    }
    else
    {
        cout << "inputan tidak valid" << endl;
    }
    cout << "finish" << endl;
    return 0;
}