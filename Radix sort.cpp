#include <bits/stdc++.h>
using namespace std;
void scana(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void printa(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}
int getMax(int arr[], int size)
{
    int largest = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > largest)
            largest = arr[i];
    return largest;
}
void countSort(int arr[], int size, int digitPlace)
{
    int output[size];
    int count[10] = {0};

    for (int i = 0; i < size; i++)
        count[(arr[i] / digitPlace) % 10]++;

    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = size - 1; i >= 0; i--)
    {
        int digit = (arr[i] / digitPlace) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    for (int i = 0; i < size; i++)
        arr[i] = output[i];
}

void radixSort(int arr[], int size)
{
    int maxNumber = getMax(arr, size);

    for (int digitPlace = 1; maxNumber / digitPlace > 0; digitPlace *= 10)
        countSort(arr, size, digitPlace);
}
int main()
{
    int n;
    cin >> n;

    int arr[n];
    scana(arr, n);

    radixSort(arr, n);

    printa(arr, n);

    return 0;
}
