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
	int num1[0], retornar=0, cero=1,suma=0,promedio=0, totalvector=0,i=0;
	string nom;
	cout << "Hola pobre, ¿como te llamas?" << endl;
	getline (cin,nom);
	cout << nom << " nombre de pobre..." << endl;
	cout << "En fin, nombre de pobre" << endl;
	cout << nom << " este programa hace que ingreses tantos números que quieras y la cantidad de números ingresados, su suma y promedio" << endl;
	cout << nom << " si no quiere ingresar más ingrese 0" << endl;
	while (cero != 0)
	{
		i=i+1;
		cout << nom << " ingrese un número" << endl;
		cin >> cero;
		if (cero != 0)
		{
			num1[i] = cero;
			suma = suma + cero;
			totalvector=totalvector+1;
		}
	}
	
	promedio = suma / totalvector;
	
	cout << nom << " esta es la cantidad:" << totalvector << endl;
	cout << nom << " esta es la suma:" << suma << endl;
	cout << nom << " este es el promedio:" << promedio << endl;
	
	cout << nom << " ¿quieres volver a iniciar el programa? (si 1 no 2)" << endl;
	cin >> retornar;
	if (retornar==1)
	{
		return main ();
	}
}
