class Marks {
	int mark;
	public:
		Marks(int m){
			mark = m;
		}

		void whatsYourMark() {
			cout << " Hey I got " << mark << " marks " << endl;
		}

		Marks *operator -> (){
			return this;
		}
};

