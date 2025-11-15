#include <iostream>
#include "triangle.hpp"

Triangle::Triangle(const Point& a, const Point& b, const Point& c) {
	_a = a;
	_b = b;
	_c = c;

	_ab.SetFirst(_a);
	_ab.SetSecond(_b);

	_bc.SetFirst(_b);
	_bc.SetSecond(_c);

	_ac.SetFirst(_a);
	_ac.SetSecond(_c);


};
Triangle::Triangle(const Section& ab, const Section& bc, const Section& ac) {
	_ab = ab;
	_bc = bc;
	_ac = ac;


};


float  Triangle:: Perimeter() {
	return _ab.Lenght() + _bc.Lenght() + _ac.Lenght();
}

float Triangle:: Square() {


	if (TypeOf() == Equilateral)
	{
		return pow(_ab.Lenght(), 2) * sqrt(3) / 4;
	}
	else if (TypeOf() == Isosceles)
	{
		float p = Perimeter() / 2;
		return sqrt(Perimeter() / 2 * (p - _ab.Lenght()) * (p - _bc.Lenght()) * (p - _ac.Lenght()));

	}
	else if (TypeOf() == Rectangular)
	{
		if (_ab.Lenght() > _bc.Lenght() && _ab.Lenght() > _ac.Lenght())
		{
			return 0, 5 * (_bc.Lenght() * _ac.Lenght());
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
		return sqrt(Perimeter() / 2 * (p - _ab.Lenght()) * (p - _bc.Lenght()) * (p - _ac.Lenght()));
	}
}

float Triangle:: Getheight() {
	float h;
	if (_ab.Lenght() > _bc.Lenght())
	{
		h = sqrt(pow(_ab.Lenght(), 2) - pow(_bc.Lenght() / 2, 2));
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

TypeTriangle Triangle:: TypeOf() {

	if (_ab.Lenght() == _bc.Lenght() && _ab.Lenght() == _ac.Lenght() && _bc.Lenght() == _ac.Lenght())
	{
		return Equilateral;
	}

	else if (_ab.Lenght() == _bc.Lenght() || _bc.Lenght() == _ac.Lenght() || _ab.Lenght() == _ac.Lenght())
	{
		return Isosceles;
	}

	else if (pow(_ab.Lenght(), 2) + pow(_bc.Lenght(), 2) == pow(_ac.Lenght(), 2) || pow(_bc.Lenght(), 2) + pow(_ac.Lenght(), 2) == pow(_bc.Lenght(), 2) || pow(_ab.Lenght(), 2) + pow(_ac.Lenght(), 2) == pow(_bc.Lenght(), 2))
	{
		return Rectangular;
	}
	else
	{
		return Default;
	}
}



Point Triangle::Geta() {
	return _a;
}
Point Triangle::Getb() {
	return _b;

}
Point Triangle::Getc() {
	return _c;
}
Section Triangle::Getab() {
	return _ab;
}
Section Triangle::Getbc() {
	return _bc;
}
Section Triangle::Getac() {
	return _ac;
}
void Triangle::Setab(Section ab) {
	_ab = ab;
}
void Triangle::Setbc(Section bc) {
	_bc = bc;
}
void Triangle::Setac(Section ac) {
	_ac = ac;
}
void Triangle::Seta(Point a) {
	_a = a;
}
void Triangle::Setb(Point b) {
	_b = b;

}
void Triangle::Setc(Point c) {
	_c = c;
}
