#include <iostream>
using namespace std;

#include "Student3.cpp"
int main() {
	Student s1(10), s2(10, 22);
	
	s1 = s2;

	s1.display();
	s2.display();
}
