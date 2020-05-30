#pragma once
#include"goods.h"


class item :
	public Good
{
private:
	int count;
	int number;
	static int index;
public:
	item();
	item(string name, float price);
	item(int count, int number, string name, float price);
	~item();

	void setCount(int count);
	static void updateindex();

	int getCount();
	int getNumber();
	static int getIndex();

	void Show();

	friend istream& operator >> (istream & out, item& st);
	friend ofstream& operator << (ofstream & out, item& st);
	friend ifstream& operator >> (ifstream & out, item& st);
};
