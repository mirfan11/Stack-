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
