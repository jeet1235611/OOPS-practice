class Fraction{
	private:
		int numerator;
		int denominator;
	public:
		Fraction(int numerator, int denominator){
			this -> numerator = numerator;
			this -> denominator = denominator;
		}

		void print(){
			cout << numerator << "/" << denominator << endl;
		}

		void add(Fraction f2) {
			int lcm = denominator * f2.denominator;
			int x = lcm / denominator;
			int y = lcm / f2.denominator;

			numerator = x * numerator + y * f2.numerator;
			//denominator = y * f2.numerator;
			denominator = lcm;

			simplify();
		}

		void simplify() {
			int minimum = min(numerator, denominator);
			int gcd = 1;
			for(int i = 1; i <= minimum; i++){
				if(numerator % i == 0 && denominator % i == 0){
					gcd = i;
				}
			}

			numerator = numerator / gcd;
			denominator = denominator / gcd;
		}

	
};
