class Student {
	public:
		int const rollNumber;
		int age;

	Student(int r): rollNumber(r) {
		//rollNumber = r;
	}

	void display() {
		cout << "Roll Number is: " << rollNumber << " " << "Age is: " << age << endl;
	}

};
