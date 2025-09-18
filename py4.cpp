#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low];  
    int i = low + 1, j = high;

    while (true) {
        while (i <= high && arr[i] <= pivot) i++;
        while (j >= low && arr[j] > pivot) j--;
        if (i < j) swap(arr[i], arr[j]);
        else break;
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

int main() {
    int scores[] = {450, 320, 580, 210, 390};
    int n = sizeof(scores) / sizeof(scores[0]);

    cout << "Array before sorting: ";
    for (int i = 0; i < n; i++) cout << scores[i] << " ";
    cout << endl;

    quickSort(scores, 0, n - 1);

    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++) cout << scores[i] << " ";
    cout << endl;

    return 0;
}