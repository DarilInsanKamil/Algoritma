#include <iostream>
using namespace std;
 main()
{
    char jwb;
    string A = "Di kampus", B = "tidak dikampus";
    cout << "Apakah kamu kuliah hari ini: ";
    cin >> jwb;

    switch (jwb)
    {
    case 'y':
        cout << A << endl;
        break;
    case 't':
        cout << B << endl;
        break;
    default:
        break;
    }
    cout << "finish "<<endl;

}