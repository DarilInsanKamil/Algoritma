#include <iostream>
using namespace std;

int main()
{
    float t, uas, uts, k, total, kkm = 60;
    for (int x; total < kkm;)
    {
        cout << "masukan nilai tugas ";
        cin >> t;
        cout << "masukan nilai uas ";
        cin >> uas;
        cout << "masukan nilai uts ";
        cin >> uts;
        cout << "masukan nilai kehadiran ";
        cin >> k;
        k = k / 21 * 10;
        t = t * 20 / 100;
        uts = uts * 30 / 100;
        uas = uas * 40 / 100;
        total = k + t + uts + uas;
        if (total < kkm)
        {
            cout << "Nilai Kamu kurang silakan remed" << endl;
        }
    }
    cout << "Nilai Tugas: " << t << endl;
    cout << "Nilai Kehadiran: " << k << endl;
    cout << "Nilai UTS: " << uts << endl;
    cout << "Nilai UAS: " << uas << endl;
    cout << "Nilai Total: " << total << endl;
}