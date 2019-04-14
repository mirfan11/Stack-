//Nama 	: Muhammad Irfan 
//NPM 	:1817051071
//Subjek :program Stack dengan konsep linked list 

#include <iostream>
#include <stdlib.h>
using namespace std;

struct node{
	int value ;
	node *next ;
	
}*top =NULL;

//deklarasi fungsi
bool isEmpty();
void push (int Newdata);
void pop ();
void viewStack();

int main(){//program utama
	int menu, nilai;
	char pilih;
	while (menu!=4){
		cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout<<"Menu Program Stack : \n";
		cout<<"1. Push\n";
		cout<<"2. Pop\n";
		cout<<"3. Tampilkan\n";
		cout<<"4. Exit\n";
		cout<<"Pilih: ";
		cin>>menu;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		switch(menu)
		{
			case 1: //push
				do{
					cout<<"Masukkan Nilai : ";
					cin>>nilai;
					push(nilai); //memanggil fungsi push
					cout<<"\ningin memasukkan nilai lagi (y/Y) : ";
					cin>>pilih;
				}while (pilih=='y'||pilih =='Y');
				break ;
			
			case 2://pop
				do{
					pop();//memanggil fungsi pop
					cout<<"ingin di Pop lagi (y/Y) : ";
					cin>>pilih;
				}while (pilih=='y'||pilih =='Y');
				break ;
				
			case 3 ://menampilkan isi stack
				cout<<"Isi Stack :\n";
				viewStack();//memanggil fungsi view Stack
				break;
			case 4://keluar dari program
				cout<<"\nTelah keluar dari Program. Terimakasih\n";
				break;
			default :
				cout<<"\nMenu pada program tidak tersedia , silahkan ulangi kembali \n";
				break;
		}
	}
}

bool isEmpty (){
	return (top==NULL);
}

void push (int Newdata){
	node *Newnode = (node*) malloc (sizeof(node));
	Newnode -> value =Newdata;
	Newnode -> next =top;
	top = Newnode; 	
} 

void pop (){
	node *deletenode;
	if(isEmpty())	
		cout<<" Stack kosong ";
	else{
	deletenode =top;
	cout<<"nilai : "<<deletenode -> value <<" , popped. \n";
	top =top -> next;
	delete deletenode;		
	}
}

void viewStack(){
	node *bantu =top;
	if(!isEmpty()){
		do{
			cout<<bantu ->value <<"\n";
			bantu=bantu -> next;
		}while (bantu !=NULL);
	}
	else
		cout<<"Stack Kosong \n";
}
