#include <iostream>
using namespace std;
#include "student.cpp"

int main() {
	//Creating students statically.
	Student s1;	
	Student s2, s3, s4;

	//Creating students dyanmically.
	Student *s5 = new Student;
	Student *s6 = new Student;

	s1.age = 23;
	s1.rollNumber = 99;

	(*s5).age = 21;
	s6 -> age = 22;

	(*s5).rollNumber = 101;
	s5 -> rollNumber = 91;

	cout << s1.age << " " << s1.rollNumber << " " << s5 -> age << " " << s5 -> rollNumber << "  " << s6 -> age << " " << s6 -> rollNumber << endl;
}
