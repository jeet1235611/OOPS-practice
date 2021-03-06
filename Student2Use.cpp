#include <iostream>
using namespace std;
#include "Student2.cpp"
int main() {

	/*
	Student s1;
	s1.display();

	Student s2(20);
	s2.display();

	Student *s3 = new Student;
	s3 -> display();

	cout << "Parameterised constructors Demo " << endl;
	Student s4(10);

	s4.display();

	Student *s5 = new Student(100);
	s5 -> display();

	Student *s6 = new Student(500, 800);
	cout << "Address of s6 " << s6 << endl;
	s6 -> display();

	*/

	/*

	Student s1(10, 1001);
	cout << "S1: ";
	s1.display();

	Student s2(s1);
	cout << "S2 : " ;
	s2.display();

	Student *s3 = new Student(23, 1010);
	s3 -> display();
	cout << endl << endl << endl;
	
	Student s4(*s3);
	cout << "S4: " ;
	s4.display();

	//for dynamic copies.
	Student *s5 = new Student(*s3);
	Student *s6 = new Student(s1);

	cout << endl << endl << endl;
	
	s5 -> display();
	s6 -> display();

	*/

	Student s1(10, 1001);
	Student s2(20, 2002);

	Student *s3 = new Student(23, 99);

	s1 = s2;
	*s3 = s2;
	s1 = *s3;

	s1.display();
	s1.display();

	(*s3).display();
	s3 -> display();
	s1.display();

	delete s3;

	return 0;
}
