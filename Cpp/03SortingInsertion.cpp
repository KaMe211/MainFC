#include<iostream>
using namespace std;
int main() {
    int arr[6]={43,234,76,8,78,9};
    int temp;
    
    for(int i=1;i<6;i++){   
        for(int j=i-1;j>-1;j--){
            if(arr[j+1]>arr[j]){
                break;
            }else {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
    }
    
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ,";
    }
    
    return 0;
}