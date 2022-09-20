#define _CRT_SECURE_NO_WARNINGS
#include "cow.h"
#include <cstring>

Cow::Cow()
{
	name[0] = '\0';
	hobby = new char[1];
	hobby[0] = '\0';
	weight = 0;
}

Cow::Cow(const char* nm, const char* ho, double wt)
{
	strcpy(name, nm);
	//若复制的内容大于等于20，则让name的最后一个元素为\0
	if (strlen(nm) >= 20)
		name[19] = '\0';
	hobby = new char[strlen(ho) + 1];
	strcpy(hobby, ho);
	weight = wt;
}

Cow::Cow(const Cow& c)
{
	strcpy(name, c.name);
	int len = strlen(c.hobby);
	hobby = new char[len + 1];
	strcpy(hobby, c.hobby);
	weight = c.weight;
}

Cow::~Cow()
{
	delete[]hobby;
}

Cow& Cow::operator=(const Cow& c)
{
	if (this == &c)
		return *this;
	delete[]hobby;
	strcpy(name, c.name);
	int len = strlen(c.hobby);
	hobby = new char[len + 1];
	strcpy(hobby, c.hobby);
	weight = c.weight;
	return *this;
}

void Cow::ShowCow() const
{
	cout << "Cow name: " << name << endl;
	cout << "Cow hobby: " << hobby << endl;
	cout << "Cow weight: " << weight << " kg" << endl;
}