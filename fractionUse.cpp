#include <iostream>
#include <algorithm>
using namespace std;
#include "fraction.cpp"
int main() {
	Fraction f1(10, 2);
	Fraction f2(15, 4);
	f1.add(f2);
	//simplify();
	f1.print();
	f2.print();
	f1.multiply(f2);
	f1.print();
	f2.print();
}
