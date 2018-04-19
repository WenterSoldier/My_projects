#pragma once
typedef int valuedef;
#include <iostream>


class node {
public:
	int data;
	node *next;
	//----------------------Constructor
	node(valuedef x) {
		data = x;
		next = NULL;
	}
};
class LinkedList {
private:
	int count;
	node * head;

public:
	LinkedList() {
		head = NULL;
		int count = 0;
	}

	int insert(int pos, valuedef data) {
		if (pos <= count && pos >= 0) {
			node *p = new node(data);

			if (pos == 0) {
				p->next = head;
				head = p;
			}
			else {
				node *q = head;
				for (int i = 0; i < pos - 1; i++)
					q = q->next;
				p->next = q->next;
				q->next = p;
			}
			count++;
			return 0;
		}
		else
			return 1;
	}
	valuedef Delete(int pos) {
		valuedef data;
		node *p, *tmp;
		if (pos == 0) {
			data = head->data;
			tmp = head->next;
			delete head;
			head = tmp;
		}
		else {
			p = head;
			for (int i = 0; i < pos - 1; i++)
				p = p->next;
			data = p->next->data;
			tmp = p->next->next;
			delete p->next;
			p->next = tmp;
		}
		count--;
		return data;
	}
};