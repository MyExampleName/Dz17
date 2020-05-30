#pragma once  
#include"lib.h"

class Good
{
protected:
	string name; 
	float price; 
	 
public:
	Good();
	Good(string name, float price);
	~Good();

	void setName(string name);
	void setPrice(float price);

	string getName();
	float getPrice();
};

