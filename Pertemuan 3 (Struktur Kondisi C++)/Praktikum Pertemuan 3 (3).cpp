#include <iostream>
using namespace std;
int main()
{
 char kode;
 //clrscr()
 cout<<"Masukan kode Barang [A.B.C] :";
 cin>>kode;

switch(kode){
 case 'A' :
 cout<<"Alat Olahraga";
 break;
 case 'B' :
 cout<<"Alat Elektronik";
 break;
 case 'C' :
 cout<<"Alat Masak";
 break;
 defaut:
 cout<<"Anda Salah Memasukan kode";
 break; 		
 }
 getchar();
}
