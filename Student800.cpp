class Student {
	public:
	int rollNumber;
	int age;

	static int totalStudents; //total number of student.

	Student() {
		totalStudents++;
	}

};

int Student :: totalStudents = 0; //initialize static data members.

