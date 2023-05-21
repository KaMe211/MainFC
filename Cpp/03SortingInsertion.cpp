#include<iostream>
using namespace std;
int main(){

    int temp;
    int n=6;
    int lis[n]={12,45,23,51,19,8};

    // cout<<"Size of array : ";    cin>>n;
    // cout<<"Enter your numbers : ";
    // for (int i = 0; i < n; i++){
    //     cin>>lis[i];
    // }
    cout<<endl;
    for (int k = 0; k < n; k++){
    cout<<lis[k]<<" ";
    }

    for(int i=1;i<n;i++){
        int j=i-1;
        for(    ;lis[j]>lis[j+1] && j>=0;j--){
            temp=lis[j];
            lis[j]=lis[j+1];
            lis[j+1]=temp;

            cout<<endl;
            for (int k = 0; k < n; k++){
            cout<<lis[k]<<" ";
            }
        }
    }

    // cout<<endl;
    // for (int k = 0; k < n; k++){
    //     cout<<lis[k]<<" ";
    // }
    

    return 0;
}
