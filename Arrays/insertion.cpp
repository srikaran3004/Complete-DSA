#include <iostream>
using namespace std;

void insert(int arr[], int n, int x, int pos) {
  // Check if the position is valid
  if (pos < 0 || pos > n) {
    cout << "Invalid position" << endl;
    return;
  }

  // Shift the elements of the array from the position to the right
  for (int i = n - 1; i >= pos; i--) {
    arr[i + 1] = arr[i];
  }

  // Insert the element at the position
  arr[pos] = x;

  // Increase the size of the array
  n++;
}

int main() {
  // Declare variables
  int n, x, pos;

  // Prompt the user to enter the array size
  cout << "Enter array size: ";
  cin >> n;

  // Create an array
  int arr[n];

  // Read the elements of the array from the user
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // Prompt the user to enter the element to insert
  cout << "Enter the element to insert: ";
  cin >> x;

  // Prompt the user to enter the position to insert the element at
  cout << "Enter the position to insert the element at: ";
  cin >> pos;

  // Insert the element at the position
  insert(arr, n, x, pos);

  // Print the new array
  cout << "The new array is: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
