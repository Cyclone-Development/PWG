#ifndef INPUT_H
#define INPUT_H

using std::string;
namespace Input{

class InputHandler{

private: 
    string MainMenuInput;
    string PassMenuInput;
    string InfoMenuInput;

    size_t passLength; //User desired password Length

    const string MMValidInputs ="pihqPIHQ"; //Valid Inputs for Main Menu
    const string PMValidInputs = "1234"; //Valid Inputs for Pass Menu
    const string IMValidInputs = "1234"; //Valid Inputs for Info Menu

public:
    

    
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



};


};
#endif 