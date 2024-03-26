#include <iostream>
#include <string>
#include <sstream>
#include "Liquid.h"
using namespace std;


Liquid::Liquid() {
	name = "";
	density = 0;
}

Liquid::Liquid(string name, int density) {
	this->name = name;
	this->density = density;
}

Liquid::Liquid(const Liquid& other) {
	name = other.name;
	density = other.density;
}



ostream& operator << (ostream& out, const Liquid& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Liquid& r)
{
	cout << " Enter liqud name = "; in >> r.name; cout << endl;
	cout << " Enter liqud density = "; in >> r.density; cout << endl;
	return in;
}

Liquid::operator string() const {
	cout << "Your liqud name: " << name << endl;
	cout << "Your liquid density: " << density << endl;
	return "";
}
