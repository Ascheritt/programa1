#include <iostream>
using namespace std;


void pulaLinha() {
	cout << endl;
}


int main()
{
	
	/*const int max = 10;
	int numero[max];
	int maior;
	int menor;

	cout << "Descubra qual numero é o maior e qual e o menor!" << endl;
	system("pause");
	system("cls");

	cout << "Digite dez numeros diferentes" << endl;

	for (int i = 0; i < max; i++) {
		cin >> numero[i];
		if (i != 0) {
			if ()
		}
	}
	*/

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





	/*while (i < n) {
			soma = soma + (++i);
		}*/

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





}

















/*cout << "Programa X" << endl;

	system("pause");

	system("cls");

	int x;

	cin >> x;

	while (x != 10) {

	}
	cout << "O que deseja fazer?" << endl;*/





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