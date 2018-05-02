#include <iostream>
#include <cstring>
using namespace std;

class todo {
	private:
	
		string *list;
		int entry = 0;
		int length = 0;
		int next = 0;
		
	public:
	
		//Default Constructor
		todo();
		//Create list of length len
		todo(int l);
		
		//Destroy out list
		~todo();
		//Adds an item to list
		void add(string item);
		
		//Finish the last thing in list
		void done();
		
		//Print list
		void print();
};