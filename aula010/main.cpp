#include <iostream>
using namespace std;
#include <cstdlib>

// PROGRAMA BASICO PARA INTRODUCAO E SAIDA DE NOTAS E RETORNO OU INICIO COM GOTO



int main(int argc, char** argv) {
	
	int n1,n2,resp;
	char opc;
	
	inicio:
	
	system("cls");
	
	cout << " DIGITE O VALOR DA NOTA 1:";
	cin >> n1;
	
	cout << " DIGITE O VALOR DA NOTA 2:";
	cin >> n2;
	
	
	resp = n1+n2;
	
	if (resp >=60){
		
		cout << " ALUNO APROVADO";
			
	}
	else if(resp >=40){
		cout << " ALUNO EM RECUPERACAO";
		
	}
	
	
	else
	{
		cout << " ALUNO REPPROVADO";
		
	}
	
	
	cout << "\n DESEJA DIGITAR MAIS NOTAS?[s/n]";
	cin >> opc;
	
	if( opc == 's' or opc=='S'){
		
		goto inicio;
		
	}
	

	
	
	
	return 0;
}
