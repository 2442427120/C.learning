#pragma once
#ifndef __GOLF822_H__
#define __GOLF822_H__
#include <iostream>

const int Len = 40;
struct golf
{
	char fullname[Len];
	int handicap;
 };
 
 //non-interactive version:
 //function sets golf structure to provided name, handicap using values passed as arguments to the 
 //function 
 void setgolf(golf& g, const char* name, int hc);
 
 //interactive version:
 //function solicits name and handicap from user and sets the mumber of g to the values entered return 1
 // if name is entered, 0 if name is empty string
 int setgolf(golf &g);

 //function resets handicap to new value
 void handicap(golf& g, int hc);

 //function display contents of golf structurs
 void showgolf(const golf& g);

#endif