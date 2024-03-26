#pragma once
#include <iostream>
#include <string>

using namespace std;
class Liquid {
private:
	std::string name;
	int density;
public:
	Liquid();
	Liquid(string, int);
	Liquid(const Liquid& other);
	~Liquid() {}
	string getName() const { return name; }
	void setName(string value) { name = value; };
	int getDensity() const { return density; }
	void setDensity(int value) { density = value; }


	operator string() const;
	friend ostream& operator << (ostream&, const Liquid&);
	friend istream& operator >> (istream&, Liquid&);
};
