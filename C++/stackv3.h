#pragma once
#include <iostream>
using namespace std;
typedef int valuedef;
class stackv3
{
public:
	stackv3();
	~stackv3();
	valuedef arr[10];
	int top = 9,bottom = 0;

	void push_Up(valuedef x) {//from bottom
		if (!isFull()) {
			arr[bottom] = x;
			bottom++;
		}
		else {
			cout << "Array is full" << endl;
		}
	}
	/*==========================================================*/
	void push_down(valuedef x) {//from top
		if (!isFull()) {
			arr[top] = x;
			top--;
		}
		else {
			cout << "Array is full" << endl;
		}
	}
	/*==========================================================*/
	valuedef pop_top(){
		if (!isEmpty())
			return arr[++top];
		else
			cout << "Array is Empty" << endl;
	}
	valuedef pop_bottom() {
		if (!isEmpty())
			return arr[--bottom];
		else
			cout << "Array is Empty" << endl;
	}
	/*==========================================================*/
	bool isFull() {
		if (top + bottom ==15) // 15 = 9 + 5 , 5 for the numbers that we fill first and 9 is the empty part of stack
		{
		cout << "Array is full";
		return true;
		}
		else
		return false;
	}
	bool isEmpty() {
		if (top == 9 && bottom == 0) {
		cout << "array is empty";
		return true ;
		}
		else
			return false;
	}



};

