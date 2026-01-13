#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#define M_PI 3.14159265358979323846

int main(){

    /*l1 
    nigga
    */
    printf("Hello, niggeR!\n");

//L2 variable
//A reusable container for a value.
//Behaves as if it were the value it contains.
// int whole numbers (4 bytes in modern systems)
// float = single-precision decimal number (4 bytes)
// double double-precision decimal number (8 bytes)
// char = single character (1 byte)
// char[] = array of characters (size varies)
// bool = true or false (1 byte, requires <stdbool.h

    int age=20;
    float gpa =2.5;
    char grade='A';
    char name[]="NIGGA";
    bool isOnline=true;
    printf("You are %d years old\n", age);
    printf("Your GPA is %.1f\n", gpa);
    printf("Your grade is %c\n", grade);
    printf("Your name is %s\n", name);
    printf("Online status: %s\n", isOnline ? "true" : "false");
//L3
    /*
    format specifiers 
    */
    int age_1=20;
    float price =22.55;
    char name_1[]="nigga";
    printf("%d\n",age_1);
    printf("%f\n",price);
    printf("%s\n",name_1);
    //width
    int num1=5;
    int num2=5000;
    int num3=5000000;
    printf("%10d\n",num1);
    printf("%010d\n",num2);
    printf("%+d\n",num3);
    //precision
    float num4=3.14159265359;
    printf("%+.4f\n",num4);
    //flags
    float num5=12345.6789;
    printf("%+010.2f\n",num5);

    //user input
    //always initialize variables and also specify the null values to prevent undefined behavior
    int year = 0;
    float grade_1 = 0.0f;
    char gpa_1= '\0';
    char color[20] = "";

    printf("Enter your birth year: ");
    scanf("%d", &year);
    printf("Enter your grade: ");
    scanf("%f", &grade_1);
    printf("Enter your gpa: ");
    scanf(" %c", &gpa_1);// space before %c to consume any leftover whitespace 
    //getchar(); // alternative to consume leftover newline character
    printf("Enter your favorite color: ");
    scanf("%19s", color); // limit input to prevent buffer overflow also if used space it stops at space
    //fgets(color, sizeof(color), stdin); // alternative to read string with spaces
    //name[strlen(name)-1] = '\0'; // remove newline character if using fgets

    printf("You were born in %d\n", year);
    printf("Your grade is %.2f\n", grade_1);
    printf("Your gpa is %c\n", gpa_1);
    printf("Your favorite color is %s\n", color);


//p1 shopping cart
    char item[50]="";
    float price = 0.0f;
    int quantity = 0;
    int budget = 0;
    char currency = '$';

    printf("Enter your budget: ");
    scanf("%d", &budget);
    printf("Enter the item name: ");
    fgets(item, sizeof(item), stdin);//using fgets to allow spaces in item name
    //else just use scanf("%49s", item);
    item[strlen(item)-1] = '\0'; // remove newline character
    printf("Enter the item price: ");
    scanf("%f", &price);
    printf("Enter the quantity: ");
    scanf("%d", &quantity);
    if (price * quantity > budget) {
        printf("Insufficient budget to complete the purchase Brokiee.\n");
        return 1;

    }
    else{
        float total = price * quantity;
        printf("You bought %d %s(s) at %.2f %c each.\n", quantity, item, price, currency);
        printf("Total cost: %.2f %c\n", total, currency);
        printf("Remaining budget: %.2f %c\n", budget - total, currency);
    }
    printf("Thank you for shopping!\n");

    //p2 Mad Libs
    char noun[30]="";
    char verb[30]="";
    char adjective1[30]="";
    char adjective2[30]="";
    char adjective3[30]="";

    printf("enter a adjective: ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1)-1] = '\0'; // remove newline character
    printf("enter a noun: ");
    fgets(noun,sizeof(noun), stdin);
    noun[strlen(noun)-1] = '\0'; // remove newline character
    printf("enter a adjective: ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2)-1] = '\0'; // remove newline character
    printf("enter a verb: ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb)-1] = '\0'; // remove newline character
    printf("enter a adjective: ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3)-1] = '\0'; // remove newline character
    printf("Today I went to the park and saw a %s %s. It was very %s and made me want to %s. Overall, it was a %s experience!\n", adjective1, noun, adjective2, verb, adjective3);

    //math functions
    int num = -5;
    printf("Absolute value of %d is %d\n", num, abs(num));
    float num_1 = 3.7f;
    printf("Ceiling of %.2f is %.2f\n", num_1, ceil(num_1));
    printf("Floor of %.2f is %.2f\n", num_1, floor(num_1));
    float base = 2.0f;
    float exponent = 3.0f;
    printf("%.2f raised to the power of %.2f is %.2f\n", base, exponent, pow(base, exponent));
    float number = 16.0f;
    printf("Square root of %.2f is %.2f\n", number, sqrt(number));
    printf("logarithm base 10 of %.2f is %.2f\n", number, log10(number));
    printf("sine of 30 degrees is %.2f\n", sin(30 * (3.14159265 / 180.0))); // converting degrees to radians
    
    //p3 circle area and circumference
    float radius = 0.0f;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float area = M_PI * pow(radius, 2);
    float circumference = 2 * M_PI * radius;
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    //p4 compund interest
    // How to calculate compound interest 
    // Step 1 : Convert the interest rate from a percentage to a decimal by dividing it by 100.
    // Step 2 : Add 1 to the decimal interest rate.
    // Step 3 : Raise the result to the power of the number of compounding periods (n) multiplied by the number of years (t).
    // Step 4 : Multiply the principal amount (P) by the result from Step 3 to get the final amount (A).
    // formula : A = P (1 + r/n)^(nt) where A is the final amount, P is the principal amount, r is the annual interest rate (decimal), n is the number of times interest is compounded per year, and t is the number of years.

    float principal = 0.0f;
    float annualRate = 0.0f;
    int timesCompounded = 0;
    int years = 0;
    printf("\n________________COMPOUND INTEREST CALCULATOR________________\n");

    printf("\nEnter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &annualRate);
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &timesCompounded);
    printf("Enter the number of years the money is invested: ");
    scanf("%d", &years);
    float rateDecimal = annualRate / 100.0f;
    float amount = principal * pow((1 + rateDecimal / timesCompounded), (timesCompounded * years));
    printf("The final amount after %d years is: %.2f\n", years, amount);

   // if statements
    int age = 0;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("You are an adult.\n"); 
    } 
    else if (age >= 13) {
        printf("You are a teenager.\n"); //order of if and else if matters (which condition is checked first will be executed first)
    }
    else if (age >= 3) {
        printf("You are a child.\n");
    }
    else {
        printf("You are a minor.\n");
    }

    char name[50]="";
    printf("enter your name: "); 
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0'; //remove newline character
    if (strlen(name) == 0){
        printf("You didn't enter a name.\n");
    }
    else{
        printf("Hello, %s!\n",name);
    }

    //switch statements (alternative to multiple if-else for discrete values)
    int day = 0;
    printf("Enter a number (1-7) for the day of the week: ");
    scanf("%d", &day);
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    //nested if statements
    float price = 10.0f;
    bool isStudent = false;
    bool isSenior = true;
    if(isStudent){
        if (isSenior){
            printf("Applying student discount of 10%%\n");
            printf("Applying senior discount of 20%%\n");
            price *= 0.7f; // 30% discount for senior students
        }
        else{
            printf("Applying student discount of 10%%\n");
            price *= 0.9f; // 10% discount for students
        }
        
    }else{
        if (isSenior){
            printf("Applying senior discount of 20%%\n");
            price *= 0.8f; // 20% discount for seniors
        }
        else{
            printf("No discounts applicable.\n");
        }
    }
    printf("Final price: %.2f\n", price);


    //logical operators
    //&& (AND), || (OR), ! (NOT)
    int a = 0;
    int b = 0;
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    if (a > 0 && b > 0) {
        printf("Both a and b are positive numbers.\n");
    }else if(a > 0 || b > 0){
        printf("At least one of a or b is a positive number.\n");
    }else{
        printf("Neither a nor b is a positive number.\n");
    }




    return 0;
}
