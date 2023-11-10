#include <iostream>

using namespace std;

int main() {
    const int CAPACITY = 10;
    int numbers[CAPACITY];
    int size;

    do {
        cout << "input size ";
        cin >> size;
    } while (size < 1 || size > CAPACITY);

    cout << "put " << size << " input ";
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }
    cout << "reverse output ";
    for (int i = size - 1; i >= 0; i--) {
        cout << numbers[i] << " ";
    }

}