#include <string>
#include <iostream>
#include "Generator.h"
#include "Menu.h"
#include "Input.h"








Generator::Generator(Exporter &Ex)
{
	Gen_Exporter = &Ex;
	InitializeCharacters();
}

Generator::~Generator()
{
}


/*
	The users input as to what characters to use will 
*/

int characters[96]{0};// this array will start empty.

void Generator::InitializeCharacters() {
	
		for (int i = 32; i < 127; i++) {
			int j = i - 32;
			characters[j] = i;
		}
	
}

void Generator::PrintCharacters()
{
	for (int i = 0; i < 95; i++) {
		std::cout << static_cast<char>(characters[i]);
	}

}

