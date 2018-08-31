
class Vehicle {
	private:
		int maxSpeed;
	
	protected:
		int numTyres;

	public:
		string color;

	Vehicle() {
		cout << "Vehicle's default constructor is called" << endl;
	}

	~Vehicle() {
		cout << "Vehicle's Destructor is called" << endl;
	}
};
/*
class Car: public Vehicle {
	public:
		int numGears;

		void print() {
			cout << "Num Tyres: " << numTyres << endl;
			cout << "Color: " << color << endl;
			cout << "Num gears" << numGears << endl;
			//cout << "Max speed: " << maxSpeed << endl;
		}

};
*/
