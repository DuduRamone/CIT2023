#include <iostream>
using namespace std;

int main() {
  // declaração de variáveis
  int idade;
  char sexo, gravidez, amamentacao;
  float peso;

  // aviso de segurança
  cout << "---------------------------------------------------------\n";
  cout << " AVISO DE SEGURANÇA\n Pessoas com febre ou resfriado não podem doar sangue\n";
  cout << "---------------------------------------------------------\n";

  // input dos usuários
  cout << "Qual sua idade? ";
  cin >> idade;
  cout << "Qual seu peso? ";
  cin >> peso;
  cout << "Você é homem ou mulher (h/m)? ";
  cin >> sexo;
  
  //checagem mais importantes
  if (sexo == 'h') {
    if(idade >= 16 && idade <= 69 && peso >= 60){
      cout << "Você é qualificado para a doação, siga para o posto de coleta mais próximo";
    } else {
      cout << "Você não atendeu os requisitos necessários para a doação";
    }
  } else if (sexo == 'm') {
    if(idade >= 16 && idade <= 69 && peso >= 50){
      cout << "Você ta grávida (s/n)? ";
      cin >> gravidez;
      cout << "Você ta amamentou nos últimos 12 meses (s/n)? ";
      cin >> amamentacao;
      
      if (gravidez == 's' || amamentacao == 's'){
        cout << "Você não atendeu os requisitos necessários para a doação";
      } else {
        cout << "Você é qualificado para a doação, siga para o posto de coleta mais próximo";
      }
    }
  } else {
    cout << "Digite uma resposta válida";
  }
  return 0;
}