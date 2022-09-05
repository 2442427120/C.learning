#include <iostream>
#include "list.h"

List::List()
{
	for (int i = 0; i < MAX; i++)
		items[i] = 0;

	top = 0;
}

bool List::isfull() const
{
	return top == MAX;
}

bool List::isempty() const
{
	return top == 0;
}

bool List::add(Item& num)
{
	if (top < MAX)
	{
		items[top++] = num;
		return true;
	}
	else
		return false;

}

void List::visit(void (*pf)(Item&))
{
	std::cout << "List content:\n";
	for (int i = 0; i < top; i++)
		(*pf)(items[i]);
}

void visit_items(Item& item)
{
	cout << item << " ";
}