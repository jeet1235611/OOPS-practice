
class Vehicle {
	private:
		int maxSpeed;
	
	protected:
		int numTyres;

	public:
		string color;

	void print() {
		cout << "Vehicle wali cheezzz!! " << endl;
	}	
	
	Vehicle() {
		cout << "Vehicle's default constructor is called" << endl;
	}

	

	Vehicle(int z) {
		maxSpeed = z;
		cout << "Vehicle's Paramerzed constructor " << endl;
		//maxSpeed = z;
	}

	~Vehicle() {
		cout << "Vehicle's Destructor is called" << endl;
	}
};
