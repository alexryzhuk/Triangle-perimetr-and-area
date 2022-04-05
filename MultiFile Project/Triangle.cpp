#include "Triangle.h"
#include<cmath>
#include <iostream>
using namespace std;
Triangle::Triangle() {
	x1 = 0;
	x2 = 0;
	x3 = 0;
	y1 = 0;
	y2 = 0;
	y3 = 0;
}
Triangle::Triangle(int x1, int y1, int x2, int y2, int x3, int y3) {
	this->x1 = x1;
	this->x2 = x2;
	this->x3 = x3;
	this->y1 = y1;
	this->y2 = y2;
	this->y3 = y3;
}
void Triangle::Out() {
	cout << "coordinates: " << x1 << ";" << y1 << "   " << x2 << ";" << y2 << "   " << x3 << ";" << y3<<endl;
}
double Triangle::getPerimetr() {
	double AB, BC, AC;
	AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	BC = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	AC = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	perimetr = AB + BC + AC;
	return perimetr;
}
double Triangle::getArea() {
	double AB, BC, AC, p;
	AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	BC = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	AC = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	p = perimetr/2;
	area = sqrt(p * (p - AB) * (p - BC) * (p - AC));
	return area;
}
double Triangle::getInscribedRadius() {
	double AB, BC, AC, p;
	AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	BC = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	AC = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	p = (AB + BC + AC) / 2;
	area = sqrt(p * (p - AB) * (p - BC) * (p - AC));
	radius = area / p;
	return radius;
}
double Triangle::getDescribedRadius() {
	double AB, BC, AC;
	AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	BC = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	AC = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	Radius = (AB * BC * AC) / (4 * area);
	return Radius;
}
Triangle::~Triangle(){}