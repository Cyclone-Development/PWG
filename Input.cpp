#include <iostream>
#include <vector>
#include <string>
#include "Menu.h"
#include "Input.h"
using namespace Input;
using namespace MenuNameSpace;

//Constructor
 InputHandler::InputHandler(){
        
    }

//Destructor
 InputHandler::~InputHandler(){
     
 }


bool InputHandler::MainMenuInput(string MainMenuInput){

   std::size_t found = MainMenuInput.find_first_not_of(getMainMenuInput());
   if (found!=std::string::npos)
  {
     std::cout<<"Unacceptable answer" << std::endl;
     return false;
  }
  else{

      return true;
  }

    
    
    
}

   


