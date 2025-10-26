
#include "point.hpp"

	
	Point::Point() {}
	


	void Point::PrintPosition() {
		int z = _y + 5;
		int c = _x + 5;
		
			for (int i = z; i >= -z; i--)
			{
				if (i == _y)
				{
					for (int i = 0; i < c; i++)
					{
						std::cout << "  ";
					}
					std::cout << "|";
					
					for (int i = 0; i < _x; i++)
					{
						std::cout << "  ";
					}
					std::cout << "O" << "\n";
					continue;
				}

				if (i == 0)
				{
					for (int i = 0; i < c * 2; i++)
					{
						std::cout << "__";
						continue;
					}
					std::cout << "\n";
				}


				for (int i = 0; i < c; i++)
				{
					std::cout << "  ";
				}
				
				std::cout << "|" << "\n";
			}
		
	}
	float Point::Getx() {
		return _x;
	}

	float Point::Gety() {

		return _y;

	}
	
	void Point::Setx(float x) {
		_x = x;
	}
	void Point::Sety(float y) {

		_y = y;

	}
	
	
	void Point:: Plase() {
		std::cout << _x << "\t" << _y;
	}






/*float Russia::GetSquare() {
return square;zxc
}*/
