#include "system.h"

int item::index = 0;

int main() {
	setlocale(LC_ALL, "rus");
	 
	item *it = nullptr;
	string str;
	systemes sys;
	int n;
	int a;
	do {
		cout << "\t Menu\n";
		cout << "1 - Add order\n";
		cout << "2 - Del order\n";
		cout << "3 - Info\n";
		cout << "4 - Save\n";
		cout << "5 - Upload\n";
		cout << "6 - Amount money\n";
		cout << "0 - Exit\n";
		cin >> a;
		switch (a) {
		case 0:break;
		default:cout << "Error!\n"; break;
		case 1:it = new item;
			cin >> *it; sys.addlist(*it);
			break;
		case 2:
			cout << "Enter number: "; 
			cin >> n;
			sys.delitem(n);
			break;
		case 3:
			sys.show();
			break;
		case 4:
			cout << "Enter name file: "; 
			cin.get(); getline(cin, str);
			sys.save(str);
			break;
		case 5:
			cout << "Enter name file: "; 
			cin.get(); getline(cin, str);
			sys.load(str);
			break;
		case 6:
			cout << "Amount money: " << sys.countmoney() << endl;
			break;

		}
	} while (a != 0);
	system("pause");
	return 0;
}