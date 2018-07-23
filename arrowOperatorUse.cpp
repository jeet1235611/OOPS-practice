#include <iostream>
using namespace std;
#include "arrowOperator.cpp"

int main() {
	Marks anilsmark(65);
	anilsmark.whatsYourMark();
	anilsmark -> whatsYourMark();
	return 0;
}
