#include <iostream>
#include "triangle.hpp"

Triangle::Triangle(const Point& a, const Point& b, const Point& c) {
	_a = a;
	_b = b;
	_c = c;
};
Triangle::Triangle(const Section & ab, const Section & bc, const Section & ac) {
	_ab = ab;
	_bc = bc;
	_ac = ac;


};


float  Triangle:: Perimeter() {
	return _ab.Lenght() + _bc.Lenght() + _ac.Lenght();
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
