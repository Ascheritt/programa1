#include <iostream>
using namespace std;

struct lista {
	int valor;
	lista* prox;
};

int main()
{
	const int max = 10;
	int numero[max];
	int aux;

	cout << "Descubra o maior e o menor numero dentre " << max << "!" << endl << endl;
	system("pause");
	system("cls");

	cout << "Digite dez numeros diferentes" << endl;

	for (int i = 0; i < max; i++) {

		cout << "Digite o " << (i + 1) << ". numero: " << endl;
		cin >> numero[i];

		if (i != 0) {
			for (int ii = i; ii > 0; ii--) {
				while (numero[i] == numero[ii - 1]) {
					cout << "Digite um numero diferente dos anteriores:" << endl;
					cin >> numero[i];
				}
				if (ii == 1) {
					for (int f = ii; f < i; f++) {
						while (numero[i] == numero[f]) {
							cout << "Digite um numero diferente dos anteriores:" << endl;
							cin >> numero[i];
							ii = f;
						}
					}
				}
			}
		}

		if (i != 0) {
			if (numero[i - 1] > numero[i]) {
				int aux = numero[i];
				numero[i] = numero[i - 1];
				numero[i - 1] = aux;
			}

			else {
				int aux = numero[i];
				for (int i2 = 0; i2 < i; i2++) {
					if (numero[i2] > aux) { 
						if ((i2 - 1) == -1) {
							int aux2; 
							for (int i3 = 0; i3 <= i; i3++) {
								if (i3 == 0) {
									aux2 = numero[i3];
									numero[i3] = aux;
								}
								else {
									aux = numero[i3];
									numero[i3] = aux2;
								}
							}	
							break;
						}
					}
				}
			}
		}
	}

	/*
	for (int i = 0; i < (max - 1); i++) {

		int k;

		for (int ii = 1; ii < max; ii++) {
			if (numero[i] > numero[i + 1]) {
				aux = numero[i + 1];
				numero[i + 1] = numero[i];
				numero[i] = aux;
			}
			if (ii == (max - 1)) {
				k = ii;
			}
		}

		if (k == (max - 1)) {
			for (int ii = k; ii > 0; ii--) {
				if (numero[ii] < numero[i]) {
					aux = numero[i];
					numero[i] = numero[ii];
					numero[ii] = aux;
				}
			}
		}

	}*/

	cout << endl;

	for (int i = 0; i < max; i++) {
		cout << numero[i] << " ";
	}
}


/*


for (int ii = 1; ii < max; ii++) {

		}

		if (numero[i] > numero[i + 1]) {
			aux = numero[i + 1];
			numero[i + 1] = numero[i];
			numero[i] = aux;
		}



cout << "Descubra o maior e o menor numero dentre todos os que digitar!" << endl << endl;
	system("pause");
	system("cls");

	int qElementos = 0;
	int nElementos = 1;
	lista* nn = (lista*)malloc(sizeof(lista));
	lista* primeiro = NULL;

	cout << "Quantos elementos deseja digitar?" << endl;
	cin >> qElementos;
	cout << endl;

	while (qElementos <= 0) {
		cout << "Digite um valor maior que zero!" << endl;
		cin >> qElementos;
	}

	while (nElementos <= qElementos) {

		if (nn == NULL) {

			return 0;

		}

		cout << "Digite o " << nElementos << ". numero:" << endl;

		cin >> nn->valor;
		nn->prox = NULL;

		if (primeiro == NULL) {
			primeiro = nn;
		}
		else {
			lista* jun = primeiro;
			while (jun->prox != NULL) {
				jun = jun->prox;
			}
			jun->prox = nn;
		}
		nElementos++;
	}

	lista* jun = primeiro;

	while (jun->prox != NULL) {
		if (jun->valor > jun->prox->valor) {
			lista* aux = (lista*)malloc(sizeof(lista));
			aux->valor = jun->prox->valor;
			jun->prox->valor = jun->valor;
			jun->valor = aux->valor;
		}
	}
	jun = primeiro;

	while (jun->prox != NULL) {
		cout << jun->valor << " ";
		jun = jun->prox;
	}
*/


/*	const int max = 10;
	int numero[max];
	int maior;
	int menor;

	cout << "Descubra o maior e o menor numero dentre " << max << "!" << endl << endl;
	system("pause");
	system("cls");

	cout << "Digite dez numeros diferentes" << endl;

	for (int i = 0; i < max; i++) {

		cout << "Digite o " << (i + 1) << ". numero: " << endl;
		cin >> numero[i];

		if (i == 0) {
			maior = numero[i];
			menor = maior;
		}

		else {
			for (int ii = i; ii > 0; ii--) {
				while (numero[i] == numero[ii - 1]) {
					cout << "Digite um numero diferente dos anteriores:" << endl;
					cin >> numero[i];
				}
				if (ii == 1) {
					for (int f = ii; f < i; f++) {
						while (numero[i] == numero[f]) {
							cout << "Digite um numero diferente dos anteriores:" << endl;
							cin >> numero[i];
							ii = f; 
						}
					}
				}
			}
	
			if (numero[i] > maior) {
				maior = numero[i];
			}

			else if (numero[i] < menor) {
					menor = numero[i];
			}
		}
	}
	
	cout << "\nO maior numero e: " << maior << endl
		 << "O menor numero e: " << menor << endl;

*/



/*
	int n;
	int soma = 1;
	int cont = 1;

	while (cont == 1) {

		cout << "Digite um numero" << endl;
		cin >> n;

		while (n <= 1) {
			system("cls");
			cout << "Digite um numero inteiro e positivo diferente de 1:" << endl;
			cin >> n;
		}

		if (n == 2) {
			cout << "1 + 2 = 3";
		}

		else {
			for (int i = 1; i <= n; i++) {

				if (i == 1) {
					cout << i << " + ";
				}

				else {
					soma = soma + i;

					if (i < n) {
						cout << i << " + ";
					}

					else {
						cout << i << " = " << soma;
					}
				}
			}
		}

		cout << "\nDeseja continuar?" << endl << "Se sim, digite 1, caso contrario, digite um numero qualquer:" << endl;
		cin >> cont;

		system("cls");
	}
	*/



/*while (i < n) {
			soma = soma + (++i);
		}
*/




/*cout << i << " + ";

	if (i != n2) {
		soma = soma + (i + 1);
	}

	else {
		cout << i << " + ";
		soma = soma + (i + 1);
		cout << n << " = " << soma << endl;
	}
*/



	/*
	int x;
	int y;

	cout << "Digite o primeiro numero." << endl;
	cin >> x;
	system("cls");

	cout << "Digite o segundo numero." << endl;
	cin >> y;
	system("cls");

	if (x > y) {
		cout << "O primeiro numero e maior";
	}

	else if (x < y) {
		cout << "O segundo numero e maior";
	}

	else {
		cout << "Os numeros sao iguais";
	}
	*/


	/*
	else {
			while (aux->prox != NULL) {
				if (aux->prox->valor > novo->valor) {
					break;
				}
				aux = aux->prox;
			}

			if (aux->prox == NULL)
			{
				aux->prox = novo;
			}

			else
			{
				novo->prox = aux->prox;
				aux->prox = novo;
			} 
	*/
