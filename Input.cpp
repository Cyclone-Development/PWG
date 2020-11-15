#include "Input.h"
#include <iostream>
<<<<<<< HEAD
#include <locale>
#include "Menu.h"
#include <cstdlib>


using namespace Input;


//Constructor
InputHandler::InputHandler() :passLength{ 0 }, passLengthChecked{ false } {
=======
#include <vector>
#include <string>
#include "Input.h"
#include "Menu.h"
using namespace Input;

//Constructor
InputHandler::InputHandler() :passLength{ 0 } {
     std::cout << "InputHandler Constructed" << std::endl;
    
>>>>>>> d42e017... Got the Input class more fleshed out, its not done and still needs to be refactored. Also Instead of having the Menu class and Input class include eachother , the Menu class is now just static to avoid circular dependency
        
    }

//Destructor
 InputHandler::~InputHandler(){
     
 }


<<<<<<< HEAD
bool InputHandler::CheckMainInput(){
   std::string Temp_M_S;
=======
void InputHandler::HandleMainInput(){
   string Temp_M_S;
>>>>>>> d42e017... Got the Input class more fleshed out, its not done and still needs to be refactored. Also Instead of having the Menu class and Input class include eachother , the Menu class is now just static to avoid circular dependency
   getline(std::cin,Temp_M_S );
   std::size_t found = Temp_M_S.find_first_not_of(getMainValidInput());
    if (found!=std::string::npos)
    {
<<<<<<< HEAD
        return false;
    }
    else if (Temp_M_S.length() > 1 || Temp_M_S.length() < 1) {    
        return false;
    }
  else{
        setCheckedMainInput(Temp_M_S);
        return true;
=======
        std::cout<<"\nUnacceptable answer Please Try Entering a Valid Input" << std::endl;
        MenuNameSpace::Menu::DisplayMainMenu();
        HandleMainInput();
    }
  else{

        MenuAllocater(Temp_M_S);
>>>>>>> d42e017... Got the Input class more fleshed out, its not done and still needs to be refactored. Also Instead of having the Menu class and Input class include eachother , the Menu class is now just static to avoid circular dependency
  }
}

<<<<<<< HEAD


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
=======
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


   
>>>>>>> d42e017... Got the Input class more fleshed out, its not done and still needs to be refactored. Also Instead of having the Menu class and Input class include eachother , the Menu class is now just static to avoid circular dependency

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
   
