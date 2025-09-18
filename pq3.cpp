#include <iostream>
using namespace std;

void merge(double arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    double L[n1], R[n2];
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] >= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(double arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    double prices[] = {99.99, 45.50, 150.00, 120.75, 75.25};
    int n = sizeof(prices) / sizeof(prices[0]);

    cout << "Array before sorting: ";
    for (int i = 0; i < n; i++) cout << prices[i] << " ";
    cout << endl;

    mergeSort(prices, 0, n - 1);

    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++) cout << prices[i] << " ";
    cout << endl;

    return 0;
}