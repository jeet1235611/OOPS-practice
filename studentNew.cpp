class Student {

	public:
	int rollNumber;

	private:
	int age;
	
	public:
	void setAge(int a, int pass) {
		if(a < 0){
			return;
		}
		if(pass != 123){
			return;
		}
		age = a;
	}

	int getAge() {
		return age;
		//since same class mein toh private 
		//variable ko access kar hi sakte h na
		//isliye.
	}

	void display() {
		cout << "Age is : " << age << endl;
		cout << "Roll Number is : " << rollNumber << endl;
	}
};
