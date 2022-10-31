#include <iostream>

using namespace std;

int main()
{
    int bayar = 10000, uang, total = 20000, kembalian;
    for (int x; bayar < total;)
    {
        cout << "Masukan uang ";
        cin >> uang;
        bayar = bayar + uang;
        kembalian = bayar - total;
        if (uang < total)
        {
            cout<<"Uang anda tidak cukup"<<endl;
        }
    }
    cout << "Total belanja kamu Rp." << total << endl;
    cout << "Total uang kamu Rp." << bayar << endl;
    cout << "kembalian Rp." << kembalian << endl;
}
