#pragma once
#ifndef __MOVE_H__
#define __MOVE_H__

 class Move
 {
	private:
		double x;
		double y;
  public:
		Move(double a = 0, double b = 0);	//set x, y to a, b
		void showmove() const;	//show current x, y values
		//This function add x of m to x of invoking object to get new x, adds y of m to y of invoking
		//object to get new y, creates a new move object initialized to new x, y values and returns it
		Move add(const Move &m) const;
		void reset(double a = 0, double b = 0); //reset x, y to a, b
 };

#endif