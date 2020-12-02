#include<stdio.h>
#include<conio.h>
#include<string.h>
void createaccount();
void deposit();
void withdraw();
void accountdetails();

struct account{
    char name_of_the_acc_holder[20];
    int acc_no;
    int amount;
    char bank_name[50];
    char branch_name[40];
    int pin;
}; struct account accountinfo;


int main(){
    int choice;
    while(1){
    printf("\n");
    printf("\n");
    printf("\n1.createaccount");
    printf("\n2.Cash deposit");
    printf("\n3.cash withdraw");
    printf("\n4.view account details");
    printf("\n5.Exit");
    printf("\nEnter your choice");
    scanf("%d",&choice);
    switch(choice){
        case 1:createaccount();break;
        case 2:deposit();break;
        case 3:withdraw();break;
        case 4:accountdetails();break;
        case 5:return 0;
        default:printf("\nWRONG CHOICE");break;
    }

   
    }
    
    return 0;
}

void createaccount(){
   char name[20];
   int your_acc_no=1234;
   int amount=0;
   char branch[50];
   char bankname[50];
   int pin;
   //creation section

   printf("\nEnter your name for the creation of your account:\n");
   scanf("%s",&name);
   strcpy(accountinfo.name_of_the_acc_holder,name);
   printf("\nenter your bank name which you want to open account\n");
   scanf("%s",&bankname);
   strcpy(accountinfo.bank_name,bankname);
   printf("\nEnter your branch name \n");
   scanf("%s",&branch);
   strcpy(accountinfo.branch_name,branch);
   printf("\nEnter your four digit pin to link with your account");
   scanf("%d",&pin);
   accountinfo.pin=pin;
   accountinfo.amount=amount;
   accountinfo.acc_no=your_acc_no;

   //end of creaton section

   //printing section

   printf("\nyour name in our files is recorded as: %s",accountinfo.name_of_the_acc_holder);
   printf("\nyour account number is: %d",accountinfo.acc_no);
   printf("\nyour account balance is %d",accountinfo.amount);
   printf("\nyou are banking through the bank: %s",accountinfo.bank_name);
   printf("\nyour home branch is: %s",accountinfo.branch_name);
   printf("\nYour pin number for ATM transcations is:%d",accountinfo.pin);
   printf("\n");
   printf("\n");
   printf("\nACCOUNT STATUS:UP AND RUNNING\n");

   //end of printing section
}


void deposit(){
    int acc_no;
    int pin;
    int depositamt;
    int choice;
    printf("\nEnter your account no:");
    scanf("%d",&acc_no);
    printf("\nEnter your pin number");
    scanf("%d",&pin);
    if(acc_no==accountinfo.acc_no && pin==accountinfo.pin){
        printf("\nEnter the amount you want to deposit");
        scanf("%d",&depositamt);
        printf("\nyour previous account balance was %d",accountinfo.amount);
        accountinfo.amount+=depositamt;
        printf("\nYour updated account balance is %d",accountinfo.amount);
        printf("\n");
        printf("\n");
        printf("\nDEPOSIT SUCCESSFULL");
        }
    else{
    printf("\nYOUR PIN WAS WRONG OR ACCOUNT DOES NOT EXIST");
    printf("\n1.Createaccount");
    printf("\nEnter your choice");
    scanf("%d",&choice);
     switch(choice){
         case 1:createaccount();break;
         default:printf("\nEnd of your banking session");


           
     }
               
     
    }
}


void withdraw(){
    int acc_no;
    int pin;
    int withdrawamt;
    int choice;
    printf("\nEnter your account no:");
    scanf("%d",&acc_no);
    printf("\nEnter your pin number");
    scanf("%d",&pin);
    if(accountinfo.acc_no==acc_no && accountinfo.pin==pin){
         printf("\nEnter the amount you want to withdraw");
        scanf("%d",&withdrawamt);
       if(accountinfo.amount<withdrawamt){
           printf("\nINSUFFICIENTBALANCE");
       }
       else{
           printf("\nYour previous account balance was %d",accountinfo.amount);
           accountinfo.amount-=withdrawamt;
           printf("\nYour withdrawn amount is %d",withdrawamt);
           printf("\nYour current balance is %d",accountinfo.amount);
           printf("\n");
           printf("\n");
           printf("\nWITHDRAW SUCCESSFULL");

       }

    }
    else{
    printf("\nYOUR PIN WAS WRONG OR ACCOUNT DOES NOT EXIST");
    printf("\n1.Createaccount");
    printf("\nEnter your choice");
    scanf("%d",&choice);
     switch(choice){
         case 1:createaccount();break;
         default:printf("\nEnd of your banking session");

    }  
}
}

void accountdetails(){
    printf("\nyour name in our files is recorded as: %s",accountinfo.name_of_the_acc_holder);
   printf("\nyour account number is: %d",accountinfo.acc_no);
   printf("\nyour account balance is %d",accountinfo.amount);
   printf("\nyou are banking through the bank: %s",accountinfo.bank_name);
   printf("\nyour home branch is: %s",accountinfo.branch_name);
   printf("\nYour pin number for ATM transcations is:%d",accountinfo.pin);
   printf("\n");
   printf("\n");
   printf("\nACCOUNT STATUS:UP AND RUNNING\n");

}
