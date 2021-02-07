
#ifndef MENU_H
#define MENU_H
#include "Input.h"



namespace MenuNameSpace
{
    
    class Menu{

  
        
    

    public:
        Input::InputHandler* InputHandler;

       
        
        
        //Menu Displays
        void DisplayWelcome();
        void DisplayPasswordMenu();
        void DisplayMainMenu();
        void DisplayInfoMenu();
        void DisplayHelpMenu();
      

        
        Menu(Input::InputHandler &IH);
       
        ~Menu();
        
    };

};


#endif