#include <iostream>

#include "point.hpp"
#include "section.hpp"

	Section::Section() { }

	Section:: Section(const Point& first, const Point& second) {

		_first = first;
		_second = second;

	}

	Section::Section(const Section& section) {
		this->_first = section._first;
		this->_second = section._second;
	}


	Point Section:: GetFirst() {
		return _first;
	}

	Point Section:: GetSecond() {
		return _second;
	}

	float Section::Lenght() {
		float res;
		if (_first.Gety() == _second.Gety() )
		{
			if (_first.Getx() >= _second.Getx())
			{

				res = _first.Getx() - _second.Getx();
				return res;
			}
			else
			{
				res = _second.Getx() - _first.Getx();
				return res;
			}
		}
		else if (_first.Getx() == _second.Getx())
		{
			if (_first.Gety() >= _second.Gety())
			{

				res = _first.Gety() - _second.Gety();
				return res;
			}
			else
			{
				res = _second.Gety() - _first.Gety();
				return res;
			}
		}
	}
