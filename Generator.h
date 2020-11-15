#ifndef _GENERATOR_H
#define _GENERATOR_H
#include <random>

using std::string;

class Generator {

private:

	string Input; // Input first sanitized and handled from the Input Class 
	string CreatedPassWord; // Final Password
	
	bool LowerAlpha; // (a,b,c,d,e...)
	bool UpperAlpha;// (A,B,C,D,E...)
	bool NumeralDigits;//(0-9)
	bool SpecialSymbols;//(#,%,&,*...)
	bool IncludeSpace; //Whether to allow Spaces
public:


	Generator();
	~Generator();

};



#endif
