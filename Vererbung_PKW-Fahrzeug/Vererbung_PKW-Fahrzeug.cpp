#include <iostream>
#include "Fahrzeug.h" // Basisklasse zuerst!
#include "PKW.h"
//class PKW; // Vorwärtsdeklaration nicht immer möglich! Siehe Kommentar unten.

using namespace std;

int Fahrzeug::anzahl = 0;

int main()
{
	//Fahrzeug f;
	//f.setHersteller("Hundai");
	//cout << f.getHersteller()<< endl;


	PKW meins;//, deins;

	meins.setHersteller("Opel");
	cout << meins.getHersteller() << endl;
	meins.setAnzahlTueren(5); //f.setAnzahlTueren(5) gibt es nicht, da ...

	//LKW deine;

	return 0;
}

/*
Eine Vorwärtsdeklaration wie class PKW; informiert den Compiler, dass eine Klasse mit dem Namen PKW existiert. 
Du kannst jedoch nur Zeiger oder Referenzen auf diese Klasse verwenden, bevor sie vollständig definiert ist. 
Wenn Du versuchst, ein Objekt der Klasse PKW zu erstellen, bevor die Klasse vollständig definiert ist, wird der Compiler einen Fehler ausgeben.
*/
