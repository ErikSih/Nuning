#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;
int sewa_hotel(int lama, int harga){
   int totalharga =lama*harga;
   return totalharga;
}


int main()
{
	int kamar, harga, lama, bayar;
	string nama, nkamar;
    
    cout<<"*********SELAMAT DATANG*********"<<endl;
    cout<<"*********DE_LUNA HOTEL*********"<<endl;
    cout<<endl;
    cout<<"Nama : ";
    cin>>nama;
	cout<<endl;
	cout<<"No   Jenis Kamar          Harga "<<endl;
	cout<<"1.   Romoela              Rp:500.000"<<endl;
	cout<<"2.   Safira               Rp:1.000.000"<<endl;
	cout<<"3.   Artacitra            Rp:1.500.000"<<endl;
	cout<<"********************************"<<endl;
	cout<<endl;
	cout<<"Pilh Jenis kamar : ";
	cin>>kamar;
	cout<<endl;

	if (kamar==1)
	{
		harga=500000;
		nkamar="Romoela";
	}
	else if (kamar==2)
	{
		harga=1000000;
		nkamar="Safira";
	}
	else if (kamar==3)
	{
		harga=1500000;
		nkamar="Artacitra";
	}
	
	cout<<"Kamar yang anda pilih adalah "<<nkamar<<" dengan harga Rp:"<<harga<<"/Hari"<<endl;
	cout<<"Berapa lama anda ingin menyewa kamar tersebut : ";
	cin>>lama;
	cout<<"biaya sewa yang harus dibayar adalah "<<harga<<endl;
	cout<<endl;
	int totalharga=sewa_hotel(lama, harga);
	cout<<"Jenis kamar pilihan anda : "<<nkamar<<endl;
	cout<<"Lama penyewaan anda "<<lama<<" hari"<<endl;
	cout<<"Total harga penyewaan yang harus anda bayar adalah  Rp; "<<totalharga<<endl;
	getch();
return 0;


}