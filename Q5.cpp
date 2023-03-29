#include <iostream>
using namespace std;

int main() {
  int somaTotal;
  somaTotal = 1;

  for(int i=1; i<=10; i++){
    cout << somaTotal << " x " << i << " = ";
    somaTotal = somaTotal * i;
    cout << somaTotal << endl;
  }
  
  cout << "\nO valor desses números multiplicados é: " << somaTotal;
  return 0;
}