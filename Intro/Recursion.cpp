#include<iostream>
using namespace std;
int func(int n){
    if(n==1){
        return 0;
    }
    else{
        return 1+func(n/2);
    }
}
// void fun(int n){
//     if(n==0){
//         return ;
//     }
//     cout<<n<<endl;
//     fun(n-1);
//     cout<<n<<endl;
// }
int main(){
    // fun(3);
    func(16);
    return 0;
}