#include <iostream>
#include <string>

using namespace std;

void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    const int numStudents = 5;
    string students[numStudents];

    for (int i = 0; i < numStudents; ++i) {
        cout << "Введите фамилию студента " << i + 1 << ": ";
        getline(cin, students[i]);
    }

    bubbleSort(students, numStudents);

    cout << "\nФамилии студентов по возрастанию:\n";
    for (const string& surname : students) {
        cout << surname << endl;
    }

    return 0;
}
