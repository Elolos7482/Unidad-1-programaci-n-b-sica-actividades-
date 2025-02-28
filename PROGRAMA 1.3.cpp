#include "iostream"
#include "iostream"
using namespace std;

int main()
{
//problema 1.3 Escribe un programa tal que dado los datos el nombre del dinosaurio
//su peso y su Longitud, espresando estos ultimos en libras y pies respectivamente
//escriba el nombre del dinosaurio, su peso expresando en kilogramos y La Longitud expresando en metros

//declaracion de variable
   string NOMBRE;
   float PESOENLIBRAS, LONGITUDENPIES;
   float PESOENKILOS, LONGITUDENMETROS;
//entradas de datos 

cout <<"Escribe el nombre del dinosaurio "<<"\n";
cin>> NOMBRE;
 
cout << "Escribir el peso del dinosaurio en libras "<<" \n";
cin>> PESOENLIBRAS;

cout << "Escribe la longitud del dinosaurio en pies "<<"\n"; 
cin>> LONGITUDENPIES;


//CALCULO
PESOENKILOS=PESOENLIBRAS*1000;
LONGITUDENMETROS=LONGITUDENPIES*0.3047;


//SE IMPRIME RESULTADOS
 cout <<" El paso en kilos del dinosaurio "<<NOMBRE<< " es "<<PESOENKILOS<<" y la longitud en metros es "<<LONGITUDENMETROS<<"\n";
 return 0;
} 
  
