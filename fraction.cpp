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
};
