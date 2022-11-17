// alur
// login = name, password, trigger
// pilih seminar = tema seminar
// bayar = uang, harga, sisa
// selesai = cetak nama, tema seminar, uang sisa

#include <iostream>
using namespace std;
main()
{
    string name, password, tema;
    int opsi, uang = 0, harga = 50000, trigger = 5, sisa;
    cout << "Login terlebih dahulu" << endl;

    if (name == "" && password == "")
    {
        // Login
        for (int i; trigger < 6;)
        {
            cout << "\n======= LOGIN =======" << endl;
            cout << "Masukan username: ";
            cin >> name;
            cout << "Masukan password: ";
            cin >> password;
            cout << "======================" << endl;
            if (name == "daril" && password == "123")
            {
                trigger = 7;
                cout << "Login Berhasil!!!" << endl;
            }
            else
            {
                cout << "username atau password tidak valid" << endl;
            }
        }

        // Pilih Tema Seminar
        for (int i; trigger < 8;)
        {
            cout << "\n========= TEMA SEMINAR ==========" << endl;
            cout << "1. Pengenalan UI/UX" << endl;
            cout << "2. Cyber Security dan BigData" << endl;
            cout << "3. Web Developer" << endl;
            cout << "Pilih seminar yang ingin diikuti: ";
            cin >> opsi;
            cout << "==================================" << endl;
            if (opsi <= 3)
            {
                trigger = 9;
            }
            else
            {
                cout << "Tema tidak tersedia, pilih antara 1 - 3\n";
            }
        }

        // assign tema
        if (opsi == 1)
        {
            tema = "Pengenalan UI/UX";
        }
        else if (opsi == 2)
        {
            tema = "Cyber Security dan BigData";
        }
        else if (opsi == 3)
        {
            tema = "Web Developer";
        }

        // Pembayaran
        cout << "\n============== TOTAL ===============" << endl;
        cout << "Total yang harus dibayar " << harga << endl;
        cout << "====================================" << endl;

        for (int i; uang < harga;)
        {
            cout << "\n=========== PEMBAYARAN ===========" << endl;
            cout << "Masukan Uang: ";
            cin >> uang;
            cout << "==================================" << endl;
            if (uang < harga)
            {
                cout << "Uang anda kurang silakan masukan kembali" << endl;
                cout << "\n============== TOTAL ===============" << endl;
                cout << "Total yang harus dibayar " << harga << endl;
                cout << "====================================" << endl;
            }
            else
            {
                sisa = uang - harga;
            }
        }

        // Kesimpulan
        cout << "\n============ KESIMPULAN =============" << endl;
        cout << "Nama: " << name << endl;
        cout << "Seminar yang diikuti: " << tema << endl;
        cout << "Sisa uang: " << sisa\n;
    }

    return 0;
}