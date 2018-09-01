class HondaCity : public Car {
	public:

		/*
		HondaCity() {
			cout << "Honda city constructor " << endl;
		}
		*/
		
		~HondaCity() {
			cout << " Honda city destructor " << endl;
		}

		HondaCity(int x, int y) : Car(x, y) {
			cout << " HOnda city parameterised constructor called! " << endl;
		}
};
