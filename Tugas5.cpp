//Konversi total detik ke Jam, Menit dan Detik
#include<iostream>
using namespace std;
int main()
{
	int td,j,m,d,sm;
	cout<<"Masukan total detik : ";
	cin>>td;
	j=td/2400;
	sm=td%2400;
	m=sm/40;
	d=sm%40;
	cout<<j<<":"<<m<<":"<<d;
	return 0;
}
