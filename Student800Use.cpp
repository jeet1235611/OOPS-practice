#include <iostream>
using namespace std;
#include "Student800.cpp"

int main() {
	Student s1;
	cout << Student :: totalStudents << endl;
	cout << s1.totalStudents << endl;
	cout << s1.rollNumber << " " << s1.age << endl;
}
