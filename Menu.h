#ifndef MENU_H
#define MENU_H
#include "Input.h"
using namespace Input;
namespace MenuNameSpace
{
    
    class Menu{

        
        

        public:
        static void DisplayWelcome(); //Done
        static void DisplayPasswordMenu();
        static void DisplayMainMenu();
        static void DisplayInfoMenu();
        static void DisplayHelpMenu();

        
        Menu();
        ~Menu();
        
    };

};


#endif