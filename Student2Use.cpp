#include <iostream>
using namespace std;
#include "Student2.cpp"
int main() {
	Student s1;
	s1.display();

	Student s2;
	s2.display();

	Student *s3 = new Student;
	s3 -> display();

	cout << "Parameterised constructors Demo " << endl;
	Student s4(10);

	s4.display();

	Student *s5 = new Student(100);
	s5 -> display();

	return 0;
}
