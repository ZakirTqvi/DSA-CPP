#include<iostream>
#include<cmath>  // for sqrt()

using namespace std;

bool isPrime(int n){

   if(n <=1) return false;
   else if(n == 2) return true;

   else {
    
     for(int i=2;i<=sqrt(n);i++){

         if(n%i == 0){
            return false;
         }
        
     }
      return true;
   }
}

int main(){
  int n = 2; 
  
  if(isPrime(n)){
    cout<< "Prime";
  }else{
    cout << "Not Prime";
  }

  return 0;
    
}