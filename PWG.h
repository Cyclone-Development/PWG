#pragma once

#include "Menu.h"
#include "Input.h"
#include "Generator.h"
#include "Exporter.h"

class PWG {

public:
	//Pointers to other Class Objects
	MenuNameSpace::Menu *Menu_Ptr;
	Generator *Generator_Ptr;
	

	bool Welcomed;



	PWG::PWG(MenuNameSpace::Menu* ptr_M, Generator* ptr_G);
		
	







};
