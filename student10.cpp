class Student {
	char *name; //Dyanmic allocation tried.
	int age;

	public:
	//constructor public private bhi kuch hota h kya.
	Student (char name, int age){
		this -> age = age;
		this -> name = name;
	}

	void display() {
		//cout << this -> age << " " << this -> name << endl;
		cout << age << " " << name << endl;
	}

};
