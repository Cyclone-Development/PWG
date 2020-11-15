#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include "Menu.h"
#include "Input.h"
using namespace MenuNameSpace;



//Constructors
Menu::Menu(){
    std::cout << "MenuObject Constructed" << std::endl;
    
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
std::cout << "Created by Cyclone-Development :)";
};



void Menu::DisplayMainMenu(){
std::cout << "Please Pick a Menu Option Below by Typing in the coresponding Key and pressing Enter\n" << std::endl;

std::cout<<"Create a new PassWord-| P or p \n" <<std::endl;

std::cout<<"Info on Passwords-----| I or i \n" <<std::endl;

std::cout<<"Quit------------------| Q or q \n" <<std::endl;

std::cout<<"Please Enter an Option:";

}



void Menu::DisplayPasswordMenu(){
std::cout<<"\n########################################\n"<<std::endl;
std::cout<<"             Password Menu"                << std::endl;
std::cout<<"\n########################################"<<std::endl;


std::cout << "Before we can create a password , we will need to gather some information first!" << std::endl;
std::cout<<"\nPlease start by entering a password length between 12 to 256"<<std::endl;

}
