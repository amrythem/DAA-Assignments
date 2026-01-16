#include <iostream>
using namespace std;
int main() {
    int arr[] = {-2, -5, 6, -2, -3, 1, 5, -6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxSoFar = arr[0];
    int currentMax = arr[0];
    for (int i = 1; i < n; i++) {
        currentMax = max(arr[i], currentMax + arr[i]);
        maxSoFar = max(maxSoFar, currentMax);
    }
    cout << "Maximum subarray sum is: " << maxSoFar << endl;
    return 0;
}
