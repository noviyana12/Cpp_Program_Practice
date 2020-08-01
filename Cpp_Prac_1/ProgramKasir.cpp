//this is the first practice program in c++
//this code using basic c++ codes and ELSE IF Statement

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int kode,jumlah, bayar, kembali, total;
	
	cout<<"Lamongan 74 \n\n\n";
	cout<<"Menu and Price \n\n";
	cout<<"1. Ayam Goreng   Rp.7000 \n";
	cout<<"2. Lele Goreng   Rp.10000 \n";
	cout<<"3. Bebek Goreng  Rp.15000 \n";
	cout<<"4. Es Jeruk      Rp.5000 \n";
	cout<<"5. Es Teh Manis  Rp.3000 \n\n";
	
	cout<<"Masukkan nomor menu yang ingin dipesan: ";
	cin>>kode;
	cout<<"Ingin pesan berapa? ";
	cin>>jumlah;
	
	if(kode==1){
		cout<<"Anda memesan ayam goreng berjumlah"<<" "<<jumlah<<endl;
		total = 7000*jumlah;
	}else if(kode==2){
		cout<<"Anda memesan lele goreng berjumlah"<<" "<<jumlah<<endl;
		total = 10000*jumlah;
	}else if(kode==3){
		cout<<"Anda memesan bebek goreng berjumlah"<<" "<<jumlah<<endl;
		total = 15000*jumlah;
	}else if(kode==4){
		cout<<"Anda memesan es jeruk berjumlah"<<" "<<jumlah<<endl;
		total = 5000*jumlah;
	}else if(kode==5){
		cout<<"Anda memesan es teh manis berjumlah"<<" "<<jumlah<<endl;
		total = 3000*jumlah;
	}else{
		cout<<"Maaf nomor yang anda masukkan salah \n\n";
	}
	
	cout<<"Total harga menu yang anda pesan adalah "<<total<<endl<<endl;
	cout<<"Masukkan uang anda:";
	cin>>bayar;
	cout<<"Uang yang anda bayar: "<<bayar<<endl;
	
	kembali= bayar-total;
	
	if(total==bayar){
		cout<<"Baik, uang anda sudah pas, terima kasih"<<endl;
	}else if(total< bayar){
		cout<<"Uang kembalian anda adalah "<<kembali<<endl;
	}else{
		cout<<"Maaf, uang anda belum cukup"<<endl;
	}
	
	return 0;
}
