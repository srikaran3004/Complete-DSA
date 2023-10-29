#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={2,4,6,5,9,10,34,12,30,14};
    int size=10;
    int maxi=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
    }
    cout<<"maximum number is "<<maxi<<endl;
}