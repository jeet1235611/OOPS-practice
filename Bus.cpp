class Bus : public Car, public Truck {
	public:
	
	Bus() : Vehicle(5) {
		cout << "Bus's constructor " << endl;
	}
	~Bus() {
		cout << "Bus's destructor is called! " << endl;
	}
/*
	void print() {
		cout << "Bus class ko print" << endl;
	}
	*/
};
