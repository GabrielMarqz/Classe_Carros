#include <iostream>
#include <string>
using namespace std;

class carros
{
private:
int cod_car;
int ano;

public:
string cor;
string nome;

  void setcod_car(int c){
      cod_car=c;
}
   int getcod_car(){
     return cod_car;
   }
   void setano(int a){
      ano=a;
}
   int getano(){
     return ano;
   }

   };

int main()
{
 carros Camaro;
 Camaro.setcod_car(1),Camaro.setano(1999);
 Camaro.cor="Amarelo",Camaro.nome="Camaro";
 cout<<"Codigo do carro: "<<Camaro.getcod_car()<<endl;
 cout<<"Ano do carro: "<<Camaro.getano()<<endl;
 cout<<"Cor do carro: "<<Camaro.cor<<endl;
 cout<<"Nome do carro: "<<Camaro.nome<<endl;

return 0;
}
