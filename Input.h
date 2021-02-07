#ifndef INPUT_H
#define INPUT_H

#include <string>




namespace Input{
    using std::string;
    
    class InputHandler{

    private: 
        string CheckedMainMenuInput;
        
        string CheckedInfoMenuInput;

        size_t passLength; //User desired password Length
        bool passLengthChecked =false;
        const string MMValidInputs ="pihqPIHQ"; //Valid Inputs for Main Menu

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
       
         string getNumerals() { return Numerals;};
    
        //Setters
        void setCheckedMainInput(string &MS) { CheckedMainMenuInput = MS; };//good      
        void setCheckedInfoInput(string &IS) { CheckedInfoMenuInput = IS; };//good
        void setPassLength(size_t PL) { passLength = PL; };//good

  
        //Input Checks
        bool CheckMainInput(); //
        void PressEnterContinue(); //
        bool CheckPassLength();
        bool NumeralsOnly(string &);

        
        //Menu Allocater
        int MenuAllocater(std::string s);
    
      

    

        //Constructor and Destructor
        InputHandler();
        ~InputHandler();



    };


};
#endif 