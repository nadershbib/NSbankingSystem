#include <stdio.h>
char name[35];
long i,id,d,deposit,balance=0;
long identification;
long retry,a=0;
long enter,wishdeposit=0;
long transfer_id,transfermoneyy,transfered=0;
long depositmore,k=0;
long proceed;
void Header(){
    
    printf("*************************************\n");
    printf("*                                   *\n");
    printf("*                                   *\n");
    printf("*   Welcome to NS banking system    *\n");
    printf("*                                   *\n");
    printf("*                                   *\n");
    printf("*                                   *\n");
    printf("*************************************\n");
    printf("\n");
}

void Accountsetup(){
printf("Account set up\n");
printf("------- --- --\n");
printf(" 1) Please enter your name: ");
gets(name);
printf("\n");
printf(" 2) Please enter an ID of 6 numbers you would like to have : ");
scanf("%ld",&identification);
while(1){

  if((identification/100000)<10 && (identification/100000)>0){
    id=i;
    break;
                     }
else{
    printf("\n");
    printf("    Please try again, enter an ID of 6 numbers only : ");
    scanf("%ld",&identification);
    }    
    
}
   printf("\n");                
   printf(" 3) Almost done, now the last step to get your account fully activated is to deposit at least 10$\n");
   printf("\n");
   while(1){
       printf("    Please enter the amount you wish to deposit : ");
       scanf("%ld",&d);
       if(d<10){
           printf("\n");
           printf("    Deposit declined, please deposit at least 10$. \n");
           printf("    Press 1 to redeposit.\n");
           printf("    Press 2 to exit.\n");
           while(1){
           scanf("%ld",&retry);
           if(retry==2){
               printf("\n");
               printf("    Thank you for your cooperation,comeback when you get 10$.");
               a++;
               break;
           }
           else if(retry==1){
               break;
                        }
           
           else{
               printf("    Press 1 to redeposit.\n");
               printf("    Press 2 to exit.\n");
           }
           
           }
           
       }
       else {
           deposit=d;
           balance=deposit;
           printf("\n");
    printf("    Congratulations your account is completely set up now.\n");
    printf("----------------------------------------------------------------\n");
           break;
       }
       if(a==1){
       break;
           
       }
   }
    
    
    
    
}
void checkbalance(){
    
    printf("You currently have %ld$ in your bank account.\n",balance);
    
}

void depositmoney(){
    while(1){
    printf("\n");    
    printf("  Press *1* to proceed or *0* to cancel.\n");
    printf("  Enter number: ");
    scanf("%ld",&proceed); 
    if(proceed==0){
        break;
    }
    else if(proceed==1){
    printf("  Please enter the amount you wish to deposit : ");
    scanf("%ld",&wishdeposit);
    if(wishdeposit<=0){
        printf("Error.\n");
    }
    else{
    printf("\n");
    printf("  You have successfully deposited %ld$ in your bank account\n",wishdeposit);
    balance+=wishdeposit;
    deposit+=wishdeposit;
    printf("\n");
    printf("  Would you like to deposit more?\n");
    }
    }
    
    }
}

void transfermoney(){
    while(1){
    printf("  Press *1* to proceed and *0* to cancel\n");
    printf("  Enter a number : ");
    scanf("%ld",&proceed);
    if(proceed==0){
        break;
    } 
    else if(proceed==1){
    printf("\n");    
    printf("  Please enter the ID number you wish to transfer money to : ");
    scanf("%ld",&transfer_id);
    if( (transfer_id/100000)<10 && (transfer_id/100000)>0 && (transfer_id!=identification) ){
        printf("\n");
        printf("  Please enter the amount of money you wish to transfer : ");
        scanf("%ld",&transfermoneyy);
        if((balance-transfermoneyy)>=0){
            printf("  you have successfully transferred %ld$ to ID number %ld.\n",transfermoneyy,transfer_id);
            balance-=transfermoneyy;
            transfered+=transfermoneyy;
        }
        else if(balance-transfermoneyy<0) {
            printf("\n");
            printf("  Insufficient balance to transfer that amount of money.\n");
            printf("\n");
            printf("  You need to deposit %ld$ to be able to transfer that amount of money.\n",transfermoneyy-balance);
            printf("\n");
            printf("  Would you like to deposit more money?\n");
            while(1){
                printf("\n");
            printf(" Press *1* for deposit\n");
            printf(" Press *2* to cancel the process\n");
            printf(" Please enter a number : ");
            scanf("%ld",&depositmore);
            if(depositmore==1){
                depositmoney();
                if(balance-transfermoneyy>=0){
                    printf("\n");
                    printf("  You can successfully transfer the desired amount now.\n");
                    break;
                }
                else{
                    printf("\n");
                    printf("  You still need %ld$ to be able to transfer that amount of money",transfermoneyy-balance);
                }
            }
            else if (depositmore==2){
                k++;
                break;
            }
            
            
            }
            
        }
            
            
           
    } 
            
        else if(identification==transfer_id){
        printf("\n");
        printf("  You can not transfer money to yourself.Try again.\n");    
            
            
        }
    
    
    else{
        printf("  Please enter an ID number that consists of 6 numbers.\n");
        
    }
    
    }
    
            if(k==1){
        break;
    }
    
    }
    
    }
    
 void receipt(){
     printf("\n");
     printf("\n");
     printf("********************************************************\n");
     printf("*                                                      *\n");
     printf("* Thank you for your cooperation with NS banking system*\n");
     printf("*                                                      *\n");
     printf("********************************************************\n");
     printf("Date:03/24/2020\n");
     printf("---------------\n");
     printf("User Name : %s\n",name);
     printf("-----------\n");
     printf("ID number :%ld\n",identification);
     printf("-----------\n");
     printf("Available Balance :%ld$\n",balance);
     printf("-------------------\n");
     printf("Total amount of money deposited :%ld$.\n",deposit);
     printf("---------------------------------\n");
     printf("Total amount of transferred money : %ld$.\n",transfered);
     printf("-----------------------------------\n ");
     printf("\n");
     printf("It was our pleasure assisting you, feel free to comeback.\n");
     printf("*********************************************************");
     
     
     
     
     
     
     
 }   
    
    
void wishtodo(){
    
    while(1){
    printf("\n");    
    printf("  what do you wish to do next?\n");
    printf("  ---- -- --- ---- -- -- -----\n");
    printf(" Press *1* to check balance.\n");
    printf(" Press *2* to Deposit money.\n");
    printf(" Press *3* to Transfer money.\n");
    printf(" Press *4* to get receipt and exit.\n");
        
    printf(" Please enter a number : ");
    scanf("%ld",&enter);
    printf("\n");
    
    if(enter==1){
        checkbalance();
    }
    
    else if(enter==2){
        depositmoney();
    }
    
    else if(enter==3){
        transfermoney();
    }
    
    else if(enter==4){
        receipt();
        break;
    }
    
    
    
    
    
    
    
    }
    
    
    
    
    
    
    
    
}


    
    
    
    


int main()
{
Header();
Accountsetup();
if (a==0){
    wishtodo();
}
    return 0;
}

