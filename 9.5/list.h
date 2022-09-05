#pragma once
#ifndef __LIST_H__
#define __LIST_H__

#include <iostream>

using namespace std;

typedef int Item;

void visit_items(Item& item);

class List
{
private:
	static const int MAX = 10;
	Item items[MAX];
	int top;
public:
	List();
	bool isfull() const;
	bool isempty() const;
	bool add(Item& num);
	void visit(void (*pf)(Item&));
};

#endif