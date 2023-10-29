#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age:";
    cin>>age;
    if(age<18){
        cout<<"Not eligible for Job";
    }
    else if(age>=18){
        cout<<"Eligible for Job";
    }
    else if(age>=55 && age<=57){
        cout<<"Eligible for job , Bit retirement soon";
    }
    else{
        cout<<"Retirement time";
    }
    return 0;
}