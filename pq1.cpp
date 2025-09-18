
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int marks[] = {78, 56, 89, 45, 67};
    int n = sizeof(marks) / sizeof(marks[0]);

    cout << "Array before sorting: ";
    for (int i = 0; i < n; i++) cout << marks[i] << " ";
    cout << endl;

    selectionSort(marks, n);

    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++) cout << marks[i] << " ";
    cout << endl;
    return 0;
}


