#include <iostream>
#include <cstring>
#include "todo.h"
using namespace std;


int main(){
	char next = 'y';
	int len = 0;
	string action;
	cout<< "How long do you want your list:  ";
	cin>> len;
	
	todo list(len);
	
	
	//Array of todo objects
	//Make sure you have a ()constructor
	todo manylists[10];
	
	while(next != 'x'){
		
		cout << "Add to list (a)" << endl;
		cout << "Done list item (d)" << endl;
		cout << "Print list (p)" << endl;
		cout << "Exit list app (x)" << endl;
		cout << "What do you want to do: " << endl;
		cin >> next;
		
		switch(next){
			case 'a':
				cout << "Name a todo item: ";
				//cin  >> action;
				getline (cin, action);
				//Action needs to follow a followed by a space. "a enter_string_here"
				list.add(action);
				break;
			case 'd':
				list.done();
				break;
			case 'p':
				list.print();
				break;
			case 'x':
				//list.exit();
				break;
			}
		}
}