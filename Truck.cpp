class Truck : public Vehicle {
	public:

	Truck() {
		cout << "Truck's constructor " << endl;

	}	

	~Truck() {
		cout << "Truck's destructor is called! " << endl;
	}

	void print() {
		cout << "Truck wali cheezzz!! " << endl;
	}
};
