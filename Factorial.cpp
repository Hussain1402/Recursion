//Finding Factorial of a number
#include<iostream>
using namespace std;
int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    else{
        return (n*fact(n-1));
    }
}
int main(){
    int n;
    cout<<"The number of factorial you want to calculate: ";
    cin>>n;
    int b=fact(n);
    cout<<"The factorial is: "<<b;
    return 0;
}

/*
The number of factorial you want to calculate: 4
The factorial is: 24
*/
