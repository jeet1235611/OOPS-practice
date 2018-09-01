class Car: virtual public Vehicle {
        public:
                int numGears;

		Car() : Vehicle(3) {
			cout << "Car's constructor is called!" << endl;
		}

		~Car() {
			cout << "Car's Destructor is called " << endl;
		}

                void print() {
                        cout << "Num Tyres: " << numTyres << endl;
                        cout << "Color: " << color << endl;
                        cout << "Num gears" << numGears << endl;
                        //cout << "Max speed: " << maxSpeed << endl;
                }

};


