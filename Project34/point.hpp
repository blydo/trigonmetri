#pragma once
#ifndef POINT_HPP

#include <iostream>


class Point
{
public:

	Point();


	void PrintPosition();

	float Getx();
	

	float Gety();

	
	Point Getnext();
	
	void Setx(float x);
	
	void Sety(float y);

	
	void Setnext(Point next);
	

	void Plase();
	

private:
	float _x;
	float _y;
	Point* _next;
};



#endif // !POINT_HPP