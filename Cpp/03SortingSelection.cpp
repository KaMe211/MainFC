#include<iostream>
using namespace std;
int main(){

    int temp;
    int n=0;
    cout<<"Size of array : ";
    cin>>n;

    int lis[n];
    cout<<"Enter your numbers : ";

    for (int i = 0; i < n; i++){
        cin>>lis[i];
    }


    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if (lis[i]>lis[j]){
                temp=lis[i];
                lis[i]=lis[j];
                lis[j]=temp;
            }
        }
    }

    cout<<endl;
    for (int k = 0; k < n; k++){
        cout<<lis[k]<<" ";
    }
    

    return 0;
}