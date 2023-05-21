#include <stdio.h>

int main()
{   
    int arr[10]={101,11,3,4,50,69,7,8,9,0};
    
    int greatest ,i, second ;
    
    if (arr[1]>arr[0]){
        greatest = arr[1];
        second = arr[0];
    }    
    else {
        greatest = arr[0];
        second = arr[1];
    }
        
    for(i=2;i<10;i++){
        
        if (greatest < arr[i] ){
            second = greatest;
            second = arr[i];
        }
        else if(second < arr[i]){
            second = arr[i];
        }
        
    }
    printf("%d is greatest and %d is second",greatest,second);
    return 0;
}
