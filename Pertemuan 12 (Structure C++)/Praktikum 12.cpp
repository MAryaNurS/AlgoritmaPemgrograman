//Implementasi Linked List
#include <iostream>
using namespace std;
class Node {
	public :
	int value;
	Node* next;	
};
int main() {
	Node* head;
	Node* one = NULL;
	Node* two = NULL;
	Node* three = NULL;
	one = new Node();
	two = new Node();
	three = new Node();
	one -> value = 1;
	two -> value = 2;
	three -> value = 3;
	one -> next = two;
	two -> next = three;
	three -> next = NULL;
	head = one;
	while (head != NULL) {
		cout << head -> next;
		head = head -> next;
	} 
}

//Implementasi Program Stack Perpustakaan
#include <iostream>
#define MAX 5
using namespace std;
struct TumpukanBuku {
	int top;
	int antrian[MAX];
}perpus;
void inisialisasi() {
	perpus.top = -1;
}
bool KondisiKosong() {
	return perpus.top == -1;
}
bool KondisiPenuh() {
	return perpus.top == MAX - 1;
}
void InputData() {
	if (KondisiPenuh()) {
		cout << " \nAntrian penuh " << endl;
	}
	else {
	perpus.top++;
		cout << " \nMasukan Antrian = "; cin >> perpus.antrian[perpus.top];
		cout << " Antrian " << perpus.antrian[perpus.top] << " Telah Masuk Ke Tumpukan Buku " << endl;
	}
}
void HapusData() {
	if (KondisiKosong()) {
		cout << " \nAntrian kosong\n " << endl;
	}
	else {
		cout << " \nAntrian " << perpus.antrian[perpus.top] << " Telah Di Hapus " << endl;
	perpus.top--; 
	}
}
void TampilData() {
	if (KondisiKosong()) {
		cout << " Antrian kosong"
	}
	else {
		cout << " \nAntrian : ";
		for (int i=perpus.top; i>=0; i++)
		cout << perpus.antrian[i] << ((i == 0) ? "" : ",");
	}
}
int main() {
	int pilihan;
	inisialisasi();
	do {
		TampilData();
		cout << " \n1. Masukan Data\n "
		<< " 2. Hapus Data\n "
		<< " 3. Keluar\n "
		<< " Masukan Pilihan : ";
		cin >> pilihan;
		switch (pilihan)
		{
			case 1 :
				InputData();
				break;
			case 2 :
				HapusData();
				break;
			default :
			cout << " Pilihan tidak tersedia " << endl;
			break;		
		}
	} while (pilihan!=3);
}

//Implementasi Program Linked - Stack
#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
	int info;
	node *next;
} *top, *newptr, *save, *ptr;
node *create_new_node(int);
void push(node *);
void display(node *);
int main()
{
	//clrscr();
	int inf;
	char ch = 'y';
	top = NULL;
	while (ch == 'y' || ch == 'Y')
	{
		cout << " Masukan node baru.. ";
		cin >> inf;
		newptr = create_new_node(inf);
		if (newptr == NULL)
		{
			cout << " \nMaaf.!..tidak dapat menjalankan perintah..!!\n ";
			cout << " Tekan tombol apa saja untuk keluar..\n ";
			getchar();
			exit(1);
		}
		push (newptr);
		cout << " \nAntrian tumpukan saat ini :\n ";
		display(top);
		cout << " \nIngin menambah antrian ? (y/n).. ";
		cin >> ch;
	}
	getchar();
}
node *create_new_node(int x)
{
	ptr = new node;
	ptr -> info = x;
	ptr -> next = NULL;
	return ptr;
}
void push (node *n)
{
	if (top == NULL)
	{
		top = n;
	}
	else
	{
		save = top;
		top = n;
		n -> next = save;
	}
}
void display (node *n)
{
	while (n != NULL)
	{
		cout << n->info info << " -> ";
		n = n -> next;
	}
	cout << " !!\n ";
}

//Implementasi Fungsi Inline
#include <iostream>
#include <stdlib.h>#include <malloc.h>
using namespace std;
#define Nil NULL
#define info(P) P->info
#define next(P) P->next
#define First(L) (L)
typedef int InfoType;
typedef struct telmtlist *address;
typedef struct telmtlist
{
InfoType info;
address next;
}elmtlist;
typedef address list;
void CiptaSenarai (list *L)
{
First(*L) = Nil;
}
list NodBaru(int m)
{
list n;
n = (list) malloc(sizeof(elmtlist));
if (n != NULL)
{
info (n) = m;
next (n) = Nil;
}
return n;
}
void SisipSenarai (list *L, list t, list p)
{
if (p == Nil)
{
t->next = *L;
*L = t;
}else
{
t->next = p->next;
p->next = t;
}
}
void CetakSenarai (list L)
{
list ps;
for (ps=L; ps!=Nil; ps=ps->next)
{
cout<<" "<<info(ps)<<" -->";
}
cout<<" NULL"<<endl;
}
InfoType Max(list L)
{
address Pmax, Pt;
Pmax = First(L);
if (next(Pmax) == Nil)
{
return (info(Pmax));
}else
{
Pt = next(Pmax);
while (Pt != Nil)
{
if (info(Pmax) < info(Pt))
{
Pmax = Pt;
}else
{
Pt = next(Pt);
}
}
return (info(Pmax));
}
}
InfoType Min(list L)
{
	address Pmin, Pt;
Pmin = First(L);
if (next(Pmin) == Nil)
{
return (info(Pmin));
}else
{
Pt = next (Pmin);
while (Pt != Nil)
{
if(info(Pmin) > info(Pt))
{
Pmin = Pt;
}else
{
Pt = next(Pt);
}
}
return (info(Pmin));
}
}
int main()
{
list pel;
list n;
int i, k, nilai, maks, min;
CiptaSenarai(&pel);
cout<<"Masukkan Banyak Data = ";
cin>>k;
for (i=1; i<=k; i++)
{
cout<<"Masukkan Data Senarai ke- "<<i<<" = ";
cin>>nilai;
n = NodBaru (nilai);
SisipSenarai (&pel, n, NULL);
}
cout<<endl;
CetakSenarai(pel);
maks = Max(pel);
min = Min(pel);
cout<<endl;
CetakSenarai(pel);
maks = Max(pel);
min = Min(pel);
cout<<endl;
cout<<"Nilai Terbesar : "<<maks;
cout<<endl;
cout<<"Nilai Terkecil : "<<min;
}
