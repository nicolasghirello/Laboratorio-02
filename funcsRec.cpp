/**
* @file 	SeqA.cpp
* @brief 	Funções para solicitação das medidas das figuras geométricas ao usuário, tanto as planas quanto as espaciais.
* @author 	Nicolas Ghirello
* @since 	09/03/2017
* @data 	11/03/2017
*/

#include <iostream>
#include <cmath>

float SeqARec(int n) {
		
	if (aux <=n) {
		resultado += 1/aux;
		aux++;
		SeqARec(n);
	}
	else{
		cout << "O valor da sequencia A para N = "<< n << " e " << resultado << " (a versão recursiva foi usada)" << endl;
	}
}
float SeqBRec(int n){
	if (aux <=n) {
		resultado += (pow(aux,2) + 1) / (aux + 3);
		aux++;
		SeqBRec(n);
	}
	else{
		cout << "O valor da sequencia B para N = "<< n << " e " << resultado << " (a versão recursiva foi usada)" << endl;
	}

}