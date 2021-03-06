/**
* @file 	main.cpp
* @brief	Programa que calcula a área e perímetro para figuras geométricas planas e a área e volume para figuras geométricas espaciais.
* @author	Nicolas Ghirello
* @since	09/03/2017
* @data		11/03/2017
*/

#include <iostream>
#include "menu.h"

using std::cin;
using std::cout;
using std::endl; 

/**
 * @brief		Função principal.
 * @details		A função principal encaminha o usuário para a função menu que redirecionará para uma outra função onde haverá outras chamadas para cálculo de área, 
 *				perímetro ou volume.
 */ 
float aux = 1;
float resultado = 0;

int main(int n){
	cin >> n;
	SeqBIte(n);
}