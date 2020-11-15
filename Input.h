#ifndef INPUT_H
#define INPUT_H

<<<<<<< HEAD
#include <string>




=======
using std::string;
>>>>>>> d42e017... Got the Input class more fleshed out, its not done and still needs to be refactored. Also Instead of having the Menu class and Input class include eachother , the Menu class is now just static to avoid circular dependency
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

<<<<<<< HEAD
=======
private: 
    string MainMenuInput;
    string PassMenuInput;
    string InfoMenuInput;

    size_t passLength; //User desired password Length

    const string MMValidInputs ="pihqPIHQ"; //Valid Inputs for Main Menu
    const string PMValidInputs = "1234"; //Valid Inputs for Pass Menu
    const string IMValidInputs = "1234"; //Valid Inputs for Info Menu
>>>>>>> d42e017... Got the Input class more fleshed out, its not done and still needs to be refactored. Also Instead of having the Menu class and Input class include eachother , the Menu class is now just static to avoid circular dependency

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

<<<<<<< HEAD
  
        //Input Checks
        bool CheckMainInput(); //
        void PressEnterContinue(); //
        bool CheckPassLength();
        bool NumeralsOnly(string &);

        
        //Menu Allocater
        int MenuAllocater(std::string s);
    
      

    
=======
    
    //Getters
    string getMainInput() { return MainMenuInput; };
    string getPassInput() { return PassMenuInput; };
    string getInfoInput() { return InfoMenuInput; };


    string getMainValidInput() { return MMValidInputs; };
    string getPassValidInput() { return PMValidInputs; };
    string getInfoValidInput() { return IMValidInputs; };

    size_t ReturnPassLength() { return passLength; };
    
    //Setters
    void setMainInput(string MS) { MainMenuInput = MS; };
    void setPassInput(string PS) { PassMenuInput = PS; };
    void setInfoInput(string IS) { InfoMenuInput = IS; };
    void setPassLength(int PL) { passLength = static_cast<size_t>(PL); };
    
    //Menu Input Handlers
    void HandleMainInput();
    void HandlePassInput();
    void HandleInfoInput();
    
    //MenuAllocater
    void MenuAllocater(string &M_S);

    //Constructor and Destructor
    InputHandler();
    ~InputHandler();
>>>>>>> d42e017... Got the Input class more fleshed out, its not done and still needs to be refactored. Also Instead of having the Menu class and Input class include eachother , the Menu class is now just static to avoid circular dependency

        //Constructor and Destructor
        InputHandler();
        ~InputHandler();



    };


};
#endif 