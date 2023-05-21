#include<iostream>
using namespace std;

int linearSearch(int N[],int n,int keys){
    for( int i=0 ; i<n ; i++ ){
        if(N[i]==keys){
            return i;
        }
    }
    return -1;
}

int main (){

    cout<<"Size of array : ";
    int n; 
    cin>>n;

    int N[n];

    for(int i=0 ; i<n ; i++){
        
        cout<<"Enter "<<i+1;
        if (i+1==1){
            cout<<"st";
        }
        else if (i+1==2){
            cout<<"nd";
        }
        else if (i+1==3){
            cout<<"rd";
        }
        else{
            cout<<"th";
        }
        cout<<" element : ";
         
        

        cin>>N[i];
    }

    cout<<"Enter no. to search : ";
    int keys;
    cin>>keys;

    cout<<"Index of "<<keys<<" is "<<linearSearch(N,n,keys);

    return 0;
}