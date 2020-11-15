
#ifndef MENU_H
#define MENU_H
#include "Input.h"



namespace MenuNameSpace
{
    
    class Menu{

<<<<<<< HEAD
  
        
    

    public:
        Input::InputHandler* InputHandler;

       
        
        
        //Menu Displays
        void DisplayWelcome();
        void DisplayPasswordMenu();
        void DisplayMainMenu();
        void DisplayInfoMenu();
        void DisplayHelpMenu();
      

        
        Menu(Input::InputHandler &IH);
       
=======
        
        

        public:
        static void DisplayWelcome(); //Done
        static void DisplayPasswordMenu();
        static void DisplayMainMenu();
        static void DisplayInfoMenu();
        static void DisplayHelpMenu();

        
        Menu();
>>>>>>> d42e017... Got the Input class more fleshed out, its not done and still needs to be refactored. Also Instead of having the Menu class and Input class include eachother , the Menu class is now just static to avoid circular dependency
        ~Menu();
        
    };

};


#endif