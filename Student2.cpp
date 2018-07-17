class Student{
	public:
	int rollNumber;

	private:
	int age;

	public:

	//Default Constructor.
	
	Student() {
		cout << "Constructor called ! " << endl;
	}

	//Parameterised constructor.
	Student(int r) {
		cout << "constructor 2 called ! " << endl;
		rollNumber = r;
	}

	void display() {
		cout << age << " " << rollNumber << endl;
	}

	int getAge() {
		return age;
	}

	void setAge(int a, int password) {
		if(password != 123) {
			return;
		}
		if(a < 0) {
			return;
		}
		age = a;
	}
};
