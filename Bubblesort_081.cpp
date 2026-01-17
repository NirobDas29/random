#include <iostream>
using namespace std;
int main() {
    int n, c= 0;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)cin >> arr[i];
    for(int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for(int j = 0; j < n - i - 1; j++) {
            c++;
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\nTotal Comparisons: " << c << endl;
    return 0;
}
