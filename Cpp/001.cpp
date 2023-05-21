#include <iostream>

using namespace std;

void rec(){
    int row,col;
    cout<<"Enter number of rows : "<<endl;
    cin>>row;
    cout<<"Enter number of coloumns : "<<endl;
    cin>>col;

    for( int i = 1 ; i <= row ; i++ ){
        for( int j=1 ; j<=col ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void hollow(){
    int row,col;
    cout<<"Enter number of rows : "<<endl;
    cin>>row;
    cout<<"Enter number of coloumns : "<<endl;
    cin>>col;

    for( int i = 1 ; i <= row ; i++ ){
        for( int j = 1 ; j <= col ; j++ ){
            if((i==1 || i==row)||(j==1 || j==col)){
            cout<<"* ";
            }
            else{
            cout<<"  ";
            }
        }
        cout<<endl;
    }
}


int main(){
    
    cout<<"Select Pattern Program : ";
    int prog=2; //cin>>prog;
    
    switch (prog){
    case 1:
        rec();
        break;
    
    case 2:
        hollow();
        break;

    case 0:
        return 0;
        break;
 
    default:
        cout<<"*****INVAILD*****"<<endl;
        main();
        break;
    }

    return 0;
}