// #pragma once
#include <iostream>
#include <string>
using namespace std;

#ifndef FAHRZEUG_H
#define FAHRZEUG_H 


class Fahrzeug
{
private:
	int leistung;
	string hersteller;
	static int anzahl;

public:
	void setLeistung(int);
	void setHersteller(string);

	int getLeistung();
	const string getHersteller();

	static int getAnzahlObjekte();

	void tune(int);
	Fahrzeug();
	Fahrzeug(int, string);

	~Fahrzeug();
};

#endif // FAHRZEUG_H