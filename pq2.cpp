#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int empIDs[] = {105, 102, 108, 101, 107};
    int n = sizeof(empIDs) / sizeof(empIDs[0]);

    cout << "Array before sorting: ";
    for (int i = 0; i < n; i++) cout << empIDs[i] << " ";
    cout << endl;

    insertionSort(empIDs, n);

    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++) cout << empIDs[i] << " ";
    cout << endl;

    return 0;
}