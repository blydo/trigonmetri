#include <iostream>

#include "point.hpp"
#include "section.hpp"

	Section::Section() { }

    
	Point Section:: GetFirst() {
		return *_first;
	}

	Point Section:: GetSecond() {
		return *_second;
	}


