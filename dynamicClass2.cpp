class DynamicArray {
	int *data, nextIndex, capacity;

	public:
		DynamicArray() {
			data = new int[5];
			nextIndex = 0;
			capacity = 5;
		}

	void add(int element) {
		if(nextIndex == capacity){
			int *newData = new int[2*capacity];
			for(int i = 0; i < capacity; i++){
				newData[i] = data[i];
			}
			//newData[nextIndex] = element;
			delete [] data;
			data = newData;
			capacity *= 2;
		}
		data[nextIndex] = element;
		nextIndex++;
	}

	int get(int i) {
		if(i >= nextIndex)
			return -1;
		return data[i];
	}

	void add(int i, int element) {
		if(i < nextIndex){
			data[i] = element;
		}
		else if(i == nextIndex){
			add(element);
		}
		else{
			return;
		}
	}

	/*
	void display() {
		for(int i = 0; i < nextIndex; i++){
			cout << data[i] << endl;
		}
	}

	void displayEntireValues() {
		for(int i = 0; i < capacity; i++){
			cout << data[i] << endl;
		}
	}
	*/

	void print() {
		for(int i = 0; i < nextIndex; i++) {
			cout << data[i] << " ";
		}

		cout << endl;
	}
}; 
