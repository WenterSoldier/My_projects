#pragma once
#include <iostream>
using namespace std;
typedef int valuedef;
class Queue
{
public:
	Queue();
	~Queue();
	int rear=-1, front=0,count=0;
	valuedef arr[9];
	void push(valuedef x) {
		
		
			/*if (rear == -1 && front == -1)
				front = rear = 0;
			else if (rear == 9 &&  front != 0) {
				rear = 0;
				front++;
			}
			else if (rear > 0 && front == 9)
			{
				front = 0;
				rear++;
			}
			else
				rear++;
			arr[rear] = x;

			}*/}
	void enqueue(valuedef x) {
		if (!isFull()) {
			rear = (rear + 1) % 9;
			arr[rear]=x;
			count++;
		}
		else
			cout << "Array IS Full" << endl;

	}
	valuedef dequeue() {
		if (!isEmpty()) {
			valuedef e = arr[front];
			front = (front + 1) % 9;
			count--;
			return e;
		}
		else
			cout << "Array Is Empty" << endl;

	}
	valuedef pop() {

			

			}

	bool isFull() {
		
		return (count == 9);
	}
	bool isEmpty() {
		return (count == 0);
	}
};

