#include <iostream>
using namespace std;

void  readv(int a[], int size){
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
}
void display(int arr[], int size){
    for (int idx = 0; idx < size; idx++) {
        cout << arr[idx] << " ";
    }
}
void mergeArrays(int a[], int b[], int c[], int n, int m) {
    int i = 0; 
    int j = 0; 
    int k = 0; 
    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    
    while (i < n) {
        c[k] = a[i];
        i++;
        k++;
    }
    
    while (j < m) {
        c[k] = b[j];
        j++;
        k++;
    }
}

int main() {
    int n, m;
    cin>>n>>m;
    int a[n], b[m];
    readv(a, n);
    readv(b, m);

    int c[n + m]; 
    
    mergeArrays(a, b, c, n, m);
    
    cout << "Merged Array: ";
    display(c, n + m);
    
    return 0;
}
