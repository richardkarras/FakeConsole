
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
    
	while (1)
	{
		// after this the room setup should be finished, and the passworded "console" will be available
		cout << "\nRoom setup: Enter booking name for password: "; // getting setup info to change the first password in the escape room to the Name of the booking
		
		getline(cin, password);

		for (pass_fail = 0; pass_fail < 100; pass_fail++)
		{
			cout << "\n";
		}
		
		//ASCII output of breakout logo
		cout << "\n vivvvrvvvrvrvrvrvrvrvrvrvvvrvrvrvrvvvrvrvrvrvrvrvrvrvrvrvrvrvrvrvvvrvrvrvrvrvrvrvrvrvrvrvrvrvrvrvrvrvrvrvrvrvrvrvvvvvrvrvrvrvrvvvvvrvvvvvvvrvrvrvrvvvr";
		cout << "\n ULJjYjJJYjJjYjYjJjYuYjYjYuYjYjJjYuYuYjJjYjYjYjYjJjJuJjYuJjYJJuYjJJJuYjYuJjJjYjYjJjJJYJLjJuJjJJYJLJYuJuYjYJYjYjYuJjJuYjYuJjYuYjYuJuJuYjJJYjJjJJJjYjYjYY";
		cout << "\n UYUuouUuouUuUuUuUuouUuUuouUuUuUuUuououououououUuUuUuouUuUuUuUuUuouououUuououououUuUuujjjoVNkkoouUuouUuUuouUuUuUuouUuUuouUuUuouUuUuUuUuUuUuUuououUuUuoj";
		cout << "\n jJuuuuuuuujujuuUjujuuujujuuUjuuujuuuuuuUjujujujUuUuujujUuUjuuujujuuujUjUjujuuujujuLLvLJuoIruXZFouuuuuujuuuuUjUjuuujuuujUjujujuuuuujuuujujuuujUjUjUjUjj";
		cout << "\n uLUjuuuuuJujujujuJujujujujuuujujujujuuujujujuuuuujuJujujuuuuujujujuJujuuuJuJujujuvvIOBBuS    ikXouujujujujujujuJujuJuJujujuuujuJuuuuujujujujujujujuuuY";
		cout << "\n jJjujujuJujujujujujuJuJujujujuuuJujujujuJujuuujujujujujuuuuujujuJuJujujuJujujuuuvjMBMBXJJ      ISojujujuJujuuUjujuJujujujujuuuuUjuuUjujuuujUuujuuujujj";
		cout << "\n uLuJJLYLYLJYuJuJuJuLYLYLJYJJuJujujJLJLYLYLJJuJuJuYYLJYujujujjLYLjJuJjLYLjJuuujuLYMBBZLLJokGEi   quuJuuuuUuoIkFSIIuUjujUuoUIUUjUuoUoUuuUUIoVoIoIUouUjuJ";
		cout << "\n jYJjYYLYLLvLvLJujuLjLYLYLLvvvYJuJJYJLLLYLJJjJujuLJYYYYYujujuYjLYYJYYvJLYjUJujujLjBBBvvJuuooGj   PSuujujUoNNqSSFqNNIojuUXPNqXoUUFXNNqIoIPqENZNZNEkkuUjj";
		cout << "\n ULjJBBBBBBBMGuLLuLuMBBBBBBBGSLLJYUBMBMBBBBBjJJuYYMBBBXvJujuvXBBBBjvvBMBBBUjjuJYrjBBMvvJjUoPOI   MNXuujoSNr       rNFUUXi    FIkr    Jqv          iXuuY";
		cout << "\n uJLuBBBBMMBBMBXLYYLBBBBBBBBBBBJLvoMBBBBBBBBuYuJLuBBBBBvJjujLkBBBBJrNBBBBVLjuYjYvLBBMvvLjUJvVv   VuvVUuVP           PFVN     kFPr    YOi           Pujj";
		cout << "\n uLJYBBBBUijBBBBJYLYMBMBFrLBBBBOvLuBBBBorLvYJuJjvNBBMBBUvujuvkBBBBvuBBBBVvYujLSBBBBBBMBBjVv         uVuNi    uZu    iNoN     qFNr    uqovIL    iVLJVuuY";
		cout << "\n uLLJBBMBUirMMBBILYLBBBBSrrqBMBBYvuMBMBUvLJJuJuLLMBMBMBNvYuJLFBMBMvOBBBPvYuuuLkMBBBMBBBMBqOi        VoFX    iMNMi    kXN     Xkqv    JqoPGX    vBPFuUjj";
		cout << "\n ULYLBBBBIiVBBBOvJLJBBMBIirOBBMOvvuBBBBUivLuJuJLoBBMXBBBvJjuvSBBMMEBMBqvLjJuJjvviNBMMBBMFv       uBGFIVk    iZVZi    kkE     qFNr    uSUuXu    rNojuuuL";
		cout << "\n jLLJBBMBBBBBGUrLYYLBBBMOPMBBBBjLvuBBMBOOBELujjvGBBGYBBBVvjJLSBMMMBMBMYrjjuJuLVMOMBMBBovv           oIFk    iNVNi    kPN     XSPv    jPuuSo    iEuuuujj";
		cout << "\n uLJYBMBBMMBMMEuvjLYBBMBMBMBMkvvJLuBBMMBBBMLJuvjMBBNrBMBZvJjvkMBMBBBMBGvLuuujYIBOBBMMBNvSr        iioVVX    iNIZi    XkZ     qVNr    ukUjXu    rqUjujuY";
		cout << "\n jYLjBBMBuiYBBBBFvYLBMBBoSBBBLrYuvUBBMBILuuYuJvkBBBuiEBBBLLYLSBMMMXZBBBFvYujuJLrrqBMBBBPUP       rOFSuSX    iNFNi    SPN     Pkqv    jPuukU    iEuuuuJj";
		cout << "\n ULYYBBBMSrrPBBBOLLYBBMBULMBBMvJjLjBBBBIrLYujJvMBBBNIMBBMXvjvkBBBBruMBBBLLjuJLSBBBMBMBMjLi          UVIX    iEIZi    kSE     NFNr    uSUuXu    rNojuuuJ";
		cout << "\n uYLJMBBBVrrNBBMMvLLBBMBkiMBBMSvjvuMBMBUrLYYjvuBBMBBBBBMBOLLvFBMBMLrOMBMGvjjuLUqkOBMMMBMBMMNr    iFYFuFk    iGXOi    SSNi    NNZv    ukuUSo    iNuujujj";
		cout << "\n ULYYBBBBVrUMBMBXLLJBBMBSrIBBBMLvLuBBBBorLLJLvPBMBGYLoBBMBjLvSBBBBLrjBBBMFvujjLYvZBBMMBBBMji     iJLVIUN     GMZ     NUNr    XMBi    qouuPu    rqojujuL";
		cout << "\n uLLuMBBBBBBBBBGYLYYBBBBqrLMBBBZvvIBBBBMBBBBJvBBBBXrvvBBBBGvvXBBBBuvvEBBBBJLuvXBBBBBBBBOvo          oIoFI           VSUVP           vXUuuSu    iNuujuJJ";
		cout << "\n uLjjBBBMBBBOZUvLjLuBBMBkLvNBBBBuLuBBMMBMBMBLVBBBBuLYvPBMBMJvXBBBBuYvuMBMBNJJYVBMBMMMBBMLFr  i i    oVjoPF         FXUjoFPi        LNIuuukY    iXUjuuuJ";
		cout << "\n uYjJLLvLvLvLvLLuJuLLvLLJJjLLvLLjYjLLvvvLvLLJLJvLvJJjJLvLvjJjLLvLLJjjLLvLLuYuJJLLvLvLvLLjuSNENZNZNEXIuujoSZSjvvvuSZSojuuoFZkuvvrLoEXIuujuuVuVoooojuuujJ";
		cout << "\n uLujjYjYjLjJjJujujuJjYjJujuYjYjJuJjLjLjYjYjJuYjYuJujuJjYjYujuYjYjJujuJJYuYujuJJYjLJYJLujuuUUouoUouUuuuuuouSXNPNkSUojujuuuUFkNPNXkoouujUjUUSSkVIuUjujuY";
		cout << "\n uYuUuujUjUuUuUuUuUuuuujUuuuUjUuUjUjUjuuUjUjUuuuuuUjUjuuuuUjUjUuUuUuUuujuuUuuuUuUuujUjujujUuuuUuUuUuUuUuUjUuUuouUuuuUuUjUuUuUuououUuujUuUuUuUuUuUjUjUju";
		cout << "\n ovYLYLJLJLJLYLJLJLYLJLJLJLYLJLJLYLJLYLYLJLJLJLYLYLYLYLJLYLJLYLYLYLJLJLJLYLYLJLJLYLJLYLYLYLYLJLJLJLYLJLJLJLJLYLJLJLJLYLYLJLYLYLJLJLJLJLYLJLJLYLYLYLYYJv";
		do
		{
			
			for (pass_fail = 1,user_pass = "default"; user_pass != password; pass_fail++)
			{
				cout << "\nSystem locked.  Enter password:  ";
				
				getline(cin, user_pass);
				
				if (user_pass == "e x i t")
					break;
				
				cout << "\n\nPassword has been entered incorrectly " << pass_fail << " times.";
				
			}
			if (user_pass == password)
				console();
		} while (user_pass != "e x i t");
	}

    return 0;
    
}

void console()
{
    //Variables
    string con_input;
    int loop_count;
    
    for (loop_count = 0;loop_count <100;loop_count++)
    {
		cout << "\n";
    }
    cout << "\nFor command list type 'help' \n"; // To list the possible inputs, all non-listed inputs will result in an error message.
        
    for (loop_count = 0;loop_count < 50;loop_count++)
    {
		cout << "~"; // Linux/Unix style command shell, since Unix is older than DOS, but quite similar in useage - could be changed to C:\ or other drive letter as necessary.
		getline (cin,con_input);
        
        if (con_input == "help")
			cout << "\n ls for directory listing \n cd for change directory \n write <file name> to print text to screen \n"; // Leading info for users to work with unfamiliar commands.
        else if (con_input == "ls")
            cout << " \n Directory listing: \n secdoc.txt \n 1 file, 0 folders \n "; // Output "directory listing" to allow participants to attempt to open the photo clue.
		else if (con_input == "write secdoc.txt")
			graphic_display();
			return;
    }
    return;
}

void graphic_display()
{
    cout << "output file";
        
    return;
}