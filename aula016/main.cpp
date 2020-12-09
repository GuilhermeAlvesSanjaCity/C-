#include <iostream>
using namespace std;
// ESTRUTURA DO WHILE
//nesta aula iremos aprender nosso segundo loop, o comando do while, 
//a simples variação do loop while que garante a execução do bloco de 
//comando pelo menos uma vez
//mesmo que a condição para o loop já tenha iniciada satisfeita.
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
