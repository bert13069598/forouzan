#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inputFile;

    int numbers[50];
    int size = 0;

    int sum = 0;
    double average;
    int max = -1000;
    int min = 1000;

    inputFile.open("numFile.dat");
    while (inputFile >> numbers[size]) {
        size++;
    }
    inputFile.close();

    for (int i = 0; i < size; i++) {
        sum += numbers[i];
        if (numbers[i] < min) {
            min = numbers[i];
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    average = static_cast<double>(sum) / size;

    cout << size << " elements in list." << endl;
    cout << "sum " << sum << endl;
    cout << "avg " << average << endl;
    cout << "min " << min << endl;
    cout << "max " << max << endl;
    return 0;
}