//Continued from d2.c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <windows.h>

void checkBalance(float balance);
float deposit(float amount);
float withdraw(float amount);

int main(){
    int choice = 0;
    float balance = 0.0f;
    float amount = 0.0f;
    float amount_w = 0.0f;
    printf("_______________Welcome to the Mini Banking System!_______________\n");
    do{
        printf("\nPlease choose an option:\n");
        printf("1. Check Balance\n");   
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                checkBalance(balance);
                break;
            case 2:
                printf("Enter the amount to deposit: ");
                scanf("%f",&amount);
                balance += deposit(amount);
                checkBalance(balance);
                break;
            case 3:
                printf("Enter the amount to withdraw: ");
                scanf("%f",&amount_w);
                if(amount_w>balance){
                    printf("Insufficient balance! Withdrawal failed.\n");
                }
                else{
                    balance -= withdraw(amount_w);
                }
                checkBalance(balance);
                break;
            case 4:
                printf("Thank you for using the Mini Banking System. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
        }
    }while(choice!=4);
    return 0;
}


void checkBalance(float balance){
    printf("Your current balance is: $%.2f\n", balance);
}

float deposit(float amount){
    if (amount <= 0.0f){
        printf("Invalid deposit amount! Deposit failed.\n");
        return 0.0f;
    }
    else{
        printf("Successfully deposited $%.2f\n", amount);
    }

    return amount;
}

float withdraw(float amount){
    if (amount <= 0.0f){
        printf("Invalid withdrawal amount! Withdrawal failed.\n");
        return 0.0f;
    }
    else{
        printf("Successfully withdrawn $%.2f\n", amount);
    }
    return amount;
}