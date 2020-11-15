#include <iostream>
#include <string>
<<<<<<< HEAD


#include "PWG.h"
#include "Input.h"
#include "Menu.h"
#include "Generator.h"
#include "Exporter.h"

using std::cout;
using std::cin;
using std::endl;
using namespace MenuNameSpace;




int main()
{
   

    Input::InputHandler IH;
    Menu Menu(IH);
    Exporter Exporter;
    Generator Generator(Exporter);

    PWG PWG(&Menu, &Generator);
=======
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

>>>>>>> d42e017... Got the Input class more fleshed out, its not done and still needs to be refactored. Also Instead of having the Menu class and Input class include eachother , the Menu class is now just static to avoid circular dependency

};


};

   
<<<<<<< HEAD
PWG::PWG(MenuNameSpace::Menu* ptr_M, Generator* ptr_G)
    : Menu_Ptr(ptr_M), Generator_Ptr(ptr_G), Welcomed(0)
{
    Menu_Ptr->DisplayWelcome();
    Welcomed = true;
    if (Welcomed) {
        Menu_Ptr->DisplayMainMenu();
    }
};
=======
>>>>>>> d42e017... Got the Input class more fleshed out, its not done and still needs to be refactored. Also Instead of having the Menu class and Input class include eachother , the Menu class is now just static to avoid circular dependency
