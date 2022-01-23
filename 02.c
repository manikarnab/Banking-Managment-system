///                                   BANKING MANAGMENT PROJECT USING C PROGRAMING                                                           ///

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void login();
void mainmenu();
void update_acc_open();
void transaction();
void detalis();
void remove_existing_acc();
void create_account();
void new_customer_list();
void atm_features();
void main(){
    //clrscr();
    printf("\n\n\t\tWelcome to banking managment system\n");
    printf("\n\t\tpress any key to continue.....\n");
    getch(); 
    login();
    
} 
void login()
{
    char user[50],pass[15];
    //clrscr();
    lineno19:
    printf("\n\t\t*****LOG IN*****");
    printf("\n\t\tEnter user name :");
    gets(user);  
    printf("\n\t\tEnter password :");
    gets(pass);

    if(strcmp(user,"arnab@123")==0){
         if(strcmp(pass,"bank123")==0){
            printf("\n\t\tLog in sucesssful \n");
            printf("\n\t\tpress any key to continue......\n");
           mainmenu();
            getch();
           
        }
    else{
        printf("\n\t\tInvalid password...");
        printf("\n\t\tpress any key......\n");
        getch();
    }
    }
  else
   {

    printf("\n\t\t Invalid user name\n");
    printf("\n\t\tPress any key....");
    getch();
    goto lineno19;
   }
}
void mainmenu()
{ 
    int choice;
 lineno50:
    
   printf("\n\t\t\xb2 --: MAIN MENU :-- \n");
   printf("\n\t\t [1] Create an account \n\n");
   printf("\n\t\t [2] Update Information Of existing account \n\n");
   printf("\n\t\t [3] Transactions \n\n");
   printf("\n\t\t [4] Check details of existing account \n\n");
   printf("\n\t\t [5] Remove existing account \n\n");
   printf("\n\t\t [6] View customer list \n\n");
   printf("\n\t\t [7] ATM features \n\n");
   printf("\n\t\t [8]Exit \n\n");


   
   printf("\nEnter your choice :");
   scanf("%d",&choice);

   
   switch (choice)
   {
     case 1:
       create_account();
       goto lineno50;
       break;
   case 2:
       update_acc_open();
       goto lineno50;
       break;
   case 3: 
       transaction();
       goto lineno50;
       
       break;
   case 4:
        detalis();
       goto lineno50;
       
       break;
   case 5:
       remove_existing_acc();
       goto lineno50;
       break;
    case 6: 
         new_customer_list();
         goto lineno50;
       break;
    case 7:
        atm_features();
         goto lineno50;
         break;
    case 8:
    printf("\n\t\t Thanks for visiting...");
    printf("\n\t\tprees any key to exit.........\n");
    getch();
    exit(0);
       break;
   default:
   printf("\n\t\tInvalid selection..\nPlease choice a vaild choice.");
   printf("\n\t\tChoice any key...");
   getch();
   goto lineno50;
       break;
   }
}
void update_acc_open(){
    int n;
    printf("\n\t\t-:Update Information Of Existing account:-\n");
    exit(0);
}
void transaction(){
  printf("\n\t\t-:Transaction:-\n");
  
    exit(0);

}
void detalis(){
  printf("\n\t\t-:Check The Details Of existing Account :-\n");
    exit(0);

}
void remove_existing_acc(){
  printf("\n\t\t-:Remove Existing account:-\n");
    exit(0);

}

void new_customer_list(){
  printf("\n\t\t-:View customer  List:-\n");
    exit(0);

}
void atm_features(){
  printf("\n\t\t-:Atm features:-\n");
    exit(0);

}
void create_account(){
  printf("\n\t\t-:Create An Account:-");
  exit(0);
}
