//THIS CONTINUES FROM THE LAST EDITED FILE d1.c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <windows.h> 
#include <time.h>


//global scope variable:- when variable is declared outside any function it is called global scope variable and can be accessed by any function in the file
// int result=0;//hard to debug and maintain

//Functions
void print_greeting(char name[]){ //parameters
    printf("Hello, %s! Welcome to the C programming world!\n", name);
}

int calculate_sum(int a, int b){ 
    return a + b; //return value
}

int add(int a, int b){
    int result = a + b;
    return result;
}

//function prototypes (declaration)
//provides information to the compiler about a function before its actual definition
// enables functions to be called before they are defined in the code
//improves code organization by separating interface from implementation and prevents errors related to implicit function declarations
void hello(char name[],int age); //function prototype


int main(){
    char name[50]="";
    printf("enter your name: ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0'; //remove newline character
    print_greeting(name);//arguments



//return = return value from function when you call
    int a = 5;
    int b = 10;
    int sum = calculate_sum(a, b); //function call
    printf("Sum of %d and %d is %d\n", a, b, sum);

//variable scope

    // int x = 10; 
    // int x=20; //error: redeclaration of 'x'

//     d2.c: In function 'main':
// d2.c:36:9: error: redefinition of 'x'
//    36 |     int x=20;
//       |         ^
// d2.c:35:9: note: previous definition of 'x' with type 'int'
//    35 |     int x = 10;
//       |         ^
    

    int result = add(7, 3);
    printf("Result of addition: %d\n", result); //variables declared in separate functions do not conflict they each are local scope
    hello("Alice",30);


    //while loops 
    //continues until condition is false and condition must be true to enter the loop
    //best for user inputs when number of iterations is not known beforehand
    int num=0;
    while(num<5){
        printf("Number: %d\n",num);
        num++;
    }

    //for loops repeats a block of code a specific number of times
    //best when number of iterations is known beforehand
    //for(initialization; condition; increment/decrement)

    for(int i=0;i<5;i++){
        printf("Iteration %d\n",i);
        Sleep(1000); // Pause for 1 second (from windows.h)
    }

    //break and continue statements
    // break: break out of the loop entirely(Stop)
    //continue: skip the current iteration and move to the next one(Skip)

    for(int i=0;i<10;i++){
        if(i==5){
            break; //exits the loop when i is 5
            
        }
        printf("Value: %d\n",i);
    }

    for (int i=0;i<10;i++){
        if(i%2==0){
            continue; //skips even numbers
        }
        printf("Odd Value: %d\n",i);
    }

    //nested loops 
    //loop inside another loop
    
    for(int j=0;j<3;j++){
        for(int i=1;i<=10;i++){ //outer loop
        printf("%d ",i);
        
        }
        printf("\n"); //new line after inner loop completes
    }

    //pattern printing using nested loops
    char symbol='\0';
    int rows=0;
    int columns=0;

    printf("Enter a symbol to use for pattern: ");
    scanf("%c",&symbol);
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    printf("Enter number of columns: ");
    scanf("%d",&columns);
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("%c ",symbol);
            
        }
        printf("\n");
    }

    //psuedo-random number generation
    srand(time(NULL)); //seed the random number generator with current time
    printf("Generating 5 random numbers between 1 and 100:\n");
    for(int i=0;i<5;i++){   
        int randomNum = (rand() % 100) + 1; //generate random number between 1 and 100 **For max and min values replace 100 and 1 respectively with (max-min +1)+min**
        printf("%d\n",randomNum);
    }


    //random number guessing game
    srand(time(NULL)); //seed the random number generator with current time
    int guess=0;
    int tries =0;
    int min=1;
    int max=50;
    int randomNumber = (rand() % (max - min + 1)) + min; //generate random number between min and max
    printf("_______Welcome to the Number Guessing Game!________\n");
    printf("\nI have selected a number between %d and %d. Can you guess it?\n",min,max);
    while(guess!=randomNumber){
        printf("Enter your guess: ");
        scanf("%d",&guess);
        tries++;
        if(guess<randomNumber){
            printf("Too low! Try again.\n");
        }
        else if(guess>randomNumber){
            printf("Too high! Try again.\n");
        }
        else{
            printf("Congratulations! You guessed the number %d in %d tries.\n",randomNumber,tries);
        }
    }


    return 0;
}







void hello(char name[],int age){
    printf("Hello, %s! You are %d years old.\n",name,age);
}

//Just after main function and below is error messages as compiler sees no prior declaration of hello function
// d2.c: In function 'main':
// d2.c:61:5: error: implicit declaration of function 'hello'; did you mean 'ftello'? [-Wimplicit-function-declaration]
//    61 |     hello("Alice",30);
//       |     ^~~~~
//       |     ftello
// d2.c: At top level:
// d2.c:64:6: warning: conflicting types for 'hello'; have 'void(char *, int)'
//    64 | void hello(char name[],int age){
//       |      ^~~~~
// d2.c:61:5: note: previous implicit declaration of 'hello' with type 'void(char *, int)'
//    61 |     hello("Alice",30);
//       |     ^~~~~
// PS E:\coding\CP>
