#include <iostream>
using namespace std;

#include "constructorClass.cpp"

int main() {
	Student s1, s2, s3;
	Student *s6 = new Student;
	Student *s7 = new Student;
	s1.display();
	s2.display();
	s3.display();

	s6 -> display();
	s7 -> display();

	Student s10(99);

	s10.display();

}
