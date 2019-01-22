#include "stackClass.h"
using namespace std;
#include <iostream>

stack :: stack(){
	tos =0;
	for (int i=0; i<10; i++) S[i] =0;
}


stack :: ~stack (){
    // nothing to deconstruct here
    cout << "Deconstructor done";
}
void stack:: push (int x){
	if (isFull ()){
		cout << "Stack is full\n";
		return;
	}
	
	S[tos]= x;
	tos++; // next empty position
}

int stack :: pop ()
{
	int value=0;
	if (isEmpty()){
		cout << "Stack is empty\n";
		return 0;
	}
	
	value = S[tos-1];
	S[tos-1] = NULL;
	tos-=1;
	return value;  
}

int stack:: isEmpty (){
    if(tos>0)
    	return 0;
    return 1;
}

int stack::isFull (){
	if (tos <10){
		return 0;
	}
	return 1;
}

