//Advanced C topics
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <windows.h> 
#include <time.h>

//typedef int NUM;//creating a new name NUM for int data type
//typedef can be used to create nicknames for complex data types too
//typedef struct {
//    int x;
//    int y;
//} Point2D;

int main(){
    // //array: a fixed-size sequential collection of elements of the same type
    int numbers[]={10,20,30,40,50};
    char letters[]={'A','B','C','D','E'};
    char name[]="Hello NiggeR";//string is an array of characters ending with null character '\0'
    printf("%c\n",letters[2]);//C
    printf("element at index 0: %d\n",numbers[0]);
    printf("element at index 1: %d\n",numbers[1]);  
    printf("element at index 2: %d\n",numbers[2]);
    printf("element at index 3: %d\n",numbers[3]);
    printf("element at index 4: %d\n",numbers[4]);
    //its very easy to go out of bounds
    //printf("element at index 5: %d\n",numbers[5]);//undefined behavior
    //displaying array using loop
    for(int i=0;i<5;i++){
        printf("element at index %d: %d\n",i,numbers[i]);
    }
    //if size is not known 
    int arr[100];
    int n;
    printf("Enter number of elements (max 100): ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("element at index %d: %d\n",i,arr[i]);
    }
    
    //calculating size of an array and total elements
    char name[]="jojo nigger";
    printf("Size of name array: %lu\n",sizeof(name));//12 bytes (11 characters + 1 null character)
    printf("Size of char data type: %lu\n",sizeof(name[0]));//1 byte
    printf("Total elements in name array: %lu\n",sizeof(name)/sizeof(name[0]));//12 elements
    for (int i=0;i<sizeof(name)/sizeof(name[0])-1;i++){
        printf("%c",name[i]);
    }

    //user input to populate an array
    int arr[50];//array of size 50
    int arr[50]={0};//initialize all elements to 0 

    //inputting values into the array
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);//user inputs value
    }

    //2-D arrays: an array where each element is itself an array
    // array[rows][columns]={{},{},...}

    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};//3x3 matrix
    //displaying 2-D array using nested loops
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    //array of strings
    char fruits[5][10]={"Apple","Banana","Cherry","Date"};//each word is a row and letters are column 
    //it is basically a 2-D char array
    //it can store 9-character strings + 1 null character and 5 such strings 
    int size=sizeof(fruits)/sizeof(fruits[0]);
    for(int i=0;i<size;i++){
        printf("Fruit %d: %s\n",i+1,fruits[i]);
    }
    //excersise
    char name[3][25]={0};
    int size_name=sizeof(name)/sizeof(name[0]);
    for(int i=0;i<size_name;i++){
        printf("Enter name: ");
        fgets(name[i],sizeof(name[i]),stdin);
        //remove newline character if present
        name[i][strlen(name[i])-1]='\0';
    }

    
    printf("\nYou entered:\n");
    for (int i=0;i<size_name;i++){
        printf("Name %d: %s\n",i+1,name[i]);
    }

//ternary operator:- short form of if-else statement
//syntax: condition ? expression_if_true : expression_if_false
    
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    //check if number is even or odd using ternary operator
    (num % 2 == 0) ? printf("%d is even.\n", num) : printf("%d is odd.\n", num);
    
    //typedef: reserved keyword that gives easier names to existing data types(nicknames)
    //typedef existing_data_type new_name;
    //has to be used outside functions, usually at the top of the file
    // NUM a,b,sum;
    // printf("Enter two integers: ");
    // scanf("%d %d",&a,&b);
    // sum=a+b;
    // printf("Sum: %d\n",sum);

    //enums: user-defined data type consisting of named integer constants
    //syntax: enum enum_name {constant1, constant2, ..., constantN};
    //defined outside functions, usually at the top of the file
    // enum Day {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
    // enum Day today = WEDNESDAY;
    //printf("Day number: %d\n", today); // Outputs: Day number: 3

    
    return 0;

    

}