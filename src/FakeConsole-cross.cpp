
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
		cout << "\n vivvvrvvvrvrvrvrvrvrvrvrvvvrvrvrvrvvvrvrvrvrvrvrvrvrvrvrvrvrvrvrvvvrvrvrvrvrvrvrvrvrvrvrvrvrvrvrvrvrvrvrvrvrvrvrvvvvvrvrvrvrvrvvvvvrvvvvvvvrvrvrvrvvvr" << endl;
		cout << " ULJjYjJJYjJjYjYjJjYuYjYjYuYjYjJjYuYuYjJjYjYjYjYjJjJuJjYuJjYJJuYjJJJuYjYuJjJjYjYjJjJJYJLjJuJjJJYJLJYuJuYjYJYjYjYuJjJuYjYuJjYuYjYuJuJuYjJJYjJjJJJjYjYjYY" << endl;
		cout << " UYUuouUuouUuUuUuUuouUuUuouUuUuUuUuououououououUuUuUuouUuUuUuUuUuouououUuououououUuUuujjjoVNkkoouUuouUuUuouUuUuUuouUuUuouUuUuouUuUuUuUuUuUuUuououUuUuoj" << endl;
		cout << " jJuuuuuuuujujuuUjujuuujujuuUjuuujuuuuuuUjujujujUuUuujujUuUjuuujujuuujUjUjujuuujujuLLvLJuoIruXZFouuuuuujuuuuUjUjuuujuuujUjujujuuuuujuuujujuuujUjUjUjUjj" << endl;
		cout << " uLUjuuuuuJujujujuJujujujujuuujujujujuuujujujuuuuujuJujujuuuuujujujuJujuuuJuJujujuvvIOBBuS    ikXouujujujujujujuJujuJuJujujuuujuJuuuuujujujujujujujuuuY" << endl;
		cout << " jJjujujuJujujujujujuJuJujujujuuuJujujujuJujuuujujujujujuuuuujujuJuJujujuJujujuuuvjMBMBXJJ      ISojujujuJujuuUjujuJujujujujuuuuUjuuUjujuuujUuujuuujujj" << endl;
		cout << " uLuJJLYLYLJYuJuJuJuLYLYLJYJJuJujujJLJLYLYLJJuJuJuYYLJYujujujjLYLjJuJjLYLjJuuujuLYMBBZLLJokGEi   quuJuuuuUuoIkFSIIuUjujUuoUIUUjUuoUoUuuUUIoVoIoIUouUjuJ" << endl;
		cout << " jYJjYYLYLLvLvLJujuLjLYLYLLvvvYJuJJYJLLLYLJJjJujuLJYYYYYujujuYjLYYJYYvJLYjUJujujLjBBBvvJuuooGj   PSuujujUoNNqSSFqNNIojuUXPNqXoUUFXNNqIoIPqENZNZNEkkuUjj" << endl;
		cout << " ULjJBBBBBBBMGuLLuLuMBBBBBBBGSLLJYUBMBMBBBBBjJJuYYMBBBXvJujuvXBBBBjvvBMBBBUjjuJYrjBBMvvJjUoPOI   MNXuujoSNr       rNFUUXi    FIkr    Jqv          iXuuY" << endl;
		cout << " uJLuBBBBMMBBMBXLYYLBBBBBBBBBBBJLvoMBBBBBBBBuYuJLuBBBBBvJjujLkBBBBJrNBBBBVLjuYjYvLBBMvvLjUJvVv   VuvVUuVP           PFVN     kFPr    YOi           Pujj" << endl;
		cout << " uLJYBBBBUijBBBBJYLYMBMBFrLBBBBOvLuBBBBorLvYJuJjvNBBMBBUvujuvkBBBBvuBBBBVvYujLSBBBBBBMBBjVv         uVuNi    uZu    iNoN     qFNr    uqovIL    iVLJVuuY" << endl;
		cout << " uLLJBBMBUirMMBBILYLBBBBSrrqBMBBYvuMBMBUvLJJuJuLLMBMBMBNvYuJLFBMBMvOBBBPvYuuuLkMBBBMBBBMBqOi        VoFX    iMNMi    kXN     Xkqv    JqoPGX    vBPFuUjj" << endl;
		cout << " ULYLBBBBIiVBBBOvJLJBBMBIirOBBMOvvuBBBBUivLuJuJLoBBMXBBBvJjuvSBBMMEBMBqvLjJuJjvviNBMMBBMFv       uBGFIVk    iZVZi    kkE     qFNr    uSUuXu    rNojuuuL" << endl;
		cout << " jLLJBBMBBBBBGUrLYYLBBBMOPMBBBBjLvuBBMBOOBELujjvGBBGYBBBVvjJLSBMMMBMBMYrjjuJuLVMOMBMBBovv           oIFk    iNVNi    kPN     XSPv    jPuuSo    iEuuuujj" << endl;
		cout << " uLJYBMBBMMBMMEuvjLYBBMBMBMBMkvvJLuBBMMBBBMLJuvjMBBNrBMBZvJjvkMBMBBBMBGvLuuujYIBOBBMMBNvSr        iioVVX    iNIZi    XkZ     qVNr    ukUjXu    rqUjujuY" << endl;
		cout << " jYLjBBMBuiYBBBBFvYLBMBBoSBBBLrYuvUBBMBILuuYuJvkBBBuiEBBBLLYLSBMMMXZBBBFvYujuJLrrqBMBBBPUP       rOFSuSX    iNFNi    SPN     Pkqv    jPuukU    iEuuuuJj" << endl;
		cout << " ULYYBBBMSrrPBBBOLLYBBMBULMBBMvJjLjBBBBIrLYujJvMBBBNIMBBMXvjvkBBBBruMBBBLLjuJLSBBBMBMBMjLi          UVIX    iEIZi    kSE     NFNr    uSUuXu    rNojuuuJ" << endl;
		cout << " uYLJMBBBVrrNBBMMvLLBBMBkiMBBMSvjvuMBMBUrLYYjvuBBMBBBBBMBOLLvFBMBMLrOMBMGvjjuLUqkOBMMMBMBMMNr    iFYFuFk    iGXOi    SSNi    NNZv    ukuUSo    iNuujujj" << endl;
		cout << " ULYYBBBBVrUMBMBXLLJBBMBSrIBBBMLvLuBBBBorLLJLvPBMBGYLoBBMBjLvSBBBBLrjBBBMFvujjLYvZBBMMBBBMji     iJLVIUN     GMZ     NUNr    XMBi    qouuPu    rqojujuL" << endl;
		cout << " uLLuMBBBBBBBBBGYLYYBBBBqrLMBBBZvvIBBBBMBBBBJvBBBBXrvvBBBBGvvXBBBBuvvEBBBBJLuvXBBBBBBBBOvo          oIoFI           VSUVP           vXUuuSu    iNuujuJJ" << endl;
		cout << " uLjjBBBMBBBOZUvLjLuBBMBkLvNBBBBuLuBBMMBMBMBLVBBBBuLYvPBMBMJvXBBBBuYvuMBMBNJJYVBMBMMMBBMLFr  i i    oVjoPF         FXUjoFPi        LNIuuukY    iXUjuuuJ" << endl;
		cout << " uYjJLLvLvLvLvLLuJuLLvLLJJjLLvLLjYjLLvvvLvLLJLJvLvJJjJLvLvjJjLLvLLJjjLLvLLuYuJJLLvLvLvLLjuSNENZNZNEXIuujoSZSjvvvuSZSojuuoFZkuvvrLoEXIuujuuVuVoooojuuujJ" << endl;
		cout << " uLujjYjYjLjJjJujujuJjYjJujuYjYjJuJjLjLjYjYjJuYjYuJujuJjYjYujuYjYjJujuJJYuYujuJJYjLJYJLujuuUUouoUouUuuuuuouSXNPNkSUojujuuuUFkNPNXkoouujUjUUSSkVIuUjujuY" << endl;
		cout << " uYuUuujUjUuUuUuUuUuuuujUuuuUjUuUjUjUjuuUjUjUuuuuuUjUjuuuuUjUjUuUuUuUuujuuUuuuUuUuujUjujujUuuuUuUuUuUuUuUjUuUuouUuuuUuUjUuUuUuououUuujUuUuUuUuUuUjUjUju" << endl;
		cout << " ovYLYLJLJLJLYLJLJLYLJLJLJLYLJLJLYLJLYLYLJLJLJLYLYLYLYLJLYLJLYLYLYLJLJLJLYLYLJLJLYLJLYLYLYLYLJLJLJLYLJLJLJLJLYLJLJLJLYLYLJLYLYLJLJLJLJLYLJLJLYLYLYLYYJv" << endl;
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
		{
			graphic_display();
			return;
		}
    }
    return;
}

void graphic_display()
{

	cout << "MEMORADNDUM FOR HQ USAF/WB \nOctober 30th 1981\n" << endl;
	cout << "FROM: 	SECDEF\n		1600 Pennsylvania Avenue\n		Washington D.C. 20330 - 1250\n" << endl;
	cout << "SUBJECT: Developmental plans of project E.S.C.R.M\n\n" << endl;
	cout << "1. Project E.S.C.R.M or Electromagnetic Solar Control Recon Missile is currently being \nconstructed to help us end the current hostilities between the United States and the \nU.S.S.R. The weapon has been designed for deep space flight and will be the first \nsteps toward the Star Wars Defense system.\n" << endl;
	cout << "2. The location of Project E.S.C.R.M is currently classified as Top Secret and only \nlevel 2 security clearance personnel are aware of its location. For security reasons \nthe location of Project E.S.C.R.M has been \nseparated into 4 documents which have been \nstored in Archive Room 2B, The records room is off limits to all personnel until \nfurther notice.\n" << endl;
	cout << "3. According to recent assessments of project E.S.C.R.M we are well under our \nprojected time table. Preliminary reports suggest that BIG RED does not currently know \nof the existence of Project E.S.C.R.M and are preoccupied with the current Sweden \nincident.\n" << endl;
	cout << "4. Currently Project E.S.C.R.M is being overseen by Stewart Littleton, one of the \nfinest minds in the world on rocketry and propulsion. He has set a very strict time \ntable and we have encountered some issues with supplying the required parts for him, \nwe hope to get back on schedule by mid month.\n" << endl;
	cout << "5.  General Coulton has requested that he be contacted when Project E.S.C.R.M is at \n90% completion, he wishes to tour the facility to ensure everything is up to \nstandards. He can be reached at EXT 918 during normal business hours.\n" << endl;
	cout << "6. The current time table sets the completion of the device on November 20th at 06:00 \nhours, however with current delays we may not see completion until next spring. All \nfunding has been diverted to Project E.S.C.R.M to help rectify this.\n" << endl;
	cout << "	1A: Officers note, we have changed the control password on the weapons cage to \nthe following 06751 going forward the control password will change every month, new \npasswords will be distributed by courier to all authorized officers." << endl;
	cout << "Report Complete \nSergeant Louis Benton \nUSAF - Wallaby Base" << endl;
    
    return;
}