class DynamicArray {
	int *data;
	int nextIndex;
	int capacity;   //total size

	public:

	DynamicArray() {
		data = new int[5];
		nextIndex = 0;
		capacity = 5;
	}
	
	int *newData;
	void add(int element) {
		if(nextIndex == capacity) {
			newData = new int[2*capacity];
			capacity = 2*capacity;
			for(int i = 0; i < capacity; i++){
				newData[i] = data[i]; 
			}
			data = newData;
			delete(newData);
		}
		data[nextIndex] = element;
		nextIndex++;
	}
	

	void print(){
		for(int i = 0; i < capacity; i++){
			cout << data[i] << endl;
		}
	}
};
