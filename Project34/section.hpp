#pragma once
#ifndef SECTION_HPP

#include <iostream>

#include "point.hpp"


class Section
{
public:
	Section();
	
	
	Point GetFirst();

	Point GetSecond();
	
private:
	Point* _first;
	Point* _second;

};
#endif // !SECTION_HPP