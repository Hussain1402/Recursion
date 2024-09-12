//Reversing a string
#include <iostream>
using namespace std;

string rev(string n) {
    string p;
    int len=0;
    while (n[len]!='\0') {
        len++;
    }
    for (int i=len-1;i>=0;i--) {
        p+=n[i];
    }
    return p;
}

int main() {
    string n;
    cout<<"Enter a string: ";
    cin>>n;
    string p=rev(n);
    cout<<"Reversed string is: "<<p<<endl;
    return 0;
}

/*
Enter a string: hussain
Reversed string is: niassuh
*/
