#include <iostream> 
#include <cmath> 
using namespace std; 

int main(){ 
  
  int n;
  bool isPrime = true; 

  while (cin >> n){
    isPrime = true;

    if (n == 0 || n == 1){
      isPrime = false; 
    }
    for (int i = 2; i <= sqrt(n); i++){
      if (n % i == 0){
        isPrime = false;
        break;
      }
    }
    if (isPrime)
      cout << "1" << endl; 
    else 
      cout << "0" << endl; 
  }
  return 0; 
}
