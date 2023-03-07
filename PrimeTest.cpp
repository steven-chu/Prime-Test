#include <iostream> 
#include <cmath> 
using namespace std; 

int main(){ 
  
  int n;
  bool isPrime = true; // Boolean Statement 

  while (cin >> n){ // Continous user inputs for numbers to check for primality 
    isPrime = true; // This acts as a starting point so the program doesn't get stuck

    if (n == 0 || n == 1) { // First step to checking if it's prime, is the number 1 or 0? 
      isPrime = false; // If so, skip to line 22 and print '0' for false
    }
    for (int i = 2; i <= sqrt(n); i++){ // Loop starts at 2, i is less than or equal to the square root of n, increment by 1. n/2 also works for condition b,
                                        // but it makes it easier for numbers like 9 where it's not divisible by 2 but it not prime. Optimization.
      
      if (n % i == 0){ // Once the 'for' loop does not satisfy condition b, check if the remainder of 'n' and 'i' is 0. If so, stop the loop
        isPrime = false; // Boolean statement is changed to false 
        break; // Skips to line 25 and prints '0' for false
      }
    }
    if (isPrime) // Depending on the number, isPrime will either be true or false. If true, print '1', if false, print '0' 
      cout << "1" << endl; 
    else 
      cout << "0" << endl; 
  }
  return 0; // Program keeps running unless stopped by force via CTRL + D 
}
