class Car: public Vehicle {
        public:
                int numGears;

		Car(int x) : Vehicle(x)  {
			cout << "Car's default constructor is called!" << endl;
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


