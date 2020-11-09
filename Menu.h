#ifndef MENU_H
#define MENU_H
#include "Input.h"
using namespace Input;
namespace MenuNameSpace
{
    
    class Menu{

        private:
        InputHandler inputHandler;

        public: 
        void DisplayWelcome();
        void DisplayPasswordMenu();
        void DisplayEntryMenu();

        Menu(InputHandler &InputHandler);
        Menu();
        ~Menu();
        
    };

};


#endif