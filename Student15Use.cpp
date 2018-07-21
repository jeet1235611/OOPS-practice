#include <iostream>
#include <string>
#include <string.h>
using namespace std;

#include "Student15.cpp"

int main() {

	char name[] = "abcd";
	Student s1(20, name);
	s1.display();

	Student s2(s1);

	s2.name[0] = 'x';
	s1.display();
	s2.display();
/*
	name[3] = 'e';
	Student s2(24, name);
	s2.display();

	//this -> name = new char[strlen(name) + 1];
	//strcpy(this -> name, name);

	s1.display();
*/
}
