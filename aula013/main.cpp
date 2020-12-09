#include <iostream>
#include <locale.h> // USADO PARA SELECIONAR A LOCALIZADA PARA A IDE IDENTIFICAR O 
					//IDIOMA E ACENTUOS
using namespace std;


int main(void) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int val;
	
	cout << "Selecione uma cor:\n";
	cout << "[1] = verde, [2]= azul, [3]= vermelho\n";
	
	cin >> val;
	
	switch(val){
		
		case 1:
			cout << "cor selecionada: Verde\n";
			break;
			
		case 2:
			cout << "COR SELECIONADA: AZUL\n";
			break;
		case 3:
			cout << "COR SELECIONADA: VERMELHO\n";
			break;
		default:
			cout << "VALOR SELECIONADO INVALIDO\n";
		
		
		
		
		
		
	}
	
	
		cout << "FIM DO PROGRAMA, DIGITE QUALQUER TECLA PRA CONTINUAR";
	
	
	
	
	
	
	return 0;
}
