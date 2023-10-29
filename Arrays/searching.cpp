#include <iostream>
using namespace std;

// Function to find the index of an element in an array
int search(int arr[], int n, int x) {
  // Check if the array size is valid
  if (n <= 0) {
    return -1;
  }

  // Check if the element to search for is valid
  if (x < arr[0] || x > arr[n - 1]) {
    return -1;
  }

  // Search for the element in the array
  for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
      return i;
    }
  }

  // Return -1 if the element is not found
  return -1;
}

int main() {
  // Declare variables
  int n, x;

  // Prompt the user to enter the array size
  cout << "Enter array size: ";
  cin >> n;

  // Prompt the user to enter the element to search for
  cout << "Enter the element to search: ";
  cin >> x;

  // Create an array
  int arr[n];

  // Read the elements of the array from the user
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // Find the index of the element
  int index = search(arr, n, x);

  // Check if the element was found
  if (index == -1) {
    cout << "Element not found" << endl;
  } else {
    cout << "Element found at index " << index << endl;
  }

  return 0;
}
