#include <iostream>
using namespace std;

int main() {
  // declaração de variáveis
  float l1, l2, l3;

  // inputs do usuário
  cout << "Digite o lado 1: ";
  cin >> l1;
  cout << "Digite o lado 2: ";
  cin >> l2;
  cout << "Digite o lado 3: ";
  cin >> l3;
  
  // checkagem se podem formar um triângulo
  if (l1 < (l2 + l3) && l2 < (l1 + l3) && l3 < (l1 + l2)) { 
    // checkagem do tipo do triângulo
    if (l1 != l2 && l2 != l3 && l3 != l1) {
      cout << "Este é um triângulo escaleno";
    } else if (l1 == l2 && l1 == l3 && l2 == l3) {
      cout << "Este é um triângulo equilátero";
    } else {
      cout << "Esse é um triângulo isóceles";
    }
  } else {
  cout << "Os lados informados não podem formar um triângulo";
  }

  return 0;
}