#pragma once
#ifndef SECTION_HPP

#include <iostream>

#include "point.hpp"


class Section
{
public:
	Section();
	Section(const Point& first, const Point& second);
	Section(const Section& section);

	
	 
	
	Point GetFirst();

	Point GetSecond();
	
	float Lenght();
	
	
private:
	Point _first;
	Point _second;

};
#endif // !SECTION_HPP