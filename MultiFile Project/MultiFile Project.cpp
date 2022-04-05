// MultiFile Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Triangle.h"
using namespace std;
int main()
{
	Triangle Triangle1(0, 7, 10, 2, 0, 0);	
	Triangle1.Out();
	cout << endl;
	cout <<"Perimetr = "<< Triangle1.getPerimetr()<<endl;
	cout << "Area = " << Triangle1.getArea() << endl;
	cout << "Inscribed radius = "<< Triangle1.getInscribedRadius() <<endl;
	cout << "Described radius = " << Triangle1.getDescribedRadius() << endl;
}

