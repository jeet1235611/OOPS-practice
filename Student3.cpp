class Student{
	private:
	int rollNo;
	int age;

	public:
	Student(int r, int a){
		rollNo = r;
		age = a;
	} 
	Student(int a){
		age = a;
	}
	void display(){
		cout << "Roll Number is: " << this -> rollNo << " " << this -> age << endl;
	}
	void setValues(int r, int a){
		rollNo = r;
		age = a;
	}
};
