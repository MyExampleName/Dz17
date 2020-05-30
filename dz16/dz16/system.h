#pragma once
#include"item.h"
#include<list>

class systemes
{
private:
	list<item*> it;
public:
	systemes();
	 
	void addlist(item &i);
	void delitem(int number);
	void show();
	void save(string file);
	void load(string file);
	int countmoney();
	 
	 
};