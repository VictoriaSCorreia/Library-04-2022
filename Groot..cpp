#include <iostream>

using namespace std;
int main ()
{

	string nome, senha;
	
	cout << "Digite nome de usuario: ";
	cin >> nome;
	
	if (nome == "Groot")
	cout << "Digite senha: " << endl;
	
	
	else 
	cout << "Usuario incorreto." << endl;
	
	cin >> senha;
	if (senha == "eu_sou_o_groot")
	
	cout << "Login aceito. " << endl;
	
	else 
	cout << "Senha incorreta. " << endl;
	
		
system ("pause");
return 0;
}
