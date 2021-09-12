class DynamicArray {
   public:
    DynamicArray(int size) : mSize(size), mArray(nullptr) {
        mArray = new int[mSize];
    }

    ~DynamicArray() {
        delete[] mArray;
    }

   private:
    int* mArray;
    int mSize;
};
