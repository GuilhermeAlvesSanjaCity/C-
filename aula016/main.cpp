#include <iostream>
using namespace std;
// ESTRUTURA DO WHILE
//nesta aula iremos aprender nosso segundo loop, o comando do while, 
//a simples varia��o do loop while que garante a execu��o do bloco de 
//comando pelo menos uma vez
//mesmo que a condi��o para o loop j� tenha iniciada satisfeita.
int main(void) {
	
	int cont;
	
	cont= 0;
	do {
		
		cout << "CANAL PROFESSOR - " << cont << "\n";
		cont++;
		
		
	}
	
	while(cont <20);
	
	
	cout << "ROTINA FINALIZADA";
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
