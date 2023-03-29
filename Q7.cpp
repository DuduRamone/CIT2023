#include <iostream>
using namespace std;

int main() {
  int n1, n2, aux, rep, res;
  n1 = 1; n2 = 1;

  cout << "Quantos números você quer ver na sequência de fibonacci? ";
  cin >> rep;

  cout << n1 << " " << n2 << " ";
  for (int i=2; i < rep; i++){
    aux = n1+n2;
    cout << aux << " ";
    n1 = n2;
    n2 = aux;
  }
  return 0;
}