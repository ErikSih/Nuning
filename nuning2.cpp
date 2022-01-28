#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

//struct
struct menu{
int uang,hargakelas,hargarute, hargamaskapai, tharga;
string nama,kodepenerbangan,kodepesawat,kelas,rek, lunas;};
//Fungsi
int status(int a, int b, int c){
    int tharga=a+b+c;
    return tharga;
}

    menu m;
    menu data[100];
    char pilih,yesno,psw,kls;
    bool pesanlagi=true;
    int n=0,i=0,uang=0,harga;
    string lunas;

    void penerbangan1(){

    }
    void kodepesawat1(){
        m.kodepesawat = "LION AIR";
        m.hargamaskapai=650000;
    }
    void kodekelaspesawat1(){
        m.kelas = "EKONOMI"; m.hargakelas = 200000;
    }
        int tharga = status (m.hargakelas, m.hargarute, m.hargamaskapai);

    
void menupenerbangan(){
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
        cout << "Kode Penerbangan <1-5> : ";
		cin >> pilih;
}

void daftarharga1() {
    cout << "|-------------------------------------------------------------------------------|" << endl;
	cout << "|Kode Pesawat      | Nama Pesawat  | Kelas Pesawat     | Harga Tiket            |" << endl;
	cout << "|-------------------------------------------------------------------------------|" << endl;
	cout << "|                  |               | 1. EKONOMI        | Rp.1.350.000           |" << tharga << endl;
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
	cout << "|                  |               | 1. EKONOMI        | Rp.1.700.000           |" << endl;
	cout << "| 2.GRD            | GARUDA        | 2. BISNIS         | Rp.3.800.000           |" << endl;
	cout << "|                  |               | 3. FIRST          | Rp.4.500.000           |" << endl;
	cout << "|-------------------------------------------------------------------------------|" << endl;
	cout << "|                  |               | 1. EKONOMI        | Rp.3.400.000           |" << endl;
	cout << "| 3.WIA            | WINGS AIR     | 2. BUSINESS       | Rp.5.500.000           |" << endl;
	cout << "|                  |               | 3. FIRST          | Rp.6.200.000           |" << endl;
	cout << "|-------------------------------------------------------------------------------|" << endl;
}

void menukodepenerbangan(){
    		if (pilih=='1'){
            penerbangan1();
            daftarharga1();
            }
		else if (pilih=='2'){
            m.kodepenerbangan = "JAKARTA-SINGAPURA"; m.hargarute=2200000;
            daftarharga2();
            }
        else if (pilih=='3'){
            m.kodepenerbangan = "JAKARTA-LOMBOK"; m.hargarute=450000;}
        else if (pilih=='4'){
            m.kodepenerbangan = "JAKARTA-KUALA LUMPUR"; m.hargarute=2000000;}
        else if (pilih=='5'){
            m.kodepenerbangan = "JAKARTA-SURABAYA"; m.hargarute= 500000;}
        else {
            m.kodepenerbangan = "Pilihan tidak ada";
            }
}



int main()
{
    while (pesanlagi==true){
        system("cls"); // Clear tampilan
        menupenerbangan();

		// INPUT USER
		cout << "Nama Penumpang : ";
		cin >> m.nama;

        


		//KODE PENERBANGAN
        menukodepenerbangan();
		cout << "Kode Pesawat <1-3> : ";
		cin >> psw;
		cout << "Kelas Pesawat <1-3> : ";
		cin >> kls;
        //KODE PESAWAT
        if (psw=='1'){
            kodepesawat1();
        }
		else if (psw=='2'){
            m.kodepesawat = "GARUDA"; m.hargamaskapai=1000000;}
        else if (psw=='3'){
            m.kodepesawat = "WINGS AIR"; m.hargamaskapai=3200000;}
        else{
            m.kodepesawat = "Pilihan Tidak ada";}

        //KODE KELAS PESAWAT
        if (kls=='1'){
            kodekelaspesawat1();
            }
        else if (kls=='2'){
            m.kelas = "BISNIS"; m.hargakelas = 2300000;
            }
        else if (kls=='3'){
            m.kelas = "FIRST"; m.hargakelas = 3000000;
            }
        else{
            m.kelas = "Pilihan Tidak ada";}

        tharga = status (m.hargakelas, m.hargarute, m.hargamaskapai);
        cout << "Harga Rp. : " << tharga << endl;
        cout << "Masukkan No.Rek : ";
        cin >> m.rek;
        cout << "Masukkan Jumlahnya Rp. : ";
        cin >> m.uang;

        if(m.uang==tharga){

            m.lunas = "Lunas";
        }
        else{
            m.lunas = "Belum Lunas";
        }

        //MASUK KE ARRAY
		data[n]=m; n++;

        cout << "Pesan Lagi ? y/n ";
		cin >> yesno;
		if (yesno=='y'){
			pesanlagi = true;}
        else if (yesno=='n'){
			cout<<endl;cout<<endl;
			cout << "                                 |---------------------------------------|" << endl;
			cout << "                                 |              Tiket Anda               |" << endl;
			cout << "                                 |---------------------------------------|" << endl;

        //OUTPUT NYA
        for (i=0; i<n; i++){
            cout << "                                 |---------------------------------------|" << endl;
            cout << "                                 |  Nama Penumpang :    " << data[i].nama << "               |" << endl;
            cout << "                                 |  Tujuan         :    " << data[i].kodepenerbangan << "   |"<< endl;
            cout << "                                 |  Maskapai       :    " << data[i].kodepesawat << "          |" << endl;
            cout << "                                 |  Kelas Pesawat  :    " << data[i].kelas << "        |"<< endl;
            cout << "                                 |  Harga          :    Rp. " << data[i].hargakelas+data[i].hargarute+data[i].hargamaskapai << endl;
            cout << "                                 |  Rekening       :    " << data[i].rek << endl;
            cout << "                                 |  Bayar          :    Rp. " << data[i].uang << endl;
            cout << "                                 |  Status         :    " << data[i].lunas << endl;
            cout << "                                 |---------------------------------------|" << endl;}

			pesanlagi=false;}
    }
    cin.get();
    cin.get();
    return 0;

}
