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
	int num1[10], retornar=0;
	string nom;
	cout << "Hola pobre, ¿como te llamas?" << endl;
	getline (cin,nom);
	cout << nom << " nombre de pobre..." << endl;
	cout << "En fin, nombre de pobre" << endl;
	cout << nom << " este programa te va a mostrar un vector que se va a llenar de 6 y te lo voy a mostrar" << endl;
	for (int i=0; i<=9; i++)
	{
		num1[i] = 6;
	}
	
	cout << "Ahora te mostraré todos los valores del vector" << endl;
	
	for (int i=0; i<=9; i++)
	{
		cout << i+1 << "° número= " << num1[i] << endl;
	}
	cout << nom << " ¿quieres volver a iniciar el programa? (si 1 no 2)" << endl;
	cin >> retornar;
	if (retornar==1)
	{
		return main ();
	}

}
