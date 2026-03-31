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
	int num1[4], retornar=0;
	string nom;
	cout << "Hola pobre, ¿como te llamas?" << endl;
	getline (cin,nom);
	cout << nom << " nombre de pobre..." << endl;
	cout << "En fin, nombre de pobre" << endl;
	cout << nom << " este programa indica los valores que vas a ingresar y luego los muestra en pantalla como los pusistes en órden" << endl;
	for (int i=0; i<= 4; i++)
	{
		cout << nom << " ingrese el " << i+1 << "° número" << endl;
		cin >> num1[i];
	}
	for (int i=0; i<= 4; i++)
	{
		cout << nom << " valor " << i+1 << "° = " << num1[i] << endl;
	}
	cout << nom << " ¿quieres volver a iniciar el programa? (si 1 no 2)" << endl;
	cin >> retornar;
	if (retornar==1)
	{
		return main ();
	}
}
