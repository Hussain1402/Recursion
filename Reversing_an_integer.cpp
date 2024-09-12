#include <iostream>
using namespace std;

void reverseNumber(int n) {
    if (n==0)
        return;

    cout<<n%10;
    reverseNumber(n/10);
}

int main() {
    int num;
    cout<<"Enter an integer: ";
    cin>>num;
    
    cout<<"Reversed: ";
    reverseNumber(num);
    cout<<endl;

    return 0;
}

/*
Enter an integer: 78645
Reversed: 54687
*/
