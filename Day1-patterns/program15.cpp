#include<iostream>

using namespace std;

int main(){
    int n=4;

    //Top
    for(int i=0;i<n;i++){
        
        //stars
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        //spaces
        for(int j=0; j<n-i-1;j++){
            cout << " ";
        }
        //spaces
        for(int j=0; j<n-i-1;j++){
            cout << " ";
        }
        //stars
        for(int j=0;j<=i;j++){
            cout << "*";
        }

        cout << endl;
    }


    //bottom 
    for(int i=0; i<n;i++){
        
        //stars
        for(int j=n; j>i; j--){
            cout << "*";
        }

        // spaces
        for(int j=0; j<i;j++){
            cout << " ";
        }

        // spaces
        for(int j=0; j<i;j++){
            cout << " ";
        }

        //stars
        for(int j=n; j>i; j--){
            cout << "*";
        }

        cout << endl;
    }

}