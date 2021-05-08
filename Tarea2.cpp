#include <iostream>
#include <time.h>
#include <stdlib.h> 
using namespace std;

int main() {
	int a, b, temp, puntaje1 = 0, puntaje2 = 0;
	char Equipo[30];
	srand(time(NULL));
	cout << "Ingrese su equipo: ";cin.getline(Equipo, 30, '\n');
	cout << "Partidos restantes: ";cin >> temp;

	for (int i = 1; i <= temp; i++)
	{
		a = 0 + rand() % (100);
		b = 0 + rand() % (100);

		if (a == b)
		{
			puntaje1++;puntaje2++;
		}
		else if (a < b)
		{
			puntaje1 += 0;
			puntaje2 += 3;

		}
		else
		{
			puntaje1 += 3;
			puntaje2 += 0;
		}

	}

	cout << "\n Puntaje de su equipo " << Equipo << " Fue de: " << puntaje1;

	cout << "\n\n Puntaje del equipo contrario: " << puntaje2 << endl;

	if (puntaje1 == puntaje2)
	{
		cout << "\nHubo un empate de puntuaje";
	}
	else if (puntaje1 > puntaje2)
	{
		cout << "\nSu equipo " << Equipo << " su equipo es el Ganador";
	}
	else
	{
		cout << "\nSu equipo " <<  Equipo << " su equipo ha perdido ";
	}



	return 0;
}
