class Vehicle {
	private:
		int maxSpeed;
	
	protected:
		int numTyres;

	public:
		string color;
};
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
