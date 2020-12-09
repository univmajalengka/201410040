#include <iostream>
 
using namespace std;
 
//konversi jam menit detik ke total detik
//konversi total detik ke jam menit dan detik
//mencari perbedaan dari 2 buah jam (program billing telepon/ warnet)
//deklarasi:
 
int konversi(int jam, int menit, int detik){
    jam = jam * 3600;
    menit = menit * 60;
    
    int total = jam + menit + detik;
    
    return total;
}
 
int konversiDetik(int detik, char tipeWaktu) {
    int sisa;
    sisa = detik % 3600;
    
    switch(tipeWaktu){
        case 'j':
            return detik / 3600;
            break;
        case 'm':
            return sisa / 60;
            break;
        case 'd':
            return sisa % 60;
            break;
        default:
            cout << "masukan tipe waktu!";
            return 0;
            break;
    }
}
 
 
 
int main(){
    int j1,m1,d1,td1,j2,m2,d2,td2,j3,m3,d3,td3;
//deskripsi program:
//masukan waktu awal ex: 9:25:30
    cout << "masukan jam awal: "; cin >> j1;
    cout << "masukan menit awal: "; cin >> m1;
    cout << "masukan detik awal: "; cin >> d1;
 
//masukan waktu akhir ex: 10:26:31
    cout << "masukan jam akhir: "; cin >> j2;
    cout << "masukan menit akhir: "; cin >> m2;
    cout << "masukan detik akhir: "; cin >> d2;
    
    cout << endl << endl;
 
//proses konversi waktu ke td
    
    td1 = konversi(j1,m1,d1);
    td2 = konversi(j2,m2,d3);
    
 
//operasi pengurangan
    td3 = td2-td1;
 
//konversi td ke j3, m3, d3
    j3 = konversiDetik(td3, 'j');
    m3 = konversiDetik(td3, 'm');
    d3 = konversiDetik(td3, 'd');
    
    cout << "prosesing konversi ke j3:m3:d3" << endl;

//tampilan layar ex 1:1:1
    cout << "waktu total: " << j3 << ":" << m3 << ":" << d3;
}
