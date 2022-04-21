/* VARIAVEIS

real: valquantia, valfinal;


ENTRADA

Escreva: "Digite a quantia: " endl;
Leia: valquantia;


PROCESSO

valfinal = valquantia/4,70;


SAIDA

Escreva: "Sua quantia em dolar é de: " << valfinal << endl; */


#include <iostream>
	
    using namespace std;
    int main (){
	
	float valquantia, valfinal;
	
	cout << "Digite a quantia em real: " << endl;
	cin >> valquantia;
	
	valfinal = valquantia/4,70;
	
	cout << "Sua quantia em dolar: " << valfinal << endl;
	
	
	
	system ("pause");
	return 0;
	
}
