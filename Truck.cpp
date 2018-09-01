class Truck : virtual public Vehicle {
	public:

	Truck() : Vehicle(4) {
		cout << "Truck's constructor " << endl;

	}	

	~Truck() {
		cout << "Truck's destructor is called! " << endl;
	}

	void print() {
		cout << "Truck wali cheezzz!! " << endl;
	}
};
