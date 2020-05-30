#include "goods.h"

Good::Good()
{
	name = "Car";
	price = 12000;
}

Good::Good(string name, float price) :Good()
{
	if (name.length() > 0) {
		this->name = name;
	}
	if (price > 0) {
		this->price = price;
	}
	 
}

Good::~Good()
{
}

void Good::setName(string name)
{
	if (name.length() > 0) {
		this->name = name;
	}
}

string Good::getName()
{
	return name;
}

void Good::setPrice(float price)
{
	if (price > 0) {
		this->price = price;
	}
}

float Good::getPrice()
{
	return price;
}
 



 
