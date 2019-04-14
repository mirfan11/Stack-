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

bool isEmpty();
void push (int Newdata);
void pop ();
void viewStack();
char lagi (char pilih);

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
