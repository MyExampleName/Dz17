 #include "system.h"



systemes::systemes()
{
}

void systemes::addlist(item &i)
{
	it.push_back(&i);
}

void systemes::delitem(int number)
{
	int in = 0;
	for (list<item*>::iterator i = it.begin(); i != it.end(); i++) {
		if ((*i)->getNumber() == number)in++;
	}
	if (in > 0) {
		for (list<item*>::iterator i = it.begin(); i != it.end(); i++) {
			if ((*i)->getNumber() == number) {
				it.erase(i); i = it.begin();
			}
		}
	}
}

void systemes::show()
{
	for (item* i : this->it)
	{
		i->Show();
	}
}

void systemes::save(string file)
{
	ofstream s;
	s.open(file);
	if (s.is_open()) {
		s << it.size() << endl;
		for (list<item*>::iterator i = it.begin(); i != it.end(); i++) {
			s << (*(*i));
		}
	}
}

void systemes::load(string file)
{
	ifstream s;
	s.open(file);
	if (s.is_open()) {
		int N;
		s >> N;
		for (int i = 0; i < N; i++) {
			item *r = new item();
			s >> *r;
			it.push_back(r);
		}
	}
}

int systemes::countmoney()
{
	int n = 0;
	for (list<item*>::iterator i = it.begin(); i != it.end(); i++) {
		n += (*i)->getCount()*(*i)->getPrice();
	}
	return n;
}
