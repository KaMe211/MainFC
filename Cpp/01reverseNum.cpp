#include<iostream>
using namespace std;

int main(){

    cout<<"Enter your no. : 84376539";
    int n=84376539;
    
    int reverse=0;

    while (n>0)
    {
        int lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n/=10;
    }
    
    cout<<endl<<reverse;
    return 0;
}