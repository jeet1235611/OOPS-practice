#include <iostream>
using namespace std;
#include "Student100.cpp"

int main() {
	Student s1;

	cout << s1.rollNumber << " " << s1.age << endl;
	cout << s1.totalStudents << endl;
	cout << Student :: totalStudents << endl;
}
