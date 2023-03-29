#include <iostream>
#include <math.h>
using namespace std;

int main() {
  float n;
  float an; 
  float divi;
  an = 0;

  for (n=1; n<=100; n++){
    divi = 1/n;
    an += divi; 
    
    cout << "1/" << n << " = " << divi << endl;
  }
  
  cout << "A soma total de todos os valores da função é " << an << endl;
}