// #include <iostream>
// using namespace std;

// void selectionSort(int arr[], int n) {
//   for (int i = 0; i < n - 2; i++) {
//     int min_index = i;
//     for (int j = i ; j < n-1; j++) {
//       if (arr[j] < arr[min_index]) {
//         min_index = j;
//       }
//     }

//     int temp = arr[i];
//     arr[i] = arr[min_index];
//     arr[min_index] = temp;
//   }
// }

// int main() {
//   int n;
//   cout << "Enter the number of elements in the array: ";
//   cin >> n;

//   int arr[n];
//   cout << "Enter the elements of the array: ";
//   for (int i = 0; i < n; i++) {
//     cin >> arr[i];
//   }

//   selectionSort(arr, n);

//   cout << "Sorted array: ";
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }
//   cout << endl;
//   return 0;
// }
