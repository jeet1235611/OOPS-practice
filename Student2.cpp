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
	Student(int rollNumber) {
		cout << "constructor 2 called ! " << endl;
		this -> rollNumber = rollNumber;
	}



	//Parameterised constructor.
	Student(int r, int a){
		cout << "Address of this is " << this << endl;
		cout << "Constructor 3 called ! " << endl;
		rollNumber = r;
		age = a;
	}

	~Student(){
		cout << "Destructor called ! " << endl;
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
