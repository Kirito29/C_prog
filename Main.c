#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// forward declaration
int Home_Screen (int b);
void Create_Record();
void View_Record();
void Append_To_Record();
void YesWarranty();
void NoWarranty();


//The main function
int main()
{
    int b=0;

    //calling the Home_Screen above
    Home_Screen(b);

    return 0;
}


// A menu like area that defines where in the program you end up based on the code entered
int Home_Screen (int b)
{

    int code;

    printf("\n\n\t\t\t==================== H O M E  S C R E E N ====================");

    puts("\n\n\t============== It is in your own best interest to enter the correct information. Thank You! ==============\n\n");

    printf("\t\t\t\tPress 1 to create a record \n");
    printf("\t\t\t\tPress 2 to view today's record \n");
    printf("\t\t\t\tPress 2 to append to today's record \n");
    printf("\n\t\t\t\t\t\tCode:");
    scanf("%d", &code);
// switch selection that directs the user to a particular function based on the code entered

    switch (code)
    {

    case 1:
        Create_Record();
        break;

    case 2:
        View_Record();
        break;

    case 3:
        Append_To_Record();
        break;


    default:
        printf("You've entered an invalid code, please try again\n");
    }
    return 0;
}


void Create_Record()
{	
		
    char F_C_name[15];
    char L_C_name[15];
    char C_address[50];
    char C_item[20];
    char C_itemIssue[200];
    char T_F_name[15];
    char T_L_name[15];
    char technician[20];

    char isssue[300];
    char resolve[300];

    time_t now;
    time(&now);
    printf("\n\n\n\t\t\t\t Today is : %s \n\n", ctime(&now));

    printf("\nEnter customer's first name:\t\t\t\t");
    scanf(" %[^\n]%*c", F_C_name);
    printf("\nEnter customer's last name:\t\t\t\t");
    scanf(" %[^\n]%*c", L_C_name);
    printf("\nEnter customer's address:\t\t\t\t");
    scanf(" %[^\n]%*c", C_address);
    printf("\nEnter customer's item:\t\t\t\t\t");
    scanf(" %[^\n]%*c", C_item);
    
    //warranty segment
	int ans;
	float deposit;
	 
    puts("\t\t\t\tEnter\t 1 for YES\t\t\t\t2 for NO");
	printf("Does the item have warranty?");
	scanf("%d", &ans);
    
    if (ans == 1)
	{
    	printf("Warranty status: YES");
   	}
	else if (ans == 2)
	{
		printf("Enter deposit:");
		scanf("%f", &deposit);
		printf("Warranty status: NO");
		printf(" Deposit:$ %.2f",deposit);
	}
	else
	{
		printf("You've made an incorrect entry!'");
	}   
    
    printf("\n\nBriefly describe the issue please:\t\t\t\t");
    scanf(" %[^\n]%*c", C_itemIssue);
    printf("\nEnter technician first name:\t\t\t\t");
    scanf(" %[^\n]%*c", T_F_name);
    printf("\nEnter technician last name:\t\t\t\t");
    scanf(" %[^\n]%*c", T_L_name);

   // printf("\nBriefly describe the issue:\t\t\t\t");
   // scanf(" %[^\n]%*c", isssue);
    printf("\nBriefly describe the resolve:\t\t\t\t");
    scanf(" %[^\n]%*c", resolve);
    printf("\nWhat kind of technician are you?:\t\t\t\t");
    scanf(" %[^\n]%*c", technician);
    
    //File Creation

    FILE * fCreate_Record;

    // Opens the file
    fCreate_Record = fopen("RENAME TO DATE.txt", "w");

    // writes to the file
    fprintf(fCreate_Record, "\n\n\t\t\t==================== %s ====================", ctime(&now));


    fprintf(fCreate_Record, "\n\n\t--------------------------------\n");

    fprintf(fCreate_Record, "\nCustomer's first name:\t\t\t\t%s",F_C_name);
    fprintf(fCreate_Record, "\nCustomer's last name:\t\t\t\t%s",L_C_name);
    fprintf(fCreate_Record, "\nCustomer's address:\t\t\t\t%s",C_address);
    fprintf(fCreate_Record, "\nCustomer's item:\t\t\t\t%s",C_item);
    fprintf(fCreate_Record, "\nCustomer's item issue:\t\t\t\t%s",C_itemIssue);
    fprintf(fCreate_Record, "\nTechnician first name:\t\t\t\t%s",T_F_name);
    fprintf(fCreate_Record, "\nTechnician last name:\t\t\t\t%s",T_L_name);
    //fprintf(fCreate_Record, "\nBrief description of issue:\t\t\t\t%s",isssue);
    fprintf(fCreate_Record, "\nResolve:\t\t\t\t%s",resolve);
    //fprintf(fCreate_Record, "\nDeposit:$.2f\t\t\t\t%s",deposit);

    fprintf(fCreate_Record, "\n\n\t--------------------------------\n");


    fprintf(fCreate_Record, "\n\n==================== E N D  O F  R E C O R D  !  ====================");


    //closes file
    fclose(fCreate_Record);

    return;
}

void View_Record()
{
	FILE * fCreate_Record;
	// Opens the file
    fCreate_Record = fopen("RENAME TO DATE.txt", "r");

	char SingleLine [301];

    return;
}

void Append_To_Record()
{


    return;
}

