#include<iostream>
#include<string>
#include<fstream>
#include<stdarg.h>
using namespace std;


void Display(string file);
void Out(string wr, string file);

int main() {

}

void Sales() {
	string file,
		item,
		line;
	int days,
		num_item,
		quantity;
	float price;

	cout << "Input the number of days sales where made: ";
	cin >> days;

	for (int i = 0; i < days; i++) {
		cout << "Day " << i + 1 << ":\n";
		cout << "How many different items: ";
		cin >> num_item;

		for (int j = 0; j < num_item; j++) {
			cout << "\nItem name: "; cin >> item;
			cout << "Item quantity sold: "; cin >> quantity;
			cout << "Price of one item: "; cin >> price;
			string write = item + "," + to_string(quantity) + "," + to_string(price);
			Out(write, "sale.txt");
		}
	}
	cout << "\n";
	Display("sale.txt");
}
void Out(string wr, string file) {
	ofstream write;
	try {
		write.open(file, ios_base::app);
	}
	catch (...) {
		cout << "Can't open file";
	}
	write << wr << endl;
	write.close();
}

void Display(string file) {
	string line;
	ifstream read;
	read.open(file, ios_base::app);
	while(getline(read, line)){
		int pos_st=0;

		int pos_end = line.find(",");

	}
	read.close();
}
