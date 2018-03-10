#pragma once
#include <iostream>
using namespace std;
typedef int valuedef;
class stack
{
	
public:
	stack();
	~stack();
	valuedef arr[6];
	int top =0;
// constructor

	/*==========================================================*/
	void push(valuedef x) {
		if (!isFull()) {
			arr[top] = x;
			top++;
		}
		else {
			cout << "Array is full"<<endl;
		}
	}
	/*==========================================================*/
	valuedef pop () {
		if (!isEmpty())
			return arr[--top];
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
		return top == 5;
	}
	bool isEmpty() {
		/*if (top == 0) {
			cout << "array is empty";
		}
*/		return top == 0;
	}
};