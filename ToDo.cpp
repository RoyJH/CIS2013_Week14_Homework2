#include "todo.h"
using namespace std;

todo::todo(int len){
	length = len;
	list = new string[length];
}
todo::~todo(){
	delete [] list;
}
todo::todo(){
	todo(5);
}

	//Adds an item to list
void todo::add(string item){
	if(next < length){
		list[next] = item;
		next++;
	}
	else cout << "List is full. Must remove an entry first." << endl;
}	
	//Finish the last thing in list
void todo::done(){
	cout << "Which task has been completed?";
	cin>> entry;
	for(int j=entry;j<todo::length;j++){
	list [j] = list [j+1] ;}
	next--;
	list[next]="";
}
		
	//Print list
void todo::print(){
	for (int i=0;i<next;i++){
		cout << " * " << list[i] << endl;
		}
}