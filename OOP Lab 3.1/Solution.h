#pragma once
#include <string>
#include "Liquid.h"

using namespace std;
class Solution: public Liquid {
private:
	Liquid liquid;
	int amount;
public:
	Solution();
	Solution(Liquid, int);
	Solution(const Solution& other);
	~Solution() {};
	int getAmount() const { return amount; }
	void setAmount(int value) { this->amount = value; };
	void setLiquid(Liquid liquid) { this->liquid = liquid; };
	Liquid getLiquid() const { return liquid; }

	operator string() const;
	friend ostream& operator << (ostream&, const Solution&);
	friend istream& operator >> (istream&, Solution&);
};

