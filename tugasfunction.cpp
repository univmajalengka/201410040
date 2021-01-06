//procedure dan function 
#include <iostream>

using namespace std;
int function_td(int j, int m, int d);
int function_waktu(int td);
void tampil(int show);
void garis();

int main(){
	cout<<"Program Konversi Dengan Menggunakan Function";
	garis();
	
	int td,waktu,a,b,c,d;	
	td=function_td(a,b,c);
	tampil(td);
	garis();
	waktu=function_waktu(d);
	garis();
	return 0;	
}
//function mencari total detik
int function_td(int j, int m, int d){
	int td;
	cout<<"Konversi Waktu ke Total Detik >>"<<endl;
	cout<<"Masukan Waktu"<<endl;
	cout<<"jam : ";
	cin>>j;
	cout<<"menit : ";
	cin>>m;
	cout<<"detik : ";
	cin>>d;
	cout<<"Hasilnya = ";
	td=(j*3600)+(m*60)+d;
	return td;
}
//function konversi Total Detik ke Jam, Menit & Detik
int function_waktu(int td){	
	int j,m,sm,d;
	cout<<"Konversi Total Detik ke Jam, Menit & Detik >>"<<endl;
	cout<<"Masukan Total Detik : ";
	cin>>td;
	j=td/3600;
	sm=td%3600;
	m=sm/60;
	d=sm%60;
	cout<<"Hasilnya = "<<j<<":"<<m<<":"<<d;
	return 0;
}

void tampil(int show){
	cout<<show;
}
void garis(){
	cout<<endl;
	cout<<"------------------------------------------------>"<<endl<<endl;
}
