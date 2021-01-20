#include<iostream>
using namespace std;

void line(){
    cout<<"\n-----------------------------"<<endl;
}
int main(){
       cout<<"Setengah Piramida";
       line();
     for(int i=1 ; i<=9 ; i++){
         for(int p=1 ; p<=i ; p++){
             cout<<"  *";
         }
         cout << endl;
      }
      return 0;
}
