#ifndef _GENERATOR_H
#define _GENERATOR_H
#include <random>
#include "Exporter.h"

using std::string;

class Generator {

private:

	Exporter* Gen_Exporter;

	string Input; // Input first sanitized and handled from the Input Class 
	string CreatedPassWord; // Final Password
	
	bool isLowerAlpha; // (a,b,c,d,e...)
	bool isUpperAlpha;// (A,B,C,D,E...)
	bool isNumeralDigits;//(0-9)
	bool isSpecialSymbols;//(#,%,&,*...)
	bool isIncludeSpace; //Whether to allow Spaces

	

	

public:

	int characters[96];

	void InitializeCharacters();


	void PrintCharacters();

	Generator(Exporter &Ex);
	~Generator();

};



#endif
