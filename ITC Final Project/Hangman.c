#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>


void show_record();
int gameplay();
int sp();
int menu();
int pvp();
int countr=0;
void edit_score(float score, char plnm[20]);


int main()
{

    int choice;
    int turn;

    system("COLOR 4F");
    menu();
    return_to_menu:


    printf("Welcome to Hangman   \n\n");
    printf("1.Single Player\n\n");
    printf("2.PvP\n\n");
    printf("3.High Score\n\n");
    printf("4.Exit   \n\n");
    printf("Your Choice : ");
    scanf("%d",&choice);
    system("cls");
    if (choice==1){

    	printf("Welcome to hangman ! ");
    sp();
    printf("\n\nPress any key to return to menu.");
    getch();
    system("cls");

    goto return_to_menu;
    }
    else if (choice==2)
    {
        pvp();



    printf("\n\nPress 1 to get another player's turn.\nPress 2 If you want to return to menu\nPress 3 to exit the game.");

    scanf("%d",&turn);
        if (turn==1)
            {
            system("cls");
            pvp();
            printf("Press any key to return to menu.");
            getch();
            system("cls");
            goto return_to_menu;
                }
        else if (turn == 2)
            {
        goto return_to_menu;
                }
        else
        {
        printf("Thank you for playing hangman! Please come back soon...\n\n");
            }
    }
         else if (choice==3)
	{
	show_record();
	system("cls");
	goto return_to_menu;
	}
    else
    {
        system("cls");
        printf("\n\n");
        printf("********************************\n");
        printf("*Thank you for playing hangman!*\n");
        printf("********************************\n\n\n");

    }
    return 0;
}

int menu()
{
    printf("*********************************************************\n");
    printf("*********************************************************\n");
    printf("****************                      *******************\n");
    printf("****************                      *******************\n");
    printf("******************                  *********************\n");
    printf("******************                  *********************\n");
    printf("******************                  *********************\n");
    printf("******************                  *********************\n");
    printf("******************                  *********************\n");
    printf("******************                  *********************\n");
    printf("*********************************************************\n");
    printf("*********************************************************\n");
    Sleep(300);
    system("cls");

    printf("*********************************************************\n");
    printf("*********************************************************\n");
    printf("****************  Welcome To Hangman  *******************\n");
    printf("****************  ------------------  *******************\n");
    printf("******************                  *********************\n");
    printf("******************                  *********************\n");
    printf("******************                  *********************\n");
    printf("******************                  *********************\n");
    printf("******************                  *********************\n");
    printf("******************                  *********************\n");
    printf("*********************************************************\n");
    printf("*********************************************************\n");
    Sleep(300);
    system("cls");

    printf("*********************************************************\n");
    printf("*********************************************************\n");
    printf("****************  Welcome To Hangman  *******************\n");
    printf("****************  ------------------  *******************\n");
    printf("******************    |--------|    *********************\n");
    printf("******************    |        |    *********************\n");
    printf("******************    |             *********************\n");
    printf("******************    |             *********************\n");
    printf("******************    |             *********************\n");
    printf("******************____|____         *********************\n");
    printf("*********************************************************\n");
    printf("*********************************************************\n");
    Sleep(300);
    system("cls");

    printf("*********************************************************\n");
    printf("*********************************************************\n");
    printf("****************  Welcome To Hangman  *******************\n");
    printf("****************  ------------------  *******************\n");
    printf("******************    |--------|    *********************\n");
    printf("******************    |        |    *********************\n");
    printf("******************    |        o    *********************\n");
    printf("******************    |             *********************\n");
    printf("******************    |             *********************\n");
    printf("******************____|____         *********************\n");
    printf("*********************************************************\n");
    printf("*********************************************************\n");
    Sleep(300);
    system("cls");

    printf("*********************************************************\n");
    printf("*********************************************************\n");
    printf("****************  Welcome To Hangman  *******************\n");
    printf("****************  ------------------  *******************\n");
    printf("******************    |--------|    *********************\n");
    printf("******************    |        |    *********************\n");
    printf("******************    |        o    *********************\n");
    printf("******************    |        |    *********************\n");
    printf("******************    |             *********************\n");
    printf("******************____|____         *********************\n");
    printf("*********************************************************\n");
    printf("*********************************************************\n");
    Sleep(300);
    system("cls");



    printf("*********************************************************\n");
    printf("*********************************************************\n");
    printf("****************  Welcome To Hangman  *******************\n");
    printf("****************  ------------------  *******************\n");
    printf("******************    |--------|    *********************\n");
    printf("******************    |        |    *********************\n");
    printf("******************    |        o    *********************\n");
    printf("******************    |       \\|/   *********************\n");
    printf("******************    |             *********************\n");
    printf("******************____|____         *********************\n");
    printf("*********************************************************\n");
    printf("*********************************************************\n");
    Sleep(300);
    system("cls");


    printf("*********************************************************\n");
    printf("*********************************************************\n");
    printf("****************  Welcome To Hangman  *******************\n");
    printf("****************  ------------------  *******************\n");
    printf("******************    |--------|    *********************\n");
    printf("******************    |        |    *********************\n");
    printf("******************    |        o    *********************\n");
    printf("******************    |       \\|/   *********************\n");
    printf("******************    |        /\\   *********************\n");
    printf("******************____|____         *********************\n");
    printf("*********************************************************\n");
    printf("*********************************************************\n");


    int i;
    for(i=0;i<=4;i++)
    {
        system("cls");
        printf("*********************************************************\n");
    printf("*********************************************************\n");
    printf("****************  Welcome To Hangman  *******************\n");
    printf("****************  ------------------  *******************\n");
    printf("******************    |--------|    *********************\n");
    printf("******************    |        |    *********************\n");
    printf("******************    |        o    *********************\n");
    printf("******************    |       /|\\   *********************\n");
    printf("******************    |        /\\   *********************\n");
    printf("******************____|____         *********************\n");
    printf("*********************************************************\n");
    printf("*********************************************************\n");
    Sleep(100);
    system("cls");
    printf("*********************************************************\n");
    printf("*********************************************************\n");
    printf("****************  Welcome To Hangman  *******************\n");
    printf("****************  ------------------  *******************\n");
    printf("******************    |--------|    *********************\n");
    printf("******************    |        |    *********************\n");
    printf("******************    |        o    *********************\n");
    printf("******************    |       \\|/   *********************\n");
    printf("******************    |        /\\   *********************\n");
    printf("******************____|____         *********************\n");
    printf("*********************************************************\n");
    printf("*********************************************************\n");
    Sleep(100);
    system("cls");

    }
        printf("*********************************************************\n");
    printf("*********************************************************\n");
    printf("****************  Welcome To Hangman  *******************\n");
    printf("****************  ------------------  *******************\n");
    printf("******************    |--------|    *********************\n");
    printf("******************    |        |    *********************\n");
    printf("******************    |        x    *********************\n");
    printf("******************    |       \\|/   *********************\n");
    printf("******************    |        /\\   *********************\n");
    printf("******************____|____         *********************\n");
    printf("*********************************************************\n");
    printf("*********************************************************\n");
    Sleep(600);
    system("cls");

}


int sp()
{
	int score;
	char playername[20];
	fflush(stdin);
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
    fgets(playername,15,stdin);
	int count=0;
	go:

  srand(time(NULL));//gives diff values of arrays

    char HangmanWords[][16] = //this is guessing words
    {
        "dog",
        "parrot",
        "lizard",
        "peacock",
        "panda",
        "deer",
        "cat",
        "horse"
    };

    int randomword = rand() % 8;  // generate random words
    int lives=0; //wrong ans will increase this, max 5
    int chances = 6;

    int correctguess = 0;
    int totalcorrects = 0;

    int wordlength = strlen(HangmanWords[randomword]);



    int guessedletter[10] = { 0,0,0,0,0,0,0,0,0,0 }; // for filling the blanks

    int exit = 0;

    int hiddenletter = 0;

    char guess[16];
    char letterEntered;



    while(correctguess < wordlength)  //game loop
    {
        printf("******************\n");
        printf("*Guess The Animal*\n");
        printf("******************\n");
        printf("----------------\n(If you want to quit the game then type exit)");
        printf("\n\n\nHangman Word : ");

        for( hiddenletter= 0; hiddenletter < wordlength; hiddenletter++) // for making _ _ _ _ _
        {                                                                  // comparing with hidden letters
            if(guessedletter[hiddenletter] == 1 )
            {
                printf("%c", HangmanWords[randomword][hiddenletter]); // this is filling the blanks

            }
            else
            {
                printf("_ ");
            }
        }
        printf("\n");

        printf("\n\n\n Enter Letter: ");
        fgets(guess,16,stdin); //16 characters only
        if(strncmp(guess, "exit", 4)== 0 )//  exit the game
            {
            exit = 1;
            break;
        }

        letterEntered = guess[0];


        totalcorrects = correctguess;

        for( hiddenletter= 0; hiddenletter < wordlength; hiddenletter++)
        {

            if(letterEntered == HangmanWords[randomword][hiddenletter])
            {
              guessedletter[hiddenletter] = 1; // guessed letter = array declare (0,0,0,0,0,0,0)
              correctguess++;
            }
        }

        if(totalcorrects == correctguess) // TC != CG  means correct guess.
        {
                    system("cls");

         chances--;
         printf("****************\n");
         printf("* Wrong Guess !* \n");
         printf("****************\n");

         lives++;

         switch (lives)
         {
    case 1 :
        printf("\n\n");
        system("cls");

        printf("");
        break;
    case 2 :
    printf("\n        |--------|    \n");
    printf("        |        |    \n");
    printf("        |             \n");
    printf("        |             \n");
    printf("        |             \n");
    printf("    ____|____         \n");

printf("\n\n\n");
    break;
    case 3 :
    printf("\n        |--------|    \n");
    printf("        |        |    \n");
    printf("        |        o     \n");
    printf("        |             \n");
    printf("        |             \n");
    printf("    ____|____         \n");

printf("\n\n\n");
    break;
    case 4 :
    printf("\n        |--------|    \n");
    printf("        |        |    \n");
    printf("        |        o    \n");
    printf("        |        |    \n");
    printf("        |             \n");
    printf("    ____|____         \n");

printf("\n\n\n");
    break;
        case 5 :
    printf("\n        |--------|    \n");
    printf("        |        |    \n");
    printf("        |        o    \n");
    printf("        |       \\|/  \n");
    printf("        |             \n");
    printf("    ____|____         \n");

printf("\n\n\n");
break;
        case 6 :
    printf("\n        |--------|    \n");
    printf("        |        |    \n");
    printf("        |        x    \n");
    printf("        |       \\|/  \n");
    printf("        |        /\\  \n");
    printf("    ____|____         \n");
    break;
         }
         if (chances ==0)
         {
             break;  //it will break the loop
         }
        }
        else {
                system("cls");
         printf("******************\n");
         printf("* Correct Guess !* \n");
         printf("******************\n\n\n");
         //count++;
                switch (lives)
         {
    case 1 :
        printf("\n\n");
        system("cls");

        printf("");
        break;
    case 2 :
    printf("\n        |--------|    \n");
    printf("        |        |    \n");
    printf("        |             \n");
    printf("        |             \n");
    printf("        |             \n");
    printf("    ____|____         \n");

printf("\n\n\n");
    break;
    case 3 :
    printf("\n        |--------|    \n");
    printf("        |        |    \n");
    printf("        |        o     \n");
    printf("        |             \n");
    printf("        |             \n");
    printf("    ____|____         \n");

printf("\n\n\n");
    break;
    case 4 :
    printf("\n        |--------|    \n");
    printf("        |        |    \n");
    printf("        |        o    \n");
    printf("        |        |    \n");
    printf("        |             \n");
    printf("    ____|____         \n");

printf("\n\n\n");
    break;
        case 5 :
    printf("\n        |--------|    \n");
    printf("        |        |    \n");
    printf("        |        o    \n");
    printf("        |       \\|/  \n");
    printf("        |             \n");
    printf("    ____|____         \n");

printf("\n\n\n");
break;
        case 6 :
    printf("\n        |--------|    \n");
    printf("        |        |    \n");
    printf("        |        x    \n");
    printf("        |       \\|/  \n");
    printf("        |        /\\  \n");
    printf("    ____|____         \n");
    break;
         }

        }

    } // game loop ending
    if(exit == 1 )
    {
        printf("Game Over ! \n");
        edit_score(score,playername);
    }
    else if(chances == 0)
    {
        printf("\nOut of turns. \nGame Over! the hangman word was : %s \n", HangmanWords[randomword]);
    }
else
{
    printf("Hangman word : %s \n\tYou Win ! \n\n",HangmanWords[randomword]);
    printf("******************************\n");
    printf("*         You Have Saved Me  * \n");
    printf("*      o      Thank you!     *\n");
    printf("*     /|\\                   *\n");
    printf("*      /\\                   *\n");
    printf("******************************\n");
    count++;

    printf("Score : %d\n\n",count);
    goto go;
}

return 0;

}
int pvp()
{
  srand(time(NULL));

     int live;
    char HangmanWords[1][16];


    int randomword = rand() % 1;  // generate random words
    int lives=0;
    int chances = 6;
    int scores=0;

    int totalcorrects = 0;

    int correctguess = 0;


    int guessedletter[15] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };

    int exit = 0;

    int hiddenletter = 0;

    char guess[16];
    char letterEntered;
    printf("Enter a hangman word (Max 15 Characters): ");
    scanf("%s", HangmanWords);

    int wordlength = strlen(HangmanWords[randomword]);
           //game loop
    while(correctguess < wordlength)
    {
        printf("***************\n\n");
        printf("Guess The Hangman Word.\n");
        printf("----------------\n(If you want to quit the game then type exit)");
        printf("\n\n\nHangman Word : ");

        for( hiddenletter= 0; hiddenletter < wordlength; hiddenletter++) // for making _ _ _ _ _
        {
            if(guessedletter[hiddenletter] == 1 )
            {
                printf("%c", HangmanWords[randomword][hiddenletter]);

            }
            else
            {
                printf("_ ");
            }
        }
        printf("\n");


        printf("\n\n\nEnter Letter: ");
        fgets(guess,16,stdin); //16 characters only
        if(strncmp(guess, "exit", 4)== 0 )//  exit the game
            {
            exit = 1;
            break;
        }

        letterEntered = guess[0];


        totalcorrects = correctguess;

        for( hiddenletter= 0; hiddenletter < wordlength; hiddenletter++)
        {
            if(guessedletter[hiddenletter] == 1 )
            {
                continue;
            }
            if(letterEntered == HangmanWords[randomword][hiddenletter])
            {
              guessedletter[hiddenletter] = 1;
              correctguess++;
            }
        }

        if(totalcorrects == correctguess)
        {
                    system("cls");

         chances--;
         printf("****************\n");
         printf("* Wrong Guess !* \n");
         printf("****************\n");
         lives++;

         switch (lives)
         {
    case 1 :
        printf("\n\n");
        system("cls");

        printf("");
        break;
    case 2 :
    printf("\n        |--------|    \n");
    printf("        |        |    \n");
    printf("        |             \n");
    printf("        |             \n");
    printf("        |             \n");
    printf("    ____|____         \n");

printf("\n\n\n");
    break;
    case 3 :
    printf("\n        |--------|    \n");
    printf("        |        |    \n");
    printf("        |        o     \n");
    printf("        |             \n");
    printf("        |             \n");
    printf("    ____|____         \n");

printf("\n\n\n");
    break;
    case 4 :
    printf("\n        |--------|    \n");
    printf("        |        |    \n");
    printf("        |        o    \n");
    printf("        |        |    \n");
    printf("        |             \n");
    printf("    ____|____         \n");

printf("\n\n\n");
    break;
        case 5 :
    printf("\n        |--------|    \n");
    printf("        |        |    \n");
    printf("        |        o    \n");
    printf("        |       \\|/  \n");
    printf("        |             \n");
    printf("    ____|____         \n");

printf("\n\n\n");
break;
        case 6 :
    printf("\n        |--------|    \n");
    printf("        |        |    \n");
    printf("        |        x    \n");
    printf("        |       \\|/  \n");
    printf("        |        /\\  \n");
    printf("    ____|____         \n");
    break;
         }
         if (chances ==0)
         {
             break;
         }
        }
        else {
                system("cls");
         printf("******************\n");
         printf("* Correct Guess !* \n");
         printf("******************\n\n\n");
                switch (lives)
         {
    case 1 :
        printf("\n\n");
        system("cls");

        printf("");
        break;
    case 2 :
    printf("\n        |--------|    \n");
    printf("        |        |    \n");
    printf("        |             \n");
    printf("        |             \n");
    printf("        |             \n");
    printf("    ____|____         \n");

printf("\n\n\n");
    break;
    case 3 :
    printf("\n        |--------|    \n");
    printf("        |        |    \n");
    printf("        |        o     \n");
    printf("        |             \n");
    printf("        |             \n");
    printf("    ____|____         \n");

printf("\n\n\n");
    break;
    case 4 :
    printf("\n        |--------|    \n");
    printf("        |        |    \n");
    printf("        |        o    \n");
    printf("        |        |    \n");
    printf("        |             \n");
    printf("    ____|____         \n");

printf("\n\n\n");
    break;
        case 5 :
    printf("\n        |--------|    \n");
    printf("        |        |    \n");
    printf("        |        o    \n");
    printf("        |       \\|/  \n");
    printf("        |             \n");
    printf("    ____|____         \n");

printf("\n\n\n");
break;
        case 6 :
    printf("\n        |--------|    \n");
    printf("        |        |    \n");
    printf("        |        x    \n");
    printf("        |       \\|/  \n");
    printf("        |        /\\  \n");
    printf("    ____|____         \n");
    break;
         }



        }

    }
    if(exit == 1 )
    {
        printf("Game Over ! \n");
    }
    else if(chances == 0)
    {
        printf("\nOut of turns. \nGame Over! the hangman word was : %s \n", HangmanWords[randomword]);
    }
else
{
    printf("\nHangman word : %s \n\tYou Win ! \n\n",HangmanWords[randomword]);

    printf("******************************\n");
    printf("*         You Have Saved Me  * \n");
    printf("*      o      Thank you!     *\n");
    printf("*     /|\\                   *\n");
    printf("*      /\\                   *\n");
    printf("******************************\n");

}

return 0;

}

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
		fflush(stdin);
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}


void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}

