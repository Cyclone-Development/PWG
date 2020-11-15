#include <iostream>
#include <string>
#include "Input.h"
#include "Menu.h"



using namespace MenuNameSpace;



//Constructors
<<<<<<< HEAD

Menu::Menu(Input::InputHandler &IH) {
     InputHandler = &IH;
};

//Destructor
Menu::~Menu() {
    

};

=======
Menu::Menu(){
    std::cout << "MenuObject Constructed" << std::endl;
    
};

//Destructor
Menu::~Menu(){
    std::cout<<"Menu Object Deleted"<<std::endl;
}
>>>>>>> d42e017... Got the Input class more fleshed out, its not done and still needs to be refactored. Also Instead of having the Menu class and Input class include eachother , the Menu class is now just static to avoid circular dependency

//Entry Menu Items
void Menu::DisplayWelcome() {
std::cout<<"########################################"<<std::endl;
std::cout<< "Welcome to the PWG (Password Generator)" << std::endl;
std::cout<<"########################################\n"<<std::endl;
<<<<<<< HEAD
std::cout << "\nCreated by Cyclone-Development :)\n" << std::endl;
};

void Menu::DisplayMainMenu(){
 
    std::cout << "########################################" << std::endl;
    std::cout << "                 Main Menu                " << std::endl;
    std::cout << "########################################\n" << std::endl;

=======
std::cout << "Created by Cyclone-Development :)";
};



void Menu::DisplayMainMenu(){
>>>>>>> d42e017... Got the Input class more fleshed out, its not done and still needs to be refactored. Also Instead of having the Menu class and Input class include eachother , the Menu class is now just static to avoid circular dependency
std::cout << "Please Pick a Menu Option Below by Typing in the coresponding Key and pressing Enter\n" << std::endl;

std::cout<<"Create a new PassWord-| P or p \n" <<std::endl;

std::cout<<"Info on Passwords-----| I or i \n" <<std::endl;

std::cout<<"Quit------------------| Q or q \n" <<std::endl;

std::cout<<"Please Enter an Option:";

<<<<<<< HEAD
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
            
    
=======
>>>>>>> d42e017... Got the Input class more fleshed out, its not done and still needs to be refactored. Also Instead of having the Menu class and Input class include eachother , the Menu class is now just static to avoid circular dependency
}
void MenuNameSpace::Menu::DisplayInfoMenu()
{
    std::cout << "Password Information is Important Bruh" << std::endl;

<<<<<<< HEAD
    InputHandler->PressEnterContinue();
};
void MenuNameSpace::Menu::DisplayHelpMenu()
{
    std::cout << "This is a help menu you little fucken bitch";
    system("pause");
=======


void Menu::DisplayPasswordMenu(){
std::cout<<"\n########################################\n"<<std::endl;
std::cout<<"             Password Menu"                << std::endl;
std::cout<<"\n########################################"<<std::endl;


std::cout << "Before we can create a password , we will need to gather some information first!" << std::endl;
std::cout<<"\nPlease start by entering a password length between 12 to 256"<<std::endl;

>>>>>>> d42e017... Got the Input class more fleshed out, its not done and still needs to be refactored. Also Instead of having the Menu class and Input class include eachother , the Menu class is now just static to avoid circular dependency
}
