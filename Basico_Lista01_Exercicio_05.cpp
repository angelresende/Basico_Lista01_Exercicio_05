#include <iostream>
#include <clocale> // setlocale
#include <cstdlib> // system
#include <string> // Textos em geral
#define tam 4

using namespace std;


int main() {
	setlocale(LC_ALL, "Portuguese");

  int matriz[tam][tam], i;
  int lin, col;
  int med=0, maior, menor, soma_impar=0, qtd_pares=0, d_soma_pares=0;
  char op;
  
  do
  {
	system("cls");
	cout << "----------------Menu-----------------" << endl;
	cout << "1 - Inserir números da matriz" << endl;
	cout << "2 - Imprimir matriz" << endl;
	cout << "3 - Calcular a média dos dados da matriz" << endl;
	cout << "4 - Calcular maior e menor número da matriz" << endl;
	cout << "5 - Calcular a somatória dos números ímpares da diagonal principal da matriz" << endl;
	cout << "6 - Calcular a quantidade de números pares da diagonal secundária da matriz" << endl;
	cout << "7 - Calcular o dobro da somatória dos números pares das duas diagonais" << endl;
	cout << "0 - Sair" << endl;
	cin >> op;

	switch (op)
	{
	case '1': system ("cls");
		cout << "--- Insira os números da matriz ---" << endl;
		for (lin=0;lin<tam;lin++)
			for (col=0;col<tam;col++){
			cout << "Digite um numero: ";
			cin >> matriz[lin][col];
	}
		cout << endl;

		system("pause");
		break;
	
	case '2': system ("cls");
		cout << "--- Impressão matriz ---" << endl;
		for (lin=0;lin<tam;lin++){
			cout << endl;
			
			for (col=0;col<tam;col++)
			cout << matriz[lin][col] << "\t";
	}
		system("pause");
		break;

	case '3': system ("cls");
		cout << "--- Calcula a média dos números da matriz ---" << endl;
		for(lin=0;lin<tam;lin++)
 			for(col=0;col<tam;col++)
				med+=matriz[lin][col];
		
		cout << endl;
		cout << "A media dos numero da matriz é: " << med/(tam*tam) << endl;

		system("pause");
		break;
	
	case '4': system ("cls");
		cout << "--- Calcula maior e menor número da matriz ---" << endl;
		menor = matriz[0][0];
		maior = matriz[0][0];
		
		for (lin = 0; lin < tam; lin++)
			for (col = 0; col < tam; col ++) { 
				if (matriz[lin][col]>maior)
				maior = matriz[lin][col];
					if (matriz[lin][col]<menor)
					menor = matriz[lin][col];
		}

 	cout << "Menor: " << menor << endl;
	cout << "Maior: " << maior << endl;
	
		system("pause");
		break;

	case '5': system ("cls");
		cout << "--- Calcula a somatoria dos números impares da diagonal principal ---" << endl;
		for (i=0; i<tam;i++)
			if (matriz[i][i]%2!=0)
			soma_impar+=matriz[i][i];
		cout << endl;
		cout << "Somatoria dos números impares da diagonal principal: " << soma_impar << endl;

		system("pause");
		break;
	
	case '6': system ("cls");
		cout << "Imprimir matriz" << endl;
		for (i=0; i<tam;i++)
			if (matriz[i][tam-1-i]%2==0)
			qtd_pares++;
		cout << endl;		
		cout << "Quantidade numeros pares da diagonal secundária: " << qtd_pares << endl;
		system("pause");
		break;

	case '7': system ("cls");
		cout << "--- Calcula dobro da somatoria dos pares das diagonais --- " << endl;
 		for (i=0;i<tam;i++)
 			if (matriz[i][i]%2==0)
			d_soma_pares+=matriz[i][i];

		for (i=0;i<tam;i++)
 			if (matriz[i][tam-1-i]%2==0)
 			d_soma_pares+=matriz[i][tam-1-i];
	cout << endl;
	cout << "Dobro da somatoria dos pares das diagonais: " << 2*d_soma_pares << endl;

		system("pause");
		break;
	}
} while (op!=0);
  
	system("pause");
	return 0;
}