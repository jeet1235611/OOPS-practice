#include <iostream>
using namespace std;

#include "Fraction99.cpp"

int main() {
	Fraction f1(10, 2);
	Fraction f2(15, 4);

	/*Fraction const f3;

	cout << f3.getNumerator() << " " << f3.getDenominator() << endl;

	//f3.setNumerator(10);
	*/
	
	Fraction f3 = f1.add(f2);
	Fraction f4 = f1 + f2;
	f1.print();
	f2.print();
	f3.print();
	f4.print();

	Fraction f5 = f1 - f2;
	Fraction f6 = f1 * f2;
	Fraction f7 = f1 / f2;

	f5.print();
	f6.print();
	f7.print();
}
