#include "tubes2.h"
int main()
{
    int i, j, n, a;
    int arr[50];
    cout << "Masukkan jumlah inputan: ";
    cin >> n;
    cout << "Masukkan angka: ";
    for (i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Descending Order: ";
    sortArray(arr, n);
    for (j=0; j<n; j++){
        cout << arr[j] << " ";
    }
    cout<<endl;
    cout << "Ascending Order: ";
    for(a = n - 1; a >= 0; a--){
        cout<<arr[a]<<" ";
    }
    return 0;
}
