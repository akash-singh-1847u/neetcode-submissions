class DynamicArray {
public:
    int* arr;
    int size;
    int capacity;

    DynamicArray(int capacity) {
        this->capacity = capacity;
        size = 0;
        arr = new int[capacity];
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if (size == capacity) {
            resize();
        }
        arr[size] = n;
        size++;
    }

    int popback() {
        int x = arr[size - 1];
        size--;
        return x;
    }

    void resize() {
        capacity *= 2;
        int* neww = new int[capacity];

        for (int i = 0; i < size; i++) {
            neww[i] = arr[i];
        }

        delete[] arr;
        arr = neww;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }

    ~DynamicArray() {
        delete[] arr;  
    }
};
