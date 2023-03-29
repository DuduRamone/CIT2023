#include <iostream>
using namespace std;
int main() {
  // declaração de variáveis
  float preco, precofinal;
  int codigo;

  // inputs do usuário
  cout << "Qual o valor da sua compra? ";
  cin >> preco;
  cout << "Qual o seu código de usuário?\n  [1] Cliente comum\n  [2] Funcionário\n  [3] Cliente VIP.\nCódigo: ";
  cin >> codigo;
  
  // checagem do tipo de usuário e aplicação do desconto
  if (codigo == 1){
    precofinal = preco - ((preco*5)/100);
    cout << "O preço final da sua compra será R$" << preco;
  } else if (codigo == 2){
    precofinal = preco - ((preco*15)/100);
    cout << "O preço final da sua compra será R$" << precofinal;
  } else if (codigo == 3){
    precofinal = preco - ((preco*10)/100);
    cout << "O preço final da sua compra será R$" << precofinal;
  } else {
    cout << "Esse código de usuário é inválido.";
  }
  return 0;
}