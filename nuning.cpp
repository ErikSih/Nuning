#include <iostream>
#include <cstdlib>
#include <conio.h>
//aaa
using namespace std;

//struct
struct menu{
int uang,hargakelas,hargarute, hargamaskapai;
string nama,kodepenerbangan,kodepesawat,kelas,rek, lunas;};

//Fungsi
int status(int a, int b, int c){
    int hasil=a+b+c;
    return hasil;
}

void daftarharga1() {
    cout << "|-------------------------------------------------------------------------------|" << endl;
	cout << "|Kode Pesawat      | Nama Pesawat  | Kelas Pesawat     | Harga Tiket            |" << endl;
	cout << "|-------------------------------------------------------------------------------|" << endl;
	cout << "|                  |               | 1. EKONOMI        | Rp.1.350.000           |" << endl;
	cout << "| 1.LIA            | LION AIR      | 2. BISNIS         | Rp.3.450.000           |" << endl;
	cout << "|                  |               | 3. FIRST          | Rp.4.150.000           |" << endl;
	cout << "|-------------------------------------------------------------------------------|" << endl;
	cout << "|                  |               | 1. EKONOMI        | Rp.1.700.000           |" << endl;
	cout << "| 2.GRD            | GARUDA        | 2. BISNIS         | Rp.3.800.000           |" << endl;
	cout << "|                  |               | 3. FIRST          | Rp.4.500.000           |" << endl;
	cout << "|-------------------------------------------------------------------------------|" << endl;
	cout << "|                  |               | 1. EKONOMI        | Rp.3.400.000           |" << endl;
	cout << "| 3.WIA            | WINGS AIR     | 2. BUSINESS       | Rp.5.500.000           |" << endl;
	cout << "|                  |               | 3. FIRST          | Rp.6.200.000           |" << endl;
	cout << "|-------------------------------------------------------------------------------|" << endl;
}

void daftarharga2() {
    cout << "|-------------------------------------------------------------------------------|" << endl;
	cout << "|Kode Pesawat      | Nama Pesawat  | Kelas Pesawat     | Harga Tiket            |" << endl;
	cout << "|-------------------------------------------------------------------------------|" << endl;
	cout << "|                  |               | 1. EKONOMI        | Rp.3.050.000           |" << endl;
	cout << "| 1.LIA            | LION AIR      | 2. BISNIS         | Rp.5.150.000           |" << endl;
	cout << "|                  |               | 3. FIRST          | Rp.5.850.000           |" << endl;
	cout << "|-------------------------------------------------------------------------------|" << endl;
	cout << "|                  |               | 1. EKONOMI        | Rp.3.400.000           |" << endl;
	cout << "| 2.GRD            | GARUDA        | 2. BISNIS         | Rp.5.500.000           |" << endl;
	cout << "|                  |               | 3. FIRST          | Rp.6.200.000           |" << endl;
	cout << "|-------------------------------------------------------------------------------|" << endl;
	cout << "|                  |               | 1. EKONOMI        | Rp.5.600.000           |" << endl;
	cout << "| 3.WIA            | WINGS AIR     | 2. BUSINESS       | Rp.7.700.000           |" << endl;
	cout << "|                  |               | 3. FIRST          | Rp.8.400.000           |" << endl;
	cout << "|-------------------------------------------------------------------------------|" << endl;
}

void daftarharga3() {
    cout << "|-------------------------------------------------------------------------------|" << endl;
	cout << "|Kode Pesawat      | Nama Pesawat  | Kelas Pesawat     | Harga Tiket            |" << endl;
	cout << "|-------------------------------------------------------------------------------|" << endl;
	cout << "|                  |               | 1. EKONOMI        | Rp.1.300.000           |" << endl;
	cout << "| 1.LIA            | LION AIR      | 2. BISNIS         | Rp.3.400.000           |" << endl;
	cout << "|                  |               | 3. FIRST          | Rp.4.100.000           |" << endl;
	cout << "|-------------------------------------------------------------------------------|" << endl;
	cout << "|                  |               | 1. EKONOMI        | Rp.1.650.000           |" << endl;
	cout << "| 2.GRD            | GARUDA        | 2. BISNIS         | Rp.3.750.000           |" << endl;
	cout << "|                  |               | 3. FIRST          | Rp.4.450.000           |" << endl;
	cout << "|-------------------------------------------------------------------------------|" << endl;
	cout << "|                  |               | 1. EKONOMI        | Rp.3.850.000           |" << endl;
	cout << "| 3.WIA            | WINGS AIR     | 2. BUSINESS       | Rp.5.950.000           |" << endl;
	cout << "|                  |               | 3. FIRST          | Rp.6.650.000           |" << endl;
	cout << "|-------------------------------------------------------------------------------|" << endl;
}

void daftarharga4() {
    cout << "|-------------------------------------------------------------------------------|" << endl;
	cout << "|Kode Pesawat      | Nama Pesawat  | Kelas Pesawat     | Harga Tiket            |" << endl;
	cout << "|-------------------------------------------------------------------------------|" << endl;
	cout << "|                  |               | 1. EKONOMI        | Rp.2.850.000           |" << endl;
	cout << "| 1.LIA            | LION AIR      | 2. BISNIS         | Rp.4.950.000           |" << endl;
	cout << "|                  |               | 3. FIRST          | Rp.5.650.000           |" << endl;
	cout << "|-------------------------------------------------------------------------------|" << endl;
	cout << "|                  |               | 1. EKONOMI        | Rp.3.200.000           |" << endl;
	cout << "| 2.GRD            | GARUDA        | 2. BISNIS         | Rp.5.300.000           |" << endl;
	cout << "|                  |               | 3. FIRST          | Rp.6.000.000           |" << endl;
	cout << "|-------------------------------------------------------------------------------|" << endl;
	cout << "|                  |               | 1. EKONOMI        | Rp.5.400.000           |" << endl;
	cout << "| 3.WIA            | WINGS AIR     | 2. BUSINESS       | Rp.7.500.000           |" << endl;
	cout << "|                  |               | 3. FIRST          | Rp.8.200.000           |" << endl;
	cout << "|-------------------------------------------------------------------------------|" << endl;
}

void daftarharga5() {
    cout << "|-------------------------------------------------------------------------------|" << endl;
	cout << "|Kode Pesawat      | Nama Pesawat  | Kelas Pesawat     | Harga Tiket            |" << endl;
	cout << "|-------------------------------------------------------------------------------|" << endl;
	cout << "|                  |               | 1. EKONOMI        | Rp.1.350.000           |" << endl;
	cout << "| 1.LIA            | LION AIR      | 2. BISNIS         | Rp.3.450.000           |" << endl;
	cout << "|                  |               | 3. FIRST          | Rp.4.150.000           |" << endl;
	cout << "|-------------------------------------------------------------------------------|" << endl;
	cout << "|                  |               | 1. EKONOMI        | Rp.1.700.000           |" << endl;
	cout << "| 2.GRD            | GARUDA        | 2. BISNIS         | Rp.3.800.000           |" << endl;
	cout << "|                  |               | 3. FIRST          | Rp.4.500.000           |" << endl;
	cout << "|-------------------------------------------------------------------------------|" << endl;
	cout << "|                  |               | 1. EKONOMI        | Rp.3.900.000           |" << endl;
	cout << "| 3.WIA            | WINGS AIR     | 2. BUSINESS       | Rp.6.000.000           |" << endl;
	cout << "|                  |               | 3. FIRST          | Rp.6.700.000           |" << endl;
	cout << "|-------------------------------------------------------------------------------|" << endl;
}



int main()
{
    menu m;
    menu data[100];
    char pilih,yesno,psw,kls;
    bool pesanlagi=true;
    int n,i,uang,harga,hargatiket;
    string lunas;
    n=0;
    i=0;
    uang=0;


    while (pesanlagi==true){
        system("cls"); // Clear tampilan
        cout << "Selamat Datang di Aplikasi Pemesanan Tiket Pesawat Bandara Bandar" << endl;
		cout << "|---------------------------------------------------------------|" << endl;
		cout << "|	Kode Penerbangan\t|		Rute		|	"                       << endl;
		cout << "|---------------------------------------------------------------|" << endl;
		cout << "|	1. JKT-PDG		|	JAKARTA-PADANG\t\t|"                        << endl;
		cout << "|	2. JKT-SIN		|	JAKARTA-SINGAPURA\t|"                       << endl;
		cout << "|	3. JKT-LMB		|	JAKARTA-LOMBOK\t\t|"                        << endl;
		cout << "|	4. JKT-KLM		|	JAKARTA-KUALA LUMPUR\t|"                    << endl;
		cout << "|	5. JKT-SBY		|	JAKARTA-SURABAYA\t|"                        << endl;
		cout << "|---------------------------------------------------------------|" << endl;cout<<endl;


		// INPUT USER
        cout << "Nama Penumpang \t\t: ";
		cin >> m.nama;
		cout << "Kode Penerbangan [1-5] \t: ";
		cin >> pilih;
        system("cls"); // Clear tampilan

		//KODE PENERBANGAN
		if (pilih=='1'){
            m.kodepenerbangan = "JAKARTA-PADANG";
            m.hargarute=500000;
            daftarharga1();
            }
		else if (pilih=='2'){
            m.kodepenerbangan = "JAKARTA-SINGAPURA";
            m.hargarute=2200000;
            daftarharga2();
             }
        else if (pilih=='3'){
            m.kodepenerbangan = "JAKARTA-LOMBOK";
            m.hargarute=450000;
            daftarharga3();
            }
        else if (pilih=='4'){
            m.kodepenerbangan = "JAKARTA-KUALA LUMPUR";
            m.hargarute=2000000;
            daftarharga4();
            }
        else if (pilih=='5'){
            m.kodepenerbangan = "JAKARTA-SURABAYA";
            m.hargarute= 500000;
            daftarharga5();
            }
        else {
            m.kodepenerbangan = "Pilihan tidak ada";
            }

        //INPUT KODE PESAAT & KELAS PESAWAT
		cout << "Kode Pesawat [1-3] \t: ";
		cin >> psw;
		cout << "Kelas Pesawat [1-3] \t: ";
		cin >> kls;

        //KODE PESAWAT
        if (psw=='1'){
            m.kodepesawat = "LION AIR";
            m.hargamaskapai=650000;
            }
		else if (psw=='2'){
            m.kodepesawat = "GARUDA";
            m.hargamaskapai=1000000;
            }
        else if (psw=='3'){
            m.kodepesawat = "WINGS AIR";
            m.hargamaskapai=3200000;}
        else{
            m.kodepesawat = "Pilihan Tidak ada";
            }

        //KODE KELAS PESAWAT
        if (kls=='1'){
            m.kelas = "EKONOMI"; m.hargakelas = 200000;
            }
        else if (kls=='2'){
            m.kelas = "BISNIS"; m.hargakelas = 2300000;
            }
        else if (kls=='3'){
            m.kelas = "FIRST"; m.hargakelas = 3000000;
            }
        else{
            m.kelas = "Pilihan Tidak ada";}

        //HARGA TIKET
        hargatiket = status (m.hargakelas, m.hargarute, m.hargamaskapai);
        cout << "Harga Rp. \t\t: " << hargatiket << endl;

        //INPUT NOREK & NOMINAL YANG HARUS DIBAYAR
        cout << "Masukkan No.Rek \t: ";
        cin >> m.rek;
        cout << "Masukkan Nominal Rp. \t: ";
        cin >> m.uang;

        //LUNAS & BELUM LUNAS
        if(m.uang==hargatiket){

            m.lunas = "Lunas";
        }
        else{
            m.lunas = "Belum Lunas";
        }

        //MASUK KE ARRAY
		data[n]=m; n++;

        cout << "Pesan Lagi ? y/n \t: ";
		cin >> yesno;
		if (yesno=='y'){
			pesanlagi = true;}
        else if (yesno=='n'){
            system("cls");
			cout<<endl;cout<<endl;
			cout << "                                 |---------------------------------------|" << endl;
			cout << "                                 |              Tiket Anda               |" << endl;
			cout << "                                 |---------------------------------------|" << endl;

        //OUTPUT NYA
        for (i=0; i<n; i++){
            cout << "                                 |---------------------------------------|" << endl;
            cout << "                                   Nama Penumpang :    " << data[i].nama << endl;
            cout << "                                   Tujuan         :    " << data[i].kodepenerbangan<< endl;
            cout << "                                   Maskapai       :    " << data[i].kodepesawat << endl;
            cout << "                                   Kelas Pesawat  :    " << data[i].kelas << endl;
            cout << "                                   Harga          :    Rp. " << data[i].hargakelas+data[i].hargarute+data[i].hargamaskapai << endl;
            cout << "                                   Rekening       :    " << data[i].rek << endl;
            cout << "                                   Bayar          :    Rp. " << data[i].uang << endl;
            cout << "                                   Status         :    " << data[i].lunas << endl;
            cout << "                                 |---------------------------------------|" << endl;}

			pesanlagi=false;}
    }
    cin.get();//Biar exe nggak langsung keluar
    cin.get();
    return 0;

}
