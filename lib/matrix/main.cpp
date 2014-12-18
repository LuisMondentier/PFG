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
	int a[2][2] = { 1, 0, 3, 4};
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			cout << a[i][j] << endl;
		}
	}

	system("pause");
	return 0;
}	//main