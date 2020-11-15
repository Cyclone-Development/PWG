#ifndef _GENERATOR_H
#define _GENERATOR_H
#include <random>
<<<<<<< HEAD
#include "Exporter.h"
=======
>>>>>>> d42e017... Got the Input class more fleshed out, its not done and still needs to be refactored. Also Instead of having the Menu class and Input class include eachother , the Menu class is now just static to avoid circular dependency

using std::string;

class Generator {

private:

<<<<<<< HEAD
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
=======
	string Input; // Input first sanitized and handled from the Input Class 
	string CreatedPassWord; // Final Password
	
	bool LowerAlpha; // (a,b,c,d,e...)
	bool UpperAlpha;// (A,B,C,D,E...)
	bool NumeralDigits;//(0-9)
	bool SpecialSymbols;//(#,%,&,*...)
	bool IncludeSpace; //Whether to allow Spaces
public:


	Generator();
>>>>>>> d42e017... Got the Input class more fleshed out, its not done and still needs to be refactored. Also Instead of having the Menu class and Input class include eachother , the Menu class is now just static to avoid circular dependency
	~Generator();

};



#endif
