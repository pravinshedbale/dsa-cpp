class DynamicArray {
    int *data;
    int nextIndex;
    int capacity;

    public:
    
    DynamicArray() {
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }

    void add(int element) {
        if(nextIndex==capacity) {
            int *newData = new int[capacity*2];
            for(int i=0;i<capacity;i++) {
                newData[i]=data[i];
            }
            delete []data;
            data = newData;
            capacity+=capacity;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    int get(int i) {
        if(i>=nextIndex) {
            return -1;
		}
        return data[i];
    }

    int length() {
        return capacity;
    }

    void add(int i, int element) {
        if(i<nextIndex) {
            data[i]=element;
        } else if(i==nextIndex) {
            add(element);
        } else {
            return;
        }
    }
};

