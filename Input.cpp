#include "Input.h"
#include <iostream>
#include <locale>
#include "Menu.h"
#include <cstdlib>


using namespace Input;


//Constructor
InputHandler::InputHandler() :passLength{ 0 }, passLengthChecked{ false } {
        
    }

//Destructor
 InputHandler::~InputHandler(){
     
 }


bool InputHandler::CheckMainInput(){
   std::string Temp_M_S;
   getline(std::cin,Temp_M_S );
   std::size_t found = Temp_M_S.find_first_not_of(getMainValidInput());
    if (found!=std::string::npos)
    {
        return false;
    }
    else if (Temp_M_S.length() > 1 || Temp_M_S.length() < 1) {    
        return false;
    }
  else{
        setCheckedMainInput(Temp_M_S);
        return true;
  }
}



void InputHandler::PressEnterContinue()
{
    std::cout << "\nPress Enter to continue";
    fgetc(stdin);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}



bool Input::InputHandler::CheckPassLength()
{
    string Temp_P_L;
    getline(std::cin, Temp_P_L);

   
    int num;
    bool numInit = false ;
    if (NumeralsOnly(Temp_P_L)) {
        
        num = std::stoi(Temp_P_L);
        numInit = true;
    }
    else {
        std::cout << "Only Enter Numeral Characters With NO Spaces!" << std::endl;
        CheckPassLength();
    }
   
    if(numInit){
        if (num> 256 || num < 12) {
         
            std::cout << "Please Only Enter A Number From 12 - 256" << std::endl;
            CheckPassLength();
        }
        else {
         
            return true;
        }

    }
    
    
  
   
}

bool Input::InputHandler::NumeralsOnly(string& Temp_P_L)
{
    std::size_t found = Temp_P_L.find_first_not_of(getNumerals());
    if (found != string::npos)
    {

        return false;

    }
    else {
        return true;
    }
}


  

int InputHandler::MenuAllocater(std::string s)
{

    if (s.find_first_of(getMainValidInput()) != std::string::npos) {
        if (s[0] == 'p' || s[0] == 'P') {
            return MainMenuOptions::PassWordMenu;
        }
        else if (s[0] == 'i' || s[0] == 'I') {
            return MainMenuOptions::InfoMenu;
        }
        else if (s[0] == 'h' || s[0] == 'H') {
            return MainMenuOptions::HelpMenu;
        }
        else {
            std::cout << "Error!";
            return 0;
        }
    
    }
    return 0;
}
   
