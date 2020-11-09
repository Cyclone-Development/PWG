#ifndef INPUT_H
#define INPUT_H
#include "assert.h"
using namespace std;
namespace Input{

class InputHandler{

private: 
    string input;
    string password;
    size_t passLength;
    const string MMValidInputs ="pihqPIHQ"; //String of valid Inputs
    const string PMValidInputs = "1234";

public:
    

    bool MainMenuInput(string);
    void setInput(string);
    string getInput() {return input;};
    string getMainMenuInput(){return MMValidInputs;};
    string getPassMenuInput(){ return PMValidInputs;};

    string handlePassInput(string);
    size_t ReturnPassLength(){return passLength;};

    InputHandler();
    ~InputHandler();



};


};
#endif 