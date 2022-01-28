#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

//struct
struct menu{
int uang, tharga;
int hargarute[5]={500000,2200000,450000,2000000,500000};
int hargamaskapai[3]={650000,1000000,3200000};
int hargakelas[3]={200000,2300000,3000000};
string nama,kodepenerbangan,kodepesawat,kelas,rek, lunas;
};

/*struct daftarhargarute
{
   int hargarute[5]={500000,2200000,450000,2000000,500000};
};*/



//Fungsi
int status(int a, int b, int c){
    int tharga=a+b+c;
    return tharga;
}
    //daftarhargarute dhr;
    menu m;
    menu data[100];
    char pilih,yesno,psw,kls;
    bool pesanlagi=true;
    int n=0,i=0,uang=0,harga, tharga;
    string lunas;
/*
    int hargarute1(){
        m.hargarute=500000;
    }
    int hargamaskapai1(){
        m.hargamaskapai=650000;
    }
    int hargakelas1(){
        m.hargakelas = 200000;
    }
    int hargatiket1(){
       tharga = status (hargarute1(),hargamaskapai1(),hargakelas1());
       return tharga;
    }
    */
       int hargatiket1(){
       tharga = status (m.hargarute[0],m.hargamaskapai[0],m.hargakelas[0]);
       return tharga;
    }
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
}


void daftarharga1() {
    cout << "|-------------------------------------------------------------------------------|" << endl;
	cout << "|Kode Pesawat      | Nama Pesawat  | Kelas Pesawat     | Harga Tiket            |" << endl;
	cout << "|-------------------------------------------------------------------------------|" << endl;
	cout << "|                  |               | 1. EKONOMI        | Rp.1.350.000           |" <<hargatiket1()<< endl;
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
	cout << "| 2.GRD            | GARUDA        | 2. BISNIS         | Rp.3.800.000           |" << endl;
	cout << "|                  |               | 3. FIRST          | Rp.4.500.000           |" << endl;
	cout << "|-------------------------------------------------------------------------------|" << endl;
	cout << "|                  |               | 1. EKONOMI        | Rp.3.400.000           |" << endl;
	cout << "| 3.WIA            | WINGS AIR     | 2. BUSINESS       | Rp.5.500.000           |" << endl;
	cout << "|                  |               | 3. FIRST          | Rp.6.200.000           |" << endl;
	cout << "|-------------------------------------------------------------------------------|" << endl;
}

void menukodepenerbangan(){
		//KODE PENERBANGAN
		if (pilih=='1'){
            m.kodepenerbangan = "JAKARTA-PADANG";
            //hargarute1();
            daftarharga1();
            }
		else if (pilih=='2'){
            m.kodepenerbangan = "JAKARTA-SINGAPURA";
            daftarharga2();
            }
        else if (pilih=='3'){
            m.kodepenerbangan = "JAKARTA-LOMBOK";}
        else if (pilih=='4'){
            m.kodepenerbangan = "JAKARTA-KUALA LUMPUR";}
        else if (pilih=='5'){
            m.kodepenerbangan = "JAKARTA-SURABAYA";}
        else {
            m.kodepenerbangan = "Pilihan tidak ada";}
}



int main()
{
    while (pesanlagi==true){
        system("cls"); // Clear tampilan
        menupenerbangan();

		// INPUT USER
		cout << "Nama Penumpang : ";
		cin >> m.nama;
		cout << "Kode Penerbangan <1-5> : ";
		cin >> pilih;
        


		//KODE PENERBANGAN
        menukodepenerbangan();
		cout << "Kode Pesawat <1-3> : ";
		cin >> psw;
		cout << "Kelas Pesawat <1-3> : ";
		cin >> kls;
        //KODE PESAWAT
        if (psw=='1'){
            m.kodepesawat = "LION AIR";
            //hargamaskapai1();
            }
		else if (psw=='2'){
            m.kodepesawat = "GARUDA"; m.hargamaskapai[1];}
        else if (psw=='3'){
            m.kodepesawat = "WINGS AIR"; m.hargamaskapai[2];}
        else{
            m.kodepesawat = "Pilihan Tidak ada";}

        //KODE KELAS PESAWAT
        if (kls=='1'){
            m.kelas = "EKONOMI";
            //hargakelas1(); 
            }
        else if (kls=='2'){
            m.kelas = "BISNIS"; m.hargakelas[1];
            }
        else if (kls=='3'){
            m.kelas = "FIRST"; m.hargakelas[2];
            }
        else{
            m.kelas = "Pilihan Tidak ada";}

        //tharga = status (m.hargakelas, m.hargarute, m.hargamaskapai);
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
            cout << "                                 |  Harga          :    Rp. " /*<< data[i].hargakelas+data[i].hargarute+data[i].hargamaskapai*/ << endl;
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
