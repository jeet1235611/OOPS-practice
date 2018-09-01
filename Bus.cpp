class Bus : public Car, public Truck {
	public:
	
	Bus() {
		cout << "Bus's constructor " << endl;
	}
	~Bus() {
		cout << "Bus's destructor is called! " << endl;
	}

	void print() {
		cout << "Bus class ko print" << endl;
	}
};
