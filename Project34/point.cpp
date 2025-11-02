
#include "point.hpp"

	
	Point::Point() {}
	


	void Point::PrintPosition() {
		int z = _y > 0 ? _y + 5 : -_y + 5;
		int c = _x > 0 ? _x + 5 : -_x + 5;

		system("cls");
		
			for (int i = z; i >= -z; i--)
			{

				for (int i = 0; i < z; i++)
				{
					std::cout << "  ";
				}

				std::cout << "|" << "\n";

				if (i == _y)
				{
					if (_x < 0)
					{
						for (;c > 1; c--)
						{
							
							if (-c == _x)
							{
								std::cout << "O ";
								continue;
							}
							std::cout << "  ";
						}
						std::cout << "  ";
						std::cout << "|" << "\n";
						
					}
					for (int i = 0; i < z; i++)
					{
						std::cout << "  ";
					}
					std::cout << "|" << "\n";
					
					if (_x > 0)
					{
						for (int i = 0; i < _x; i++)
						{
							std::cout << "  ";
						}
						std::cout << "O" << "\n";
						continue;
					}
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
