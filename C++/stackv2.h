#pragma once
#include <iostream>
using namespace std;
typedef int valuedef;
class stackv2
{

public:
	stackv2();
	~stackv2();
	valuedef arr[7] = { 0 };
	void push(valuedef x) {	
		if (!isFull()) {		
			arr[++arr[0]] = x;			
		}
		else {
			cout << "Array is full" << endl;
		}
	}
	/*==========================================================*/
	valuedef pop() {
		
		if (!isEmpty())
			return arr[arr[0]--];
		else
			cout << "Array is Empty" << endl;
	}
	bool isFull() {
		/*if (top == 5)
		{
		cout << "Array is full";
		return true;
		}
		else
		return false;*/
		return arr[0] == 5;
	}
	bool isEmpty() {
		/*if (top == 0) {
		cout << "array is empty";
		}
		*/		return arr[0] == 0;
	}
};

