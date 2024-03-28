#include <iostream>

using namespace std;

int main() {
	int numero_elementos;
	int maior, menor;
	cout << "informe a quantidade de elementos (max 20): ";
	cin >> numero_elementos;

	int vetor[numero_elementos];

	for (int i = 0; i < numero_elementos; i++)
	{
		cout << "informe oss numero: ";
		cin >> vetor[i];
	}


	// Inicializa maior e menor com o primeiro elemento do vetor
	maior = menor = vetor[0];


	for (int i = 1; i < numero_elementos; i++)
	{
		if (vetor[i] > maior)
		{
			maior = vetor[i];
		}
		else if (vetor[i] < menor)
		{
			menor = vetor[i];
		}



	}
	cout << "O maior elemento e: " << maior << endl;
	cout << "o menor elemento e: " << menor << endl;

}