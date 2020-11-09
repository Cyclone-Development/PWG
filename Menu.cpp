#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include "Menu.h"
#include "Input.h"
using namespace MenuNameSpace;
using namespace Input;


//Constructors
Menu::Menu(){
    std::cout << "MenuObject was created without a refrence" << std::endl;
    Input::InputHandler inputHandler;
};
Menu::Menu(InputHandler& InputHandler){

    std::cout<< "Menu Object was created and passed the refrence to the Inputhandler created in main" << std::endl;
    this->inputHandler = InputHandler;

};
//Destructor
Menu::~Menu(){
    std::cout<<"Menu Object Deleted"<<std::endl;
}

//Entry Menu Items
void Menu::DisplayWelcome() {
std::cout<<"\n########################################"<<std::endl;
std::cout<< "Welcome to the PWG (Password Generator)" << std::endl;
std::cout<<"########################################\n"<<std::endl;

};

void Menu::DisplayEntryMenu(){
std::cout << "Please Pick a Menu Option Below by Typing in the coresponding Key and pressing Enter\n" << std::endl;

std::cout<<"Create a new PassWord-| P or p \n" <<std::endl;

std::cout<<"Info on Passwords-----| I or i \n" <<std::endl;

std::cout<<"Help------------------| H or h \n" <<std::endl;

std::cout<<"Quit------------------| Q or q \n" <<std::endl;

std::cout<<"Please Enter an Option:";

std::string input;

std::getline(std::cin,input);

std::cout << input;






    
}



void Menu::DisplayPasswordMenu(){
std::cout<<"\n########################################\n"<<std::endl;
std::cout<<"             Password Menu"                << std::endl;
std::cout<<"\n########################################"<<std::endl;

std::cout<<"\nPlease start by entering a password length between 12 to 256"<<std::endl;

}
