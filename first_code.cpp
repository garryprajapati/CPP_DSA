/*
using namespace std;

int main() {
    cout << "Hello Gaurav!";
    cout << "\nMy DSA Journey Starts!";
    return 0;
}
    */

// cin.get() is used to read a single character from the input stream. It reads the next character from the 
//input buffer and stores it in the variable provided. It does not skip whitespace characters (like spaces, tabs,
// or newlines) and can be used to read characters including whitespace.

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the starting and ending number: ";
    int i,n;
    cin>>i>>n;
    while(i<=n){
        cout<<i<<" ";
        i++;
    }

}