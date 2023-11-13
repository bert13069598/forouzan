#include "student.h"

int main() {
    Student students[5];

    string names[5] = {"George", "John", "Luci", "Mary", "Sue"};
    int grades[5] = {82, 73, 91, 72, 65};

    for (int i =0;i<5;i++){
        students[i] = Student(names[i],grades[i]);
    }

    for (int i = 0; i < 5; i++) {
        students[i].print();
    }
    return 0;
}