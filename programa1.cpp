#include <iostream>
using namespace std;



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
	
	while (cont != 0) {
		cout << "Digite um numero" << endl;
		cin >> n;
		int m = n - 2;
		int o = n - 1;

		for (int i = 1; i < n; i++) {
			if (i < m) {
				cout << i << " + ";
				soma = soma + (i + 1);
			}
			else if (i == o) {
				int j = i + 1;
				cout << j << " = "; 
				soma = soma + (i + 1);
			}
			
		}
		cout << soma << endl;

		cout << "Deseja continuar? " << endl;
		cin >> cont;
	}





	/*while (i < n) {
			soma = soma + (++i);
		}*/









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