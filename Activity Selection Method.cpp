#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int start[n], finish[n], index[n];S
    for (int i = 0; i < n; i++) {
        cin >> start[i] >> finish[i];
        index[i] = i + 1;
    }
    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (finish[j] > finish[j + 1]) {
                swap(finish[j], finish[j + 1]);
                swap(start[j], start[j + 1]);
                swap(index[j], index[j + 1]);
            }
        }
    }
    // Activity Selection
    cout<<endl;
    cout << "A" << index[0];
    int lastFinish = finish[0];
    for (int i = 1; i < n; i++) {
        if (start[i] >= lastFinish) {
            cout << " -> A" << index[i];
            lastFinish = finish[i];
        }
    }
    return 0;
}
