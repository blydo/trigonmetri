#include "section.hpp"
#include "TypeTriangle.cpp"


class Triangle
{
public:
	Triangle();
	Triangle(const Point& a, const Point& b, const Point& c);

	
	Triangle(const Section& ab, const Section& bc, const Section& ac);
	
	Point Geta();
	
	Point Getb();
		
	Point Getc();
	
	Section Getab();

	Section Getbc();
	
	Section Getac();
	
	void Setab(Section ab);
	
	void Setbc(Section bc);
	
	void Setac(Section ac);
	
	void Seta(Point a);
		
	void Setb(Point b);
	
	void Setc(Point c);

	float Perimeter();

	float Square() {
	
	
		if (TypeOf() == Equilateral)
		{
			return pow(_ab.Lenght(), 2) * sqrt(3) / 4;
		}
		else if (TypeOf() == Isosceles)
		{
			float p = Perimeter() / 2;
			return sqrt(Perimeter() / 2 * (p - _ab.Lenght()) * (p - _bc.Lenght()) * (p - _ac.Lenght());

		}
		else if (TypeOf() == Rectangular)
		{
			if (_ab.Lenght() > _bc.Lenght() && _ab.Lenght() > _ac.Lenght())
			{
				return 0,5 * (_bc.Lenght() * _ac.Lenght());
			}
			else if (_bc.Lenght() > _ab.Lenght() && _bc.Lenght() > _ac.Lenght())
			{
				return 0, 5 * (_ab.Lenght() * _ac.Lenght());
			}
			else
			{
				return 0, 5 * (_bc.Lenght() * _ac.Lenght());
			}

		}
		else if (TypeOf() == Default)
		{
			float p = Perimeter() / 2;
			return sqrt(Perimeter() / 2 * (p - _ab.Lenght()) * (p - _bc.Lenght()) * (p - _ac.Lenght());
		}
	}

	float Getheight() {
		float h;
		if (_ab.Lenght() > _bc.Lenght())
		{
			h = sqrt(pow(_ab.Lenght(), 2) - pow(_bc.Lenght() / 2, 2)) ;
		}
		else if (_bc.Lenght() > _ac.Lenght())
		{
			h = sqrt(pow(_bc.Lenght(), 2) - pow(_ac.Lenght() / 2, 2));
		}
		else
		{
			h = sqrt(pow(_ac.Lenght(), 2) - pow(_ab.Lenght() / 2, 2));
		}
		
		return h;
	}

	TypeTriangle TypeOf() {

		if (_ab.Lenght() == _bc.Lenght() && _ab.Lenght() == _ac.Lenght() && _bc.Lenght() == _ac.Lenght())
		{
			return Equilateral;
		}

		else if (_ab.Lenght() == _bc.Lenght() || _bc.Lenght() == _ac.Lenght() || _ab.Lenght() == _ac.Lenght())
		{
			return Isosceles;
		}
		
		else if ( pow(_ab.Lenght(),2) + pow(_bc.Lenght(), 2) == pow(_ac.Lenght(), 2) || pow(_bc.Lenght(), 2) + pow(_ac.Lenght(), 2) == pow(_bc.Lenght(), 2) || pow(_ab.Lenght(), 2) + pow(_ac.Lenght(), 2) == pow(_bc.Lenght(), 2))
		{
			return Rectangular;
		}
		else
		{
			return Default;
		}
	}

	
	float height() {
		Point O;

	}
	
	

private:
	Point _a, _b, _c;
	Section _ab;
	Section _bc;
	Section _ac;

};



