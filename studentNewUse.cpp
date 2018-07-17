#include <iostream>
using namespace std;

#include "studentNew.cpp"

int main() {
	Student s1, s2;
	Student *s3 = new Student;

	s1.setAge(23, 123);
	s2.setAge(24, 123);
	s3 -> setAge(25, 123);

	s1.rollNumber = 99;
	s2.rollNumber = 100;
	s3 -> rollNumber = 101;

	//cout << int s = s1.getAge() << endl;
	//cout << int t = s3 -> getAge() << endl;
	
//	cout << s1.getAge() << endl;
//	cout << s1.display() << endl;
//	cout << s3 -> display() << endl;
	
	s1.display();
	s2.display();
	s3 -> display();

}
