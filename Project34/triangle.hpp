#include "section.hpp"



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

	
	float height() {
		Point O;

	}
	
	

private:
	Point _a, _b, _c;
	Section _ab;
	Section _bc;
	Section _ac;


};



