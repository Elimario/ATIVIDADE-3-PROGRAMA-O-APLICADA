#include <iostream>
#include<string>
#include <stdlib.h>

using namespace std;

string dois = "palavra 2", tres = "palavra 3", quatro = "palavra 4", cinco = "palavra 5";

string Decod (string _aux);


int main() {
    string aux_palavras, palavras;
    int quantidade;
    string resultado;
    cout <<"Quantidade palavras: \n";
    cin>>quantidade;
    if(quantidade==0){
      cout<<"Quantidade inválida \n";
      exit(0);
    }
    for (int i=0; i<quantidade; i++){
        cin >> aux_palavras;
        palavras += aux_palavras;
        aux_palavras = "";
    }
    resultado = Decod(palavras);
    cout << resultado << endl;
}

string Decod (string _aux){
    string Cod,aux;
    int aux_num;
    for(int i = 0; i < signed(_aux.length());i++){
        if(_aux[i] == '#'){
          switch (_aux[i+1])
          {
          case '2':
           aux = _aux[i+3];
           aux_num = atoi(aux.c_str());
           Cod += dois[aux_num-1];
          break;
          case '3':
          aux = _aux[i+3];
          aux_num = atoi(aux.c_str());
          break;
          case '4':
           aux = _aux[i+3];
           aux_num = atoi(aux.c_str());
           Cod += quatro[aux_num-1];
           break;
           case '5':
           aux = _aux[i+3];
           aux_num = atoi(aux.c_str());
           Cod += cinco[aux_num-1];
           break;
           default:
           break;
          }
          int aux_tamanho = Cod.length()-1;
          if(!Cod[aux_tamanho]){
            cout <<"valor invalido \n";
            exit (0);
          
          }
        
        
        
        }
    
    
     }
     return Cod;

}