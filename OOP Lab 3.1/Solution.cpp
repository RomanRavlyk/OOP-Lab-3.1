#include <iostream>
#include <string>
#include <sstream>
#include "Solution.h"

using namespace std;


Solution::Solution() {
	liquid.setName("");
	liquid.setDensity(0);
	amount = 0;
}

Solution::Solution(Liquid liquid, int amount){
	this->liquid.setName(liquid.getName());
	this->liquid.setDensity(liquid.getDensity());
	this->amount = amount;
}

Solution::Solution(const Solution& other) {
	this->liquid = other.getLiquid();
	this->amount = other.amount;
}

ostream& operator << (ostream& out, const Solution& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Solution& r)
{

	in >> r.liquid; cout << endl;
	cout << " Enter amount = "; in >> r.amount; cout << endl;
	return in;
}

Solution::operator string() const {
	stringstream ss;
	ss << liquid;
	ss << "Your amount: " << amount << endl;
	return ss.str();
}