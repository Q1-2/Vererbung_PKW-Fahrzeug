#include "Fahrzeug.h"

void Fahrzeug::setLeistung(int dieLeistung)
{
	if (dieLeistung < 65 || dieLeistung > 400)
	{
		cout << "Fehler - keine Zuweisung" << endl;
		leistung = 0;
	}
	else leistung = dieLeistung;
}

void Fahrzeug::setHersteller(string derHersteller)
{
	int laenge = derHersteller.length();
	if (laenge < 1 || laenge > 10) cout << "Keine Zuweisung!\n";
	else hersteller = derHersteller;
}

int Fahrzeug::getLeistung()
{
	return leistung;
}

const string Fahrzeug::getHersteller()
{
	return hersteller;
}

void Fahrzeug::tune(int tuneWert)
{
	leistung = tuneWert + leistung;
}

int Fahrzeug::getAnzahlObjekte()
{
	return anzahl;
}

Fahrzeug::Fahrzeug()
{
	leistung = 65;
	hersteller = "leer";

	anzahl++;
	cout << "Standardkonstruktor (Anzahl Fahrzeuge: " << anzahl << " )" << endl;
	cout << "Adresse des Fahrzeug-Objektes " << this << endl;
	cout << endl;
}


Fahrzeug::Fahrzeug(int dieLeistung, string derHersteller)
{
	setLeistung(dieLeistung);
	hersteller = derHersteller;

	anzahl++;
	cout << "Parameterkonstruktor (Anzahl Fahrzeuge: " << anzahl << " )" << endl;
	cout << "Adresse des Fahrzeug-Objektes " << this << endl;
	cout << endl;
}



Fahrzeug::~Fahrzeug()
{
	anzahl--;
	cout << "Destruktor (Anzahl Fahrzeuge: " << anzahl << " )" << endl;
	cout << "Adresse des Objektes " << this << endl;
	cout << endl;
}

