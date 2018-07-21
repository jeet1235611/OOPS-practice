class Student {
	public:
		int const rollNumber;
		int age;
		int &x;

	Student(int r, int age): rollNumber(r), x( age) {
		//rollNumber = r;
	}

	void display() {
		cout << "Roll Number is: " << rollNumber << " " << "Age is: " << age << endl;
	}

};
