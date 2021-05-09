#include <iostream>
using namespace std;
int main() {
struct STUDENT {
  string name;
  float time;
  int recent_chapter;
  
};
struct iot {
  std::string dispositivo;
  std::string tipo;
  float consumo;
};
struct iot device1;

device1.dispositivo=" luz exterior";
device1.tipo="luz";
device1.consumo=3.0;

cout<< "Dispositivo"<<endl
<<"Dispositivo:"<<device1.dispositivo<<endl
<<"Tipo: "<< device1.tipo<< endl
<<"Consumo: "<<device1.consumo<<endl;

  

}