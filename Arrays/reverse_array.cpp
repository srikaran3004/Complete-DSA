#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no.of elements in array: ";
    cin>>n;
    cout<<"Enter the Elements in array:";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    cout<<"Elements after reversing array are: ";
    for(int i=0;i<n;i++)
    {
    cout<<arr[i];        
    }
    cout<<endl;
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int start, int end)
{
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}	

void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";
cout << endl;
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};	
	int n = sizeof(arr) / sizeof(arr[0]);
	printArray(arr, n);	
	reverseArray(arr, 0, n-1);
	cout << "Reversed array is" << endl;
		printArray(arr, n);
	
	return 0;
}
