#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cmath>
#include <string>
#include <string.h>
#include <ctype.h>
using namespace std;
int main ()
{
	setlocale(LC_ALL, "spanish");
	int valores[7] = {4, 6, 9, 3, 8, 2, 9}, retornar=0;
	string nom;
	cout << "Hola pobre, ¿como te llamas?" << endl;
	getline (cin,nom);
	cout << nom << " nombre de pobre..." << endl;
	cout << "En fin, nombre de pobre" << endl;
	cout << nom << " este programa indica un vector de: int valores[7] = {4, 6, 9, 3, 8, 2, 9}; que será cambiado" << endl;
	valores[5] = valores[5] -2;
	cout << "Le sustraje 2 unidades al valor de la posición 5 = " << valores[5] << endl;
	valores[3] = 9;
	valores[6] = 3;
	cout << "Intercambié los valores de las posiciones 3 y 6 = " << valores[3] << " "  << valores[7] << endl;
	for (int i=0;i<=6;i++)
	{
		cout << "Valor " << i+1 << " del array " << valores[i] << endl;
	}
	cout << nom << " ¿quieres volver a iniciar el programa? (si 1 no 2)" << endl;
	cin >> retornar;
	if (retornar==1)
	{
		return main ();
	}

}
