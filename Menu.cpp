#include <iostream>
#include <string>
#include "Input.h"
#include "Menu.h"



using namespace MenuNameSpace;



//Constructor

Menu::Menu(Input::InputHandler &IH) {
     InputHandler = &IH;
};

//Destructor
Menu::~Menu() {
    

};


//Entry Menu Items
void Menu::DisplayWelcome() {
std::cout<<"########################################"<<std::endl;
std::cout<< "Welcome to the PWG (Password Generator)" << std::endl;
std::cout<<"########################################\n"<<std::endl;
std::cout << "\nCreated by Cyclone-Development :)\n" << std::endl;
};


void Menu::DisplayMainMenu(){

std::cout << "Please Pick a Menu Option Below by Typing in the coresponding Key and pressing Enter\n" << std::endl;

std::cout<<"Create a new PassWord-| P or p \n" <<std::endl;

std::cout<<"Info on Passwords-----| I or i \n" <<std::endl;

std::cout<<"Quit------------------| Q or q \n" <<std::endl;

std::cout<<"Please Enter an Option:";


if (InputHandler->CheckMainInput()) {

    if (InputHandler->MenuAllocater(InputHandler->getCheckedMainInput())  == 0) {
        Menu::DisplayPasswordMenu();
    }
    else if (InputHandler->MenuAllocater(InputHandler->getCheckedMainInput()) == 1) {
        Menu::DisplayInfoMenu();
   }
    else if (InputHandler->MenuAllocater(InputHandler->getCheckedMainInput()) == 2) {
        Menu::DisplayHelpMenu();
    }
    else {
        std::cout << "ERROR ERROR ERROR!";
        DisplayMainMenu();
    }

}
else {
    system("cls");
    DisplayMainMenu();
};
}


void Menu::DisplayPasswordMenu() {

    std::system("cls");
    std::cout << "########################################" << std::endl;
    std::cout << "             Password Menu" << std::endl;
    std::cout << "########################################\n" << std::endl;
    std::cout << "First before creating a password we will need some information!" << std::endl;
    std::cout << "Please Enter a Password Length from 12 to 256 : ";
    if (InputHandler->CheckPassLength()) {

    }
            
    

}
void MenuNameSpace::Menu::DisplayInfoMenu()
{
    std::cout << "Password Information is Important Bruh" << std::endl;

    InputHandler->PressEnterContinue();
};
void MenuNameSpace::Menu::DisplayHelpMenu()
{
    std::cout << "This is a help menu you little fucken bitch";
    system("pause");
};


