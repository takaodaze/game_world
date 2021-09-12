#include <iostream>

using namespace std;

void Swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    char* dynArray = new char[4 * 100 * 1024];
    dynArray[0] = 32;

    // delete[] dynArray;
}