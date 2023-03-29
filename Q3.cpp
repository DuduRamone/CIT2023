#include <iostream>
#include <math.h>
using namespace std;

int main() {
  // declaração de variáveis
  float peso, altura, imc;

  // inputs do usuário
  cout << "Qual seu peso? ";
  cin >> peso;
  cout << "Qual sua altura? ";
  cin >> altura;

  // calculo do imc
  imc = peso / pow(altura, 2);

  // checando a condição do paciente
  if (imc <= 19) {
    cout << "Paciente abaixo do peso";
  } else if (imc < 25) { 
    cout << "Paciente com peso normal"; 
  } else if (imc < 30) {
    cout << "Paciente com sobrepeso"; 
  } else if (imc < 40) {
    cout << "Paciente com obesidade tipo 1"; 
  } else{
    cout << "Paciente com obesidade mórbida"; 
  }
  return 0;
}