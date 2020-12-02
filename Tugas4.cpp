#include<iostream>
using namespace std;
int main()
{
	cout<<"Pilih Menu : "<<endl;
	cout<<"1. Pertambahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Sisa Hasil Bagi"<<endl;
	
	float a,b,c, menu;
	int d,e,f;
	
	cout<<"Masukkan menu: ";
	cin>>menu;
	
	if(menu==1){
		cout<<"Masukkan angka pertama: ";
		cin>>a;
		cout<<"Masukkan angka kedua: ";
		cin>>b;
		c=a+b;
		cout<<"Hasilnya: "<<c;
	}else if(menu==2){
		cout<<"Masukkan angka pertama: ";
		cin>>a;
		cout<<"Masukkan angka kedua: ";
		cin>>b;
		c=a-b;
		cout<<"Hasilnya: "<<c;
	}else if(menu==3){
		cout<<"Masukkan angka pertama: ";
		cin>>a;
		cout<<"Masukkan angka kedua: ";
		cin>>b;
		c=a*b;
		cout<<"Hasilnya: "<<c;
	}else if(menu==4){
		cout<<"Masukkan angka pertama: ";
		cin>>a;
		cout<<"Masukkan angka kedua: ";
		cin>>b;
		c=a/b;
		cout<<"Hasilnya: "<<c;
	}else if(menu==5){
		cout<<"Masukkan angka pertama: ";
		cin>>d;
		cout<<"Masukkan angka kedua: ";
		cin>>e;
		f=d%e;
		cout<<"Hasilnya: "<<f;
	}else{
		cout<<"Menu Tidak Ada";
	}
	return 0;
}
