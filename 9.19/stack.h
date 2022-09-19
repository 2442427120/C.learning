#pragma once
#ifndef __STOCK_H__
#define __STOCK_H__

 //stack.h -- class declaration for the stack ADT
 typedef unsigned long Item;

 class Stack
 {
 private:
	 enum { MAX = 10 }; //	constant specific to class
	 Item* pitems;
	 int size;
	 int top;
 public:
	 Stack(int n = MAX);
	 Stack(const Stack& st);
	 ~Stack();
	 bool isempty() const;
	 bool isfull() const;
	 //push() return false if stack already is full, true otherwise
	 bool push(const Item& item);
	 //pop() return false if stack already is empty, true otherwise
	 bool pop(Item& item);
	 Stack& operator=(const Stack& st);
 };

#endif
