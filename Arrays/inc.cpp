#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
}
int main(){
    int arr[]={5,6};
    int size=2;
    // inc(arr,size);
    printArray(arr,size);
}