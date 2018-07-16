class Student{
	public:
	int age;

	private:
	int rollNumber;

	public:
	/*
	int getRollNumber(int rollNumber) {
		return rollNumber;

		//cout << "Age = " << age << endl;
		//cout << "Roll Number = " << rollNumber << endl;
	}
	*/

	int getRollNumber() {
		return rollNumber;
	}

	void setRollNumber(int a){
		rollNumber = a;
	}
};
