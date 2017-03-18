/**
* @file 	SeqB.cpp
* @brief 	Funções para solicitação das medidas das figuras geométricas ao usuário, tanto as planas quanto as espaciais.
* @author 	Nicolas Ghirello
* @since 	09/03/2017
* @data 	11/03/2017
*/

#include <iostream>
#include "calcArea.h"
#include "area.h"

using namespace std;

/**
 * @brief		Função para solicitar ao usuário as medidas do triângulo.
 * @details		A função dadosArTriangulo solicita ao usuário as informações quanto as medidas da base e da altura do triângulo
 *				para posterior cálculo de sua área na função areaTriangulo. 
 */
void dadosArTriangulo() {
	float ladoTriangulo;
	cout << "Digite a medida do lado do triangulo, em metros: ";
	cin >> ladoTriangulo;

	areaTriangulo(ladoTriangulo);
}