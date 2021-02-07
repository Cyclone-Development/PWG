#ifndef INPUT_H
#define INPUT_H

#include <iostream>
#include <string>





using std::string;

namespace Input{
    using std::string;
    
    class InputHandler {

    private:
        string CheckedMainMenuInput;

        string CheckedInfoMenuInput;

        size_t passLength; //User desired password Length
        bool passLengthChecked = false;
        const string MMValidInputs = "pihqPIHQ"; //Valid Inputs for Main Menu

        const string Numerals = "0123456789";



  

    public:
        //Main Menu Options
        enum MainMenuOptions {
            PassWordMenu,
            InfoMenu,
            HelpMenu
        };

        //Getters
        string getCheckedMainInput() { return CheckedMainMenuInput; }; //good      
        string getCheckedInfoInput() { return CheckedInfoMenuInput; }; //good


        string getMainValidInput() { return MMValidInputs; };//good     
       
        size_t ReturnPassLength() { return passLength; }; //Good
        bool ReturnPassChecked() { return passLengthChecked; };

        string getNumerals() { return Numerals; };

        //Setters
        void setCheckedMainInput(string& MS) { CheckedMainMenuInput = MS; };//good      
        void setCheckedInfoInput(string& IS) { CheckedInfoMenuInput = IS; };//good
        void setPassLength(size_t PL) { passLength = PL; };//good



        //Input Checks
        bool CheckMainInput(); //
        void PressEnterContinue(); //
        bool CheckPassLength();
        bool NumeralsOnly(string&);

        void HandlePassInput();


        void HandleInfoInput();

        //Menu Allocater
        int MenuAllocater(std::string s);



        InputHandler();
        ~InputHandler();




    };
};
#endif 