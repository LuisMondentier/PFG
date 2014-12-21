//////////////////////////////////////////
//	Proyecto Fin de Grado
//	2014/12/13
//	Luis Fernández González
//////////////////////////////////////////
//matrix tests

#include <iostream>
#include <string>
#include "matrix.h"

using namespace std;

int main(void) {
	Matrix <int> A(2,2);
	A = 1;
	cout << A.mMatrixElements[1][1] << endl;
	if (A == 1) cout << "A es 1" << endl;
	if (A == 2) cout << "A es 2" << endl;
	system("pause");
	return 0;
}	//main