/*

VARIÁVEIS 

real : ValGasolina, Velocidade, MedLitros, ValGasPorL, Distancia, Tempo, GasGasto, ValTotalGasto;
inteiro: ConsumoGas;

//ENTRADA 1

Escreva "Insira o valor atual da gasolina: ";
Leia ValGasolina;

Escreva "Insira a distancia em km que ira percorrer: ";
Leia Distancia;

Escreva "Insira a velocidade media: ";
Leia Velocidade;

Escreva "Insira o consumo medio de litros por Km: ";
Leia MedLitros;

//PROCESSO 1


Tempo = (Distancia/Velocidade);

ValGasPorL = (ValGasolina/MedLitros);
ValTotalGasto = (ValGasPorL*Distancia);

Escreva << Tempo << "hrs para chegar ao destino.";

Escreva "Valor gasto: " << ValTotalGasto;


//ENTRADA 2

Escreva "Insira quantos litros foram necessarios para reabastecer completamente o tanque apos a viagem: ";
Leia GasGasto;


//PROCESSO 2


ConsumoGas = (Distancia/GasGasto);

Escreva "Foram gastos: " << ConsumoGas << "km/L";

*/


#include <iostream>
using namespace std;
int main () {
	
float ValGasolina, Velocidade, MedLitros, ValGasPorL, Distancia, Tempo, GasGasto, ValTotalGasto;

int ConsumoGas;

//ENTRADA 1
	

cout << "Insira o valor atual da gasolina: " << endl;
cin >> ValGasolina;

cout << "Insira a distancia em km que ira percorrer: " << endl;
cin >> Distancia;

cout << "Insira a velocidade media: " << endl;
cin >> Velocidade;

cout << "Insira o consumo medio de litros por Km: " << endl;
cin >> MedLitros;

//PROCESSO 1


Tempo = (Distancia/Velocidade);

ValGasPorL = (ValGasolina/MedLitros);
ValTotalGasto = (ValGasPorL*Distancia);

cout << Tempo << "hrs para chegar ao destino." << endl;

cout << "Valor gasto: " << ValTotalGasto << endl;


//ENTRADA 2

cout << "Insira quantos litros foram necessarios para reabastecer completamente o tanque apos a viagem: " << endl;
cin >> GasGasto;


//PROCESSO 2


ConsumoGas = (Distancia/GasGasto);

cout << "Foram gastos: " << ConsumoGas << "km/L" << endl;


	
	
	system ("pause");
	return 0;
}
