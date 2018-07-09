class Fraction {
	private:
	
	int numerator;
	int denominator;

	public:

	Fraction(int numerator, int denominator) {
		this -> numerator = numerator;
		this -> denominator = denominator;

	}

	void print() {
		cout << this -> numerator << " / " << this -> denominator << endl;
		//Ikso ese bhi likh sakte h
		//cout << this -> numerator << " / " << this -> denominator << endl;
		//ham f1 = f1 + f2 kar rhe h
	}

	void simplify() {
		int gcd = 1;
		int j = min(this -> numerator, this -> denominator); // yaha pe this likhana optional tha.
		for(int i = 1; i <= j; i++){
			if(this -> numerator % i == 0 && this -> denominator % i == 0){
			gcd = i;
			}
		}
		//simplify karne ke liye bas ye sab karna h
		this -> numerator = this -> numerator / gcd;
		this -> denominator = this -> denominator / gcd;
	}

	void add(Fraction f2) {
		int lcm = denominator * f2.denominator;
		int x = lcm / denominator;
		int y = lcm / f2.denominator;

		int num = (x * numerator + y * f2.numerator);
		
		numerator = num;
		denominator = lcm;

		simplify();

	}
};
//Nidhi Agarwal Ma'am
