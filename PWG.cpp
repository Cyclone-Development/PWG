#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

#include "Input.h"
#include "Menu.h"

using namespace std;
using namespace MenuNameSpace;

int main()
{
    //TODO Structure The individual Classes : Menu , Input , Generator etc | So that they are all called from a single object created in main 
    //TODO Make the Menu Object Pass all Input to the Input Handler for sanitation and error checking. 
    //TODO Start Building out the Generator class, Must be truely random , Must Return its level of entropy with the generated password, 
    //TODO Dont use multiple classes for things , I.e : 1-MenuClass instead of MainMenuClass and Password Menu Class etc .


    //Main Class Objects
    Input::InputHandler InputHandler;
    Menu::DisplayMainMenu();
    InputHandler.HandleMainInput();


};

   
