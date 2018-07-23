class Person {
	string name;
	int age;
	public:
		Person() {
			name = "noname";
			age = 0;
		}
		friend ostream &operator << (ostream &output, Person &p);
		friend istream &operator >> (istream &input, Person &p);
};

ostream &operator << (ostream &output, Person &p) {
	output << "What the hack " << endl;
	output << " My name is " << p.name << " and my age is " << p.age << endl;
	return output;
}

istream &operator >> (istream &input, Person &p) {
	input >> p.name >> p.age;
	return input;
}
