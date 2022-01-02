#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    string arr[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    int t, n;
    cin>>t>>n;
    
    for (int i=t; i<=n; i++) {
        if (i>=1 && i<=9) {
        cout<<arr[i-1]<<endl;
        }
        else {
        if (i%2==0) {
        cout<<"even"<<endl;
        }
        else {
        cout<<"odd"<<endl;
        }
        }
    }
    
    return 0;
}