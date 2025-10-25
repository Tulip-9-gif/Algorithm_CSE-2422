// Merge Sort algorithm
#include <bits/stdc++.h>
using namespace std;

void scanArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
void mergeArray(int a[], int l, int mid, int r) {
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
        left[i] = a[l + i];
    for (int j = 0; j < n2; j++)
        right[j] = a[mid + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            a[k] = left[i];
            i++;
        } else {
            a[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        a[k] = left[i];
        i++;
        k++;
    }
    while (j < n2) {
        a[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int l, int r) {
    if (l < r) {
        int mid = (l + r) / 2;
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, r);
        mergeArray(a, l, mid, r);
    }
}

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];
    cout << "Enter elements: ";
    scanArray(a, n);

    cout << "Before sorting: ";
    printArray(a, n);
    cout << endl;

    mergeSort(a, 0, n - 1);

    cout << "After sorting: ";
    printArray(a, n);

    return 0;
}
