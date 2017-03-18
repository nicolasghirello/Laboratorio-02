/**
* @file 	SeqA.cpp
* @brief 	Funções para solicitação das medidas das figuras geométricas ao usuário, tanto as planas quanto as espaciais.
* @author 	Nicolas Ghirello
* @since 	09/03/2017
* @data 	11/03/2017
*/

#include <iostream>
#include <cmath>

float SeqAIte(int n){
	int i;
	for (i=0; i < n; i++){
		resultado += 1/aux;
		aux++;
	}
	cout << "O valor da sequencia A para N = "<< n << " e " << resultado << " (a versão iterativa foi usada)" << endl;
}
float SeqBIte(int n){
	int i;
	for (i=0; i < n; i++){
		resultado += (pow(aux,2) + 1) / (aux + 3);
		aux++;
	}
	cout << "O valor da sequencia B para N = "<< n << " e " << resultado << " (a versão iterativa foi usada)" << endl;	
}