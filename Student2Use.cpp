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

	return 0;
}
