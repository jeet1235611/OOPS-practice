class Student {

	static int totalStudents;

	public:
	int rollNumber;
	int age;

	//static int totalStudents; //total number of student.

	Student() {
		totalStudents++;
	}

	int getRollNumber() {
		return rollNumber;
	}

	static int getTotalStudent() {
		return totalStudents;
	}

};

int Student :: totalStudents = 0; //initialize static data members.

