//Addition of integers till n
#include<iostream>
using namespace std;
int Add(int n){
    if(n<=1){
        return 1;
    }
    else{
        return (n+Add(n-1));
    }
}
int main(){
    int n;
    cout<<"The number till you want to calculate the sum: ";
    cin>>n;
    int b=Add(n);
    cout<<"The Sum is: "<<b;
    return 0;
}

/*
The number till you want to calculate the sum: 6
The Sum is: 21
*/
