//Reversing a string
#include <iostream>
using namespace std;
int length(string str){
    int l=0;
    while (str[l]!='\0') 
    {
        l++;
    }
    return l;
}
void rev(string &str, int start, int end) {
    if (start>=end) {
        return;
    }
    char temp=str[start];
    str[start]=str[end];
    str[end]=temp;
    rev(str,start+1,end-1);
}
int main() {
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    int l=length(str);
    rev(str,0,l-1);
    cout<<"Reversed string: "<<str<<endl;
    return 0;
}

/*
Enter a string: hussain
Reversed string: niassuh
*/
