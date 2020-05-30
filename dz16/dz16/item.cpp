#include "item.h"
 

item::item() :Good()
{
	index++;
	number = index;
	count = 1;

}

item::item(string name, float price):Good(name, price)
{
	index++;
	number = index;
	count = 1;
}

item::item(int count, int number, string name, float price) :Good(name, price)
{
	index++;
	number = index;
	count = 1;
}


item::~item()
{
}

void item::setCount(int count)
{
	if (count > 0) {
		this->count = count;
	}
}

void item::updateindex()
{
	index = 0;
}

int item::getCount()
{
	return this->count;
}

int item::getNumber()
{
	return this->number;
}

int item::getIndex()
{
	return index;
}

void item::Show()
{
	cout << "==================\n";
	cout << "Name good: " << this->name << endl;
	cout << "Amount dood: " << this->count << endl;
	cout << "Number: " << this->number << endl;
	cout << "Price: " << this->price << endl;
	cout << "==================\n";
}
istream & operator>>(istream & out, item & st)
{
	cout << "Enter name: "; out >> st.name;
	cout << "Enter amount: "; out >> st.count;
	cout << "Enter price: "; out >> st.price;
	
	return out;
}
ofstream & operator<<(ofstream & out, item & st)
{
	out << st.getName() << endl
		<< st.getPrice() << endl
		<< st.getCount() << endl;
	return out;
}

ifstream & operator>>(ifstream & out, item & st)
{
	string n;
	out >> n;
	st.setName(n);
	float p;
	out >> p;
	st.setPrice(p);
	int k;
	out >> k;
	st.setCount(k);
	 
	return out;
}


