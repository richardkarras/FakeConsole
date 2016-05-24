#define _GLIBCXX_FULLY_DYNAMIC_STRING 1
#undef _GLIBCXX_DEBUG
#undef _GLIBCXX_DEBUG_PEDANTIC

#include <stdio.h>
#include <string>
#include <sstream>
#include "console.h"
#include "simpio.h"

using namespace std;
void console();
void graphic_display();

int main()
{
    // This is to emulate a console interface, ask for a password to load a file, and display a picture.
    
    //Variables
    string password; // password, required to start console, will be hinted to in audio message
    string user_pass; // storage for the password query
    int pass_fail;
    
    cout << "Room setup: Enter booking name for password: "; // getting setup info to change the first password in the escape room to the Name of the booking
    getline (cin,password);
    
    for (pass_fail = 0; pass_fail < 100; pass_fail++)
    {
        cout << "\n";
    }
    
    // after this the room setup should be finished, and the passworded "console" will be available
    
    for (pass_fail = 0; user_pass != password; pass_fail++)
    {
        cout << "\nSystem locked.  Enter password:  ";
        getline (cin,user_pass);
        cout << "\n\nPassword has been entered incorrectly " << pass_fail << " times.";
    }
    console();
    
    return 0;
    
}

void console()
{
    //Variables
    string con_input;
    int loop_count;
    
    for (loop_count = 0;loop_count <100;loop_count++)
    {
        cout << "\n"
    }
    cout << "\nFor command list type 'help' \n"; // To list the possible inputs, all non-listed inputs will result in an error message.
    cout << "~"; // Linux/Unix style command shell, since Unix is older than DOS, but quite similar in useage - could be changed to C:\ or other drive letter as necessary.
    
    for (loop_count = 0;loop_count < 50;loop_count++)
    {
        getline (cin,con_input);
        
        if (con_input == "help")
            cout << "\n ls for directory listing \n cd for change directory \n display <file name> to show image \n"; // Leading info for users to work with unfamiliar commands.
        else if (con_input == "ls")
            cout << " \n Directory listing: \n secdoc.png \n 1 file, 0 folders \n "; // Output "directory listing" to allow participants to attempt to open the photo clue.
        else if (con_input == "display secdoc.png")
            graphic_display(); // Call graphic diaplay function
    }
    return;
}

void graphic_display()
{
    cout << "graphic_script.sh";
    system("graphic_script.sh"); // call feh script for file viewing
    
    return;
}