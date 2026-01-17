#include <iostream>
using namespace std;
int main() {
    int n, c = 0;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n - 1; i++) {
        int mini = i;
        for(int j = i + 1; j < n; j++) {
            c++;
            if(arr[j] < arr[mini]) {
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\nTotal Comparisons: " << c<< endl;
    return 0;
}
