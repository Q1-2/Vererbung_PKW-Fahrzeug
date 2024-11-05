#include "Fahrzeug.h" // Header der Basis-Klasse zuerst einfügen

#ifndef PKW_H
#define PKW_H 

// PKW ist eine abgeleitete Klasse (Kindklasse) von der Basisklasse Fahrzeug.
class PKW : public Fahrzeug { // PKW : (ist ein) Fahrzeug. Beachte: Jeder PKW ist ein Fahrzeug! Aber nicht jedes Fahrzeug ist ein PKW!

private:
	int anzahlTueren; //Spezialisierung der Klasse PKW

public:

	void setAnzahlTueren(int anzahlTueren)
	{
		this->anzahlTueren = anzahlTueren;
	}

	int getAnzahlTueren()
	{
		return anzahlTueren;
	}

};

#endif // PKW_H