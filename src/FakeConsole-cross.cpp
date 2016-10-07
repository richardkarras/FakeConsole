 
#include <stdio.h>
#include <string>
#include <sstream>
#include <iostream>
#include <unistd.h>

using namespace std;
void console();
void graphic_display();
//void ext7513(); //removed to hard copy
//void ext4900(); //removed to phone
void morse_code();
//void ext1925(); //removed to keypad
void screenWipe();

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
		
		screenWipe();

		cout << "\nROOM SETUP: Enter booking name for password: "; // getting setup info to change the first password in the escape room to the Name of the booking
		
		getline(cin, password);

		screenWipe();
		
		//ASCII output of breakout logo
		cout << "******   *******   ********     **     **   **   *******   **     ** **********" << endl;
		cout << "/*////** /**////** /**/////     ****   /**  **   **/////** /**    /**/////**///" << endl;
		cout << "/*   /** /**   /** /**         **//**  /** **   **     //**/**    /**    /**" << endl;
		cout << "/******  /*******  /*******   **  //** /****   /**      /**/**    /**    /**" << endl;
		cout << "/*//// **/**///**  /**////   **********/**/**  /**      /**/**    /**    /**" << endl;
		cout << "/*    /**/**  //** /**      /**//////**/**//** //**     ** /**    /**    /**" << endl;
		cout << "/******* /**   //**/********/**     /**/** //** //*******  //*******     /**" << endl;
		cout << "///////  //     // //////// //      // //   //   ///////    ///////      //" << endl;
		do
		{
			
			for (pass_fail = 1,user_pass = "default"; user_pass != password; pass_fail++)
			{
				cout << "\nSystem locked.  Enter user's first name:  ";
				
				getline(cin, user_pass);
				
				if (user_pass == "e x i t")
					break;
				if (user_pass == password)
				{
					console();
				}
				else
				{
					cout << "\n\nUser name not recognised " << pass_fail << " times.";
				}
				
			}
			if (user_pass == password)
				console();
		} while (user_pass != "e x i t");
	}

    return 42;
    
}

void console()
{
    //Variables
    string con_input;
	
	cout << "\n type dir or ls for directory listing \n cd for change directory \n write <file name> to print text to screen \n"; // Leading info for users to work with unfamiliar commands.
    
	while(1)
    {
		cout << "\nFor command list type 'help' \n"; // To list the possible inputs, all non-listed inputs will result in an error message.
		cout << "\n~"; // Linux/Unix style command shell, since Unix is older than DOS, but quite similar in useage - could be changed to C:\ or other drive letter as necessary.
		getline (cin,con_input);
        
		if (con_input == "help")
			cout << "\n type dir or ls for directory listing \ntype: write <file name> to print text to screen \n for options on commands type 'help <command>'\n"; // Leading info for users to work with unfamiliar commands.
		else if (con_input == "ls"||con_input == "dir")
			cout << "\n\n Directory listing: \n weapondoc.txt \n 1 file, 0 folders \n "; // Output "directory listing" to allow participants to attempt to open the photo clue.
		else if (con_input == "write weapondoc.txt"||con_input=="write weapondoc")
			graphic_display();
		/*else if (con_input == "dial 7513")
		{
			ext7513();
		}
		else if (con_input == "dial 4900")
		{
			ext4900();
		}*/ //removed to hard copy and phone
		else if (con_input == "write .morse_code.txt"||"write .morse_code)
		{
			morse_code();
		}
		else if (con_input == "ls -a" || con_input == "dir /a")
		{
			cout << "\n\n Directory listing: \n .morse_code.txt \n weapondoc.txt \n 2 files, 1 hidden, 0 folders \n "; // Output "directory listing" to allow participants to attempt to open the photo clue.
		}
		else if (con_input == "help ls"|| con_input == "man ls"
		{
			cout << "Displays a list of files and subdirectories in a directory. \n ls [options] \n\n -a Show all files, including hidden. \nerr c0rяup data\n" << endl;
		}
		else if (con_input == "help dir")
		{
			cout << "Displays a list of files and subdirectories in a directory. \n dir [options] \n\n /a Show all files, including hidden. \nerr c0rяup data\n" << endl;
		}
		/*else if (con_input == "dial 1925")
		{
			ext1925();
			return;
		} */ //removed to keypad
		else
			cout << "\n\nCommand not recognised" << endl;
    }
    return;
}

void graphic_display()
{
	cout << "MEMORADNDUM FOR HQ USAF/WB \nOctober 30th 1981\n" << endl;
	cout << "FROM:   SECDEF\n    1600 Pennsylvania Avenue\n    Washington D.C. 20330 - 1250\n" << endl;
	cout << "SUBJECT: Developmental plans of project E.S.C.R.M\n\n" << endl;
	cout << "1. Project E.S.C.R.M or Electromagnetic Solar Control Recon Missile is currently being \nconstructed to help us end the current hostilities between the United States and the \nU.S.S.R. The weapon has been designed for deep space flight and will be the first \nsteps toward the Star Wars Defense system.\n" << endl;
	cout << "2. The location of Project E.S.C.R.M is currently classified as Top Secret and only \nlevel 2 security clearance personnel are aware of its location. For security reasons \nthe location of Project E.S.C.R.M has been \nseparated into 4 documents which have been \nstored in Archive Room 2B, The records room is off limits to all personnel until \nfurther notice.\n" << endl;
	cout << "3. According to recent assessments of project E.S.C.R.M we are well under our \nprojected time table. Preliminary reports suggest that BIG RED does not currently know \nof the existence of Project E.S.C.R.M and are preoccupied with the current Sweden \nincident.\n" << endl;
	cout << "4. Currently Project E.S.C.R.M is being overseen by Stewart Littleton, one of the \nfinest minds in the world on rocketry and propulsion. He has set a very strict time \ntable and we have encountered some issues with supplying the required parts for him, \nwe hope to get back on schedule by mid month.\n" << endl;
	cout << "5.  General Coulton has requested that he be contacted when Project E.S.C.R.M is at \n90% completion, he wishes to tour the facility to ensure everything is up to \nstandards. He can be reached at EXT 0918 during normal business hours.\n" << endl;
	cout << "6. The current time table sets the completion of the device on November 20th at 06:00 \nhours, however with current delays we may not see completion until next spring. All \nfunding has been diverted to Project E.S.C.R.M to help rectify this.\n" << endl;
	cout << "  1A: Officers note, we have changed the control password on the weapons cage to \nthe following 06751 going forward the control password will change every month, new \npasswords will be distributed by courier to Untitled eventall authorized officers." << endl;
	cout << "Report Complete \nSergeant Louis Benton \nUSAF - Wallaby Base" << endl;
	do
	{
		cout << "\n\nPress return to continue..." << endl;
	} while (cin.get() != '\n');

	screenWipe();
}

/*void ext7513() //removed to put on hard copy
{
	screenWipe();
	
	cout << "\nColonel Jonston's travel itinerary:" << endl;
	cout << "June 26-30: Travel to Miami re: Mission: Impossible" << endl;
	cout << "July 3: Col J. Travel to Dallas with his wife to visit family." << endl;
	cout << "July 7: Col J. New York re: PROJECT SWIPE" << endl;
	cout << "July 10: Col J. Leaves New York, travels to San Francisco to complete plans for Mission: Impossible" << endl;
	cout << "July 18: Col J. FT HARRIS AIR FORCE BASE Dallas, TX" << endl;

	do
	{
		cout << "\n\nPress return to continue..." << endl;
	} while (cin.get() != '\n');
	
	screenWipe();
}*/

/*void ext4900() //removed to put on simple phone
{
	screenWipe();

	cout << "Archive Room 2 has reported that they are missing a key for the desk. They called it in \nto maintenance. There seems to be some confusion as maintenance reported on it as well \nbut when I check the report, it was about issues with the wall. \nThis requires additional follow up" << endl;

	do
	{
		cout << "\n\nPress return to continue..." << endl;
	} while (cin.get() != '\n');

	screenWipe();
}*/

void morse_code()
{
	screenWipe();
	
	cout << "The following message was intercepted: \n_ . . . \n. . _ \n. . . \n_ \nMessage ends." << endl;
	
	do
	{
		cout << "\n\nPress return to continue..." << endl;
	} while (cin.get() != '\n');

	screenWipe();
}

/*void ext1925() //removed to keypad
{
	for (int i = 120; i > 0; i--)
	{
		screenWipe();

		cout << "WARNING WARNING WARNING \nYou have accessed a restricted file. \nYour location has been noted and military police are en route. \nETA " << i << " seconds. \nPlease surrender peacefully!" << endl;
		sleep(1);
	}

	screenWipe();
}*/

void screenWipe()
{
	for (int i = 0; i <100; i++)
	{
		cout << "\n";
	}

}