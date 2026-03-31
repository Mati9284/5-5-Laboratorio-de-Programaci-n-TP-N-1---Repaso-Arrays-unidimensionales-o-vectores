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
	int datos[8] = {8, 9, 3, 6, 7, 1, 4, 2}, retornar=0, numusuario=0, verdadero=1;
	string nom;
	cout << "Hola pobre, ¿como te llamas?" << endl;
	getline (cin,nom);
	cout << nom << " nombre de pobre..." << endl;
	cout << "En fin, nombre de pobre" << endl;
	cout << nom << " este programa hace que el usuario ingrese un número y comprobar si está en el array o no" << endl;
	cout << nom << " ingrese un número" << endl;
	cin >> numusuario;
	for (int i=0;i<=7;i++)
	{
		
		if (datos[i] == numusuario)
		{
			cout << nom << " el número que ha dicho está correcto y esta es su posición: " << i+1 << endl;
			verdadero = 0;
		}
	}
	if (verdadero == 1)
	{
		cout << nom << " su número no se encuentra en el vector" << endl;
	}
	cout << nom << " ¿quieres volver a iniciar el programa? (si 1 no 2)" << endl;
	cin >> retornar;
	if (retornar==1)
	{
		return main ();
	}

}
