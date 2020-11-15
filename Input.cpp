#include <iostream>
#include <vector>
#include <string>
#include "Input.h"
#include "Menu.h"
using namespace Input;

//Constructor
InputHandler::InputHandler() :passLength{ 0 } {
     std::cout << "InputHandler Constructed" << std::endl;
    
        
    }

//Destructor
 InputHandler::~InputHandler(){
     
 }


void InputHandler::HandleMainInput(){
   string Temp_M_S;
   getline(std::cin,Temp_M_S );
   std::size_t found = Temp_M_S.find_first_not_of(getMainValidInput());
    if (found!=std::string::npos)
    {
        std::cout<<"\nUnacceptable answer Please Try Entering a Valid Input" << std::endl;
        MenuNameSpace::Menu::DisplayMainMenu();
        HandleMainInput();
    }
  else{

        MenuAllocater(Temp_M_S);
  }

}

void InputHandler::HandlePassInput()
{
    string Temp_P_S;
    getline(std::cin, Temp_P_S);
    std::size_t found = Temp_P_S.find_first_not_of(getPassValidInput());
    if (found != std::string::npos)
    {
        std::cout << "\nUnacceptable answer Please Try Entering a Valid Input" << std::endl;
        MenuNameSpace::Menu::DisplayMainMenu();
        HandleMainInput();
    }
    else {

        MenuAllocater(Temp_P_S);
    }

}

void InputHandler::HandleInfoInput()
{
    string Temp_I_S;
    getline(std::cin, Temp_I_S);
    std::size_t found = Temp_I_S.find_first_not_of(getMainValidInput());
    if (found != std::string::npos)
    {
        std::cout << "\nUnacceptable answer Please Try Entering a Valid Input" << std::endl;
        MenuNameSpace::Menu::DisplayMainMenu();
        HandleMainInput();
    }
    else {

        MenuAllocater(Temp_I_S);
    }
}

void InputHandler::MenuAllocater(string &M_S)
{

    


    char foo = M_S[0];
    std::cout << foo;
    std::cin >> foo;

}


   


