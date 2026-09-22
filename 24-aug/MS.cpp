#include<iostream>
using namespace std;
void mergeArray(int Arr[], int L, int mid, int H) {
    int n1 = mid - L + 1;
    int n2 = H - mid;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
        left[i] = Arr[L + i];
    for (int j = 0; j < n2; j++)
        right[j] = Arr[mid + 1 + j];

    int i = 0, j = 0, k = L;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            Arr[k] = left[i];
            i++;
        } else {
            Arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        Arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n2) {
        Arr[k] = right[j];
        j++;
        k++;
    }
}
void MS(int Arr[], int L, int H) {
    if (L < H) {
        int mid = (L + H) / 2;
        MS(Arr, L, mid);
        MS(Arr, mid + 1, H);
        mergeArray(Arr, L, mid, H);
    }
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int Arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> Arr[i];
    }

    MS(Arr, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << Arr[i] << " ";
    }
    return 0;
}
