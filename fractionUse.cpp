#include <iostream>
using namespace std;
#include "fraction.cpp"
int main() {
	Fraction f1(10, 20);
	Fraction f2(30, 40);
	f1.add(f2);
	f1.print();
}
