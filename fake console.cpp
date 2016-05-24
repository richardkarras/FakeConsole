#include <stdio.h>
#include <iostream>
#include <console>

using namespace std;

void main()
(
	// This is to emulate a console interface, ask for a password to load a file, and display a picture.

	//Variables
	char16_t password; // password, required to start console, will be hinted to in audio message
	char16_t user_pass = not the password; // storage for the password query
	int pass_fail; intializing 

	cout << "Room setup: Enter booking name for password: "; // getting setup info to change the first password in the escape room to the Name of the booking
	cin >> password;
	clrscr();
	// after this the room setup should be finished, and the passworded "console" will be available

	for (pass_fail = 0; user_pass != password; pass_fail++;)
		(
	cout << "System locked.  Enter password:  ";
	cin >> user_pass;
	cout << "Password has been entered incorrectly " pass_fail " times.";
	)
		console();

	return;
	
)

	void console()
{
	//Variables
	char16_t con_input;

	cout << "For command list type "help"\n"; // To list the possible inputs, all non-listed inputs will result in an error message.
	cout << "bash~"; // Linux/Unix style command shell, since Unix is older than DOS, but quite similar in useage - could be changed to C:\ or other drive letter as necessary.
	cin >> con_input;

	if (con_input == "help")
		cout << "\n ls for directory listing \n cd for change directory \n display <file name> to show image \n"; // Leading info for users to work with unfamiliar commands.
	else if (con_input == "ls")
		cout << "\n Directory listing: \Root \n DocSec~1.png \n 1 file, 0 folders \n"; // Output "directory listing" to allow participants to attempt to open the photo clue.
	else if (con_input == "display DocSec~1.png")
		graphic_diaplay(); // Call graphic diaplay function
	return;
}

	void graphic_display()
{
	system(graphic_script.sh); // call feh script for file viewing

	return;
}