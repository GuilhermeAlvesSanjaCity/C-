#include <iostream>
using namespace std;



int main(void) {
	
	// OPERADOR TERNARIO  ? valor1 : valor2;
	

	int n1, n2, nota;
	string res;
	
	cout << " DIGITE A PRIMEIRA NOTA";
	cin >> n1;
	
	cout << " DIGITE A SEGUNDA NOTA";
	cin >> n2;
	
	nota = n1+n2;
	
	(nota>=60) ? res= "APROVADO" : res="REPROVADO";
		//			RETORNO VERADEIRO / RETORNO NEGATIVO 		
	cout << "\nSITUACAO DO ALUNO:" << res << "\n";
	
	
	
	
	return 0;
}
