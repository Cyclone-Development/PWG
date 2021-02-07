#include <iostream>
#include <string>


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



};

   
PWG::PWG(MenuNameSpace::Menu* ptr_M, Generator* ptr_G)
    : Menu_Ptr(ptr_M), Generator_Ptr(ptr_G), Welcomed(0)
{
    Menu_Ptr->DisplayWelcome();
    Welcomed = true;
    if (Welcomed) {
        Menu_Ptr->DisplayMainMenu();
    }
};