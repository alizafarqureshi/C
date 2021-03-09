#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

int menu();
int fast_food();
int Desi_cuisine();
int fbill=0,dbill=0,cbill=0, tbill=0;
int bill(int,int,int,int);
int Chinese_cuisine();
int admin_panel();

int main()
{

    int i,choice,b;

    system("COLOR 1F");

   menu();


   for(i=0;i<=4;i++)
       {
           system("cls");

           return_to_main_menu:

    system("cls");
    printf("1.Customer Panel     \n\n2.Admin Panel     \n\n3.Exit   \n\nYour Choice : ");

    scanf("%d",&choice);
    system("cls");
    if (choice==1)
        {
        return_to_food_menu:
            system("cls");
        printf("What type of food do you like to eat?\n\n");
        printf("1.Fast Food    \n\n2.Desi Cuisine    \n\n3.Chinese Cuisine    \n\n4.Make Reciept Of Total Bill    \n\n5.Back\n\n");
        printf("Your Choice : ");

        scanf("%d",&choice);
        system("cls");

        if(choice==1)
            {
            fast_food();
            goto return_to_food_menu;
                }
        else if(choice==2)
            {
            Desi_cuisine();
            goto return_to_food_menu;
                }
        else if(choice==3)
            {
            Chinese_cuisine();
            goto return_to_food_menu;
                }
        else if(choice==4) {
            bill(fbill, dbill, cbill, tbill);
            printf("\n\n");
            exit(0);
                }
        else if(choice==5)
            {

            goto return_to_main_menu;
                }
                    }
    else if(choice==2)
        {
            admin_panel();
        }

    else if (choice==3)
        {
            printf("\t\t\t\n************************************");
            printf("\t\t\t\n*Thank You For Using Our Software !*");
            printf("\t\t\t\n************************************\n\n");
            exit(1);
        }

     getch();
       }

     return 0;
}

int menu()
{


printf("***********************************************\n");
printf("***********************************************\n");
printf("*********                           ***********\n");
printf("*********  WELCOME TO TGI FRIDAY'S  ***********\n");
printf("*********                           ***********\n");
printf("***********************************************\n");
printf("***********************************************\n");
//getch(); // to stop the screen

Sleep(1200);    //To pause the screen for 1.2 seconds

//system("pause"); //To pause the screen



}



int fast_food()
{


int i=1;

system("cls");

       printf(".--------------------------------------.\n");
       printf("| Food No. |      Item       |  Price  |\n");
       printf("|--------------------------------------|\n");
       printf("|    1     |     Zinger      |   230   |\n");
       printf("|--------------------------------------|\n");
       printf("|    2     |     Broast      |   240   |\n");
       printf("|--------------------------------------|\n");
       printf("|    3     |  Club Sandwich  |   260   |\n");
       printf("|--------------------------------------|\n");
       printf("|    4     |  Chicken Burger |   180   |\n");
       printf("|--------------------------------------|\n");
       printf("|    5     |   Beef Burger   |   200   |\n");
       printf("|--------------------------------------|\n");
       printf("|    6     |  Chicken Roll   |   150   |\n");
       printf("'--------------------------------------'\n\n");
       printf("0. Back");




        printf("\n\nWhich item would you like to order?\n\n");
        printf("Your Choice : ");
       scanf("%d",&i);
printf("\n");
           int q1;

        switch (i)
     {
        case 1:
            printf("\nHow much quantity do you want?\n");
            scanf("%d",&q1);
            fbill= fbill + (230 * q1);
            printf("\n***Order Successful !***");
            Sleep(1000);

           break;
        case 2:
            printf("\nHow much quantity do you want?\n");
            scanf("%d",&q1);
            fbill= fbill + (240 * q1);
            printf("\n***Order Successful !***");
            Sleep(1000);
           break;
        case 3:
            printf("\nHow much quantity do you want?\n");
            scanf("%d",&q1);
            fbill= fbill + (260 * q1);
            printf("\n***Order Successful !***");
            Sleep(1000);
            break;
        case 4:
            printf("\nHow much quantity do you want?\n");
            scanf("%d",&q1);
            fbill= fbill + (180 * q1);
            printf("\n***Order Successful !***");
            Sleep(1000);
           break;
        case 5:
            printf("\nHow much quantity do you want?\n");
            scanf("%d",&q1);
            fbill= fbill + (200 * q1);
            printf("\n***Order Successful !***");
            Sleep(1000);
           break;
        case 6:
            printf("\nHow much quantity do you want?\n");
            scanf("%d",&q1);
            fbill= fbill + (150 * q1);
            printf("\n***Order Successful !***");
            Sleep(1000);
           break;

        case 0:
            break;

        default:
           printf("Invalid Choice !");
           break;

     }

}

int main();

 int Desi_cuisine()
{

   {
int i=1;

system("cls");

       printf(".--------------------------------------.\n");
       printf("| Food No. |      Item       |  Price  |\n");
       printf("|--------------------------------------|\n");
       printf("|    1     | Chicken Biryani |   180   |\n");
       printf("|--------------------------------------|\n");
       printf("|    2     |  Chicken karahi |   300   |\n");
       printf("|--------------------------------------|\n");
       printf("|    3     |      Nihari     |   200   |\n");
       printf("|--------------------------------------|\n");
       printf("|    4     |      Haleem     |   180   |\n");
       printf("|--------------------------------------|\n");
       printf("|    5     |       Korma     |   200   |\n");
       printf("|--------------------------------------|\n");
       printf("|    6     |       Pulao     |   150   |\n");
       printf("'--------------------------------------'\n\n");
       printf("0. Back");




        printf("\n\nWhich item would you like to order?\n\n");
        printf("Your Choice : ");
       scanf("%d",&i);
printf("\n");
           int q1;

                switch (i)
     {
        case 1:
            printf("\nHow much quantity do you want?\n");
            scanf("%d",&q1);
            dbill= dbill + (180 * q1);
            printf("\n***Order Successful !***");
            Sleep(1000);
           break;
        case 2:
            printf("\nHow much quantity do you want?\n");
            scanf("%d",&q1);
            dbill= dbill + (300 * q1);
            printf("\n***Order Successful !***");
            Sleep(1000);
           break;
        case 3:
            printf("\nHow much quantity do you want?\n");
            scanf("%d",&q1);
            dbill= dbill + (200 * q1);
            printf("\n***Order Successful !***");
            Sleep(1000);
           break;
        case 4:
            printf("\nHow much quantity do you want?\n");
            scanf("%d",&q1);
            dbill= dbill + (180 * q1);
            printf("\n***Order Successful !***");
            Sleep(1000);
           break;
           case 5:
            printf("\nHow much quantity do you want?\n");
            scanf("%d",&q1);
            dbill= dbill + (200 * q1);
            printf("\n***Order Successful !***");
            Sleep(1000);
           break;
           case 6:
            printf("\nHow much quantity do you want?\n");
            scanf("%d",&q1);
            dbill= dbill + (150 * q1);
            printf("\n***Order Successful !***");
            Sleep(1000);
           break;

        case 0:
            break;

        default:
           printf("Invalid Choice !");
           break;

     }
   }
}

int Chinese_cuisine()
{

   {
int i=1;

system("cls");

       printf(".--------------------------------------.\n");
       printf("| Food No. |      Item       |  Price  |\n");
       printf("|--------------------------------------|\n");
       printf("|    1     |     Chowmein    |   230   |\n");
       printf("|--------------------------------------|\n");
       printf("|    2     | HotandSour Soup |    80   |\n");
       printf("|--------------------------------------|\n");
       printf("|    3     |     Noodles     |   140   |\n");
       printf("|--------------------------------------|\n");
       printf("|    4     |    Fried Rice   |   180   |\n");
       printf("|--------------------------------------|\n");
       printf("|    5     |  Shashlik Stick |   200   |\n");
       printf("|--------------------------------------|\n");
       printf("|    6     |   Fried Shrimp  |   400   |\n");
       printf("'--------------------------------------'\n\n");
       printf("0. Exit");




        printf("\n\nWhich item would you like to order?\n\n");
        printf("Your Choice : ");
       scanf("%d",&i);
printf("\n");
           int q1;

                switch (i)
     {
        case 1:
            printf("\nHow much quantity do you want?\n");
            scanf("%d",&q1);
            cbill= cbill + (230 * q1);
            printf("\n***Order Successful !***");
            Sleep(1000);
           break;
        case 2:
            printf("\nHow much quantity do you want?\n");
            scanf("%d",&q1);
            cbill= cbill + (80 * q1);
            printf("\n***Order Successful !***");
            Sleep(1000);
           break;
        case 3:
            printf("\nHow much quantity do you want?\n");
            scanf("%d",&q1);
            cbill= cbill + (140 * q1);
            printf("\n***Order Successful !***");
            Sleep(1000);
           break;
        case 4:
            printf("\nHow much quantity do you want?\n");
            scanf("%d",&q1);
            cbill= cbill + (180 * q1);
            printf("\n***Order Successful !***");
            Sleep(1000);
           break;
           case 5:
            printf("\nHow much quantity do you want?\n");
            scanf("%d",&q1);
            cbill= cbill + (200 * q1);
            printf("\n***Order Successful !***");
            Sleep(1000);
           break;
           case 6:
            printf("\nHow much quantity do you want?\n");
            scanf("%d",&q1);
            cbill= cbill + (400 * q1);
            printf("\n***Order Successful !***");
            Sleep(1000);
           break;

        case 0:
            break;

        default:
           printf("Invalid Choice !");
           break;

     }
   }

}


int bill(int fbill,int dbill,int cbill,int tbill)
{
    char name[100],add[100];
    char phone[100];
    int GST;
    int total;
    tbill=fbill + dbill + cbill;
    GST = tbill *10/100;
    total =  GST + tbill;

    printf("\nPlease Enter Customer Name : ");
    fflush(stdin);
    gets(name);
    printf("\nPlease Enter Customer Address : ");
    fflush(stdin);
    gets(add);
    printf("\nPlease Enter Customer Phone Number: ");
    scanf("%s", &phone);

	system("cls");

	printf("\n              TGI Friday's           \n");
	printf("   ------------------------------------\n");
	printf("   -             Name : %s            -\n",name);
	printf("   -          Address : %s            -\n",add);
	printf("   -      Phone Number: %s            -\n\n",phone);
	printf("   ----      Food Purchased        ----\n\n");
	printf("   -------- Sub Total : %dRs  ---------\n",tbill);
	printf("   -            GST : %dRs            -\n",GST);
	printf("   ------------------------------------\n");
    printf("   -         TOTAL AMOUNT : %dRs      -\n",total);
    printf("   ------------------------------------\n");
	printf("   -----------  Thank You !   ---------\n");
	printf("   --- We hope you come back again-----\n");
	printf("   ------------------------------------\n");
	}




int admin_panel()
{
    FILE *fp, *ft; /// file pointers
    char choice;

    /** structure that represent a employee */
    struct employee{
        char name[25]; ///name of employee
        int age; /// age of employee
        float salary; /// basic salary of employee
        char desgination[50];
    };

    struct employee e; /// structure variable creation

    char empname[25]; /// string to store name of the employee

    long int recsize; /// size of each record of employee

    /** open the file in binary read and write mode
    * if the file EMP.DAT already exists then it open that file in read write mode
    * if the file doesn't exit it simply create a new copy
    */
    fp = fopen("EMP.txt","rb+");
    if(fp == NULL){
        fp = fopen("EMP.txt","wb+");
        if(fp == NULL){
            printf("Connot open file");
            exit(1);
        }
    }

    /// sizeo of each record i.e. size of structure variable e
    recsize = sizeof(e);

    /// infinite loop continues untile the break statement encounter
    while(1){
        printf("1. Add Record\n"); /// option for add record
        printf("2. Check Records\n"); /// option for showing existing record
        printf("3. Delete Records\n"); /// option for deleting record
        printf("4. Back\n"); /// exit from the program
        printf("Your Choice: "); /// enter the choice 1, 2, 3, 4, 5
        fflush(stdin); /// flush the input buffer
        scanf("\n%c", &choice); /// get the input from keyboard
        switch(choice){
            case '1':  /// if user press 1
                fseek(fp,0,SEEK_END); /// search the file and move cursor to end of the file
                                        /// here 0 indicates moving 0 distance from the end of the file
                    flush();
                    printf("\nEnter name: ");
                    fgets(e.name, 40, stdin);
                    printf("\nEnter age: ");
                    scanf("%d", &e.age);
                    printf("\nEnter basic salary: ");
                    scanf("%f", &e.salary);
                    fflush(stdin);
                    printf("\nEnter Designation : ");
                    fgets(e.desgination,50,stdin);

                    fwrite(&e,recsize,1,fp); /// write the record in the file
                break;
            case '2':
                rewind(fp); ///this moves file cursor to start of the file
                printf("Name     |    Age     |  Salary  |  Designation  |");
                while(fread(&e,recsize,1,fp)==1){ /// read the file and fetch the record one record per fetch

                    printf("\n  %s %d %.2f %s \n",e.name,e.age,e.salary,e.desgination); /// print the name, age and basic salary
                }
                break;
            case '3':

                    flush();
                    printf("\nEnter name of employee to delete: ");
                    fgets(empname,40, stdin);
                    ft = fopen("Temp.dat","wb");  /// create a intermediate file for temporary storage
                    rewind(fp); /// move record to starting of file
                    while(fread(&e,recsize,1,fp) == 1){ /// read all records from file
                        if(strcmp(e.name,empname) != 0){ /// if the entered record match
                            fwrite(&e,recsize,1,ft); /// move all records except the one that is to be deleted to temp file
                        }
                    }
                    fclose(fp);
                    fclose(ft);
                    remove("EMP.txt"); /// remove the orginal file
                    rename("Temp.dat","EMP.txt"); /// rename the temp file to original file name
                    fp = fopen("EMP.txt", "rb+");


                break;
            case '4':
                system("cls");
                    main();
        }
    }
}



	void flush()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

