class Student{
	public:
		int age;
		int rollNo;
		
		Student(){
			cout << "Hello world! " << endl;
		}
		
		Student(int r) {
		//	cout << "Parameterised constructor called!" << endl;
		rollNo = r;
		}
		void display() {
			cout << age << " " << rollNo << endl;
		}
};
