#pragma once
#ifndef POINT_HPP

#include <iostream>


class Point
{
public:

	Point();
	Point(const Point& point) {
		this->Setx(point._x);
		this->Sety(point._y);
	}

	void PrintPosition();

	float Getx();
	

	float Gety();


	void Setx(float x);
	
	void Sety(float y);

	void Plase();
	

private:
	float _x;
	float _y;
	
};



#endif // !POINT_HPP