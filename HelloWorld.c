#include <stdio.h>
#include <string.h>
#include <math.h>

//tenary operator

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

// function to print user name and message

void wish() {
    char wisher[50];
    char myWish[500];

    printf("What is your Name? ");
    fgets(wisher, 50, stdin);

    while(getchar()!= '\n');

    printf("What is your Wish? ");
    fgets(myWish, 500, stdin);

    printf("%s from %s", myWish,wisher);

};

// get square root of any number

int square() {
    int num;
    printf("Enter the number you want to find its square root: ");
    scanf("%d", &num);

    int result = num * num;

    printf("The square root of %d is %d \n", num, result);
}

// And operator &&
int myAnd() {
    int num1;
    int num2;

    printf("enter num1: ");
    scanf("%d", &num1);

    while(getchar() != '\n');

    printf("enter num2: ");
    scanf("%d", &num2);

    if(num1 == 1 && num2 == 2) {
        printf("Password unlocked \n");
    } else {
        printf("incorrect password, please retry. \n");
    }

};

// OR operator ||

int myOr() {
    char capital[50];

    printf("what is the capital of Nigeria? ");
    scanf("%s", &capital);

    capital[50] = toupper(capital);
    if(capital == 'abuja' || 'fct') {
        printf("You're correct \n");
    } else {
        printf("try again \n");
    }
};

int calculator() {
    double num1;
    double num2;
    char operator;
    int result;

    printf("enter num1: ");
    scanf("%lf", &num1);

    while(getchar() != '\n');

    printf("enter operator (+, -, *, /): ");
    scanf("%c", &operator);

    while(getchar() != '\n');

    printf("enter num2: ");
    scanf("%lf", &num2);

    switch(operator){
    case '+':
        result = num1 + num2;
        printf("Result is %d \n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Result is %d \n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("Result is %d \n", result);
        break;
    case '/':
        result = num1 / num2;
        printf("Result is %d \n", result);
        break;
    default:
        printf("enter a valid operator (+, -, *, /) \n");
    }
    return 0;
}


int add() {
    // if else statement
    int A;
    int B;
    char operator;

    printf("Enter num1: ");
    scanf("%d", &A);

    while (getchar() != '\n');

    printf("Enter operator: ");
    scanf("%c", &operator);

    printf("Enter num2: ");
    scanf("%d", &B);

    int result;

    if(operator == '+') {
        result = A + B;
    } else if (operator == '-') {
        result = A - B;
    }

    printf("Result:  %d \n", result);
}

// switch statement

int myGrade() {
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);

    grade = toupper(grade);

    switch(grade) {
    case 'A':
        printf("You did well \n");
        break;
    case 'B':
        printf("You passed \n");
        break;
    case 'C':
        printf("you tried \n");
        break;
    case 'D':
        printf("you need to buckle up \n");
        break;
    case 'F':
        printf("you Failed \n");
        break;
    default:
        printf("not a valid grade");
    }
}



int User() {
    char userName [50];
    printf("What is your name?");
    fgets(userName, 50, stdin);
    printf("WELCOME %s", userName);
}


int main() {
    int max = findMax(40, 7);
    printf("the maximum number is %d",max);
    while(getchar()!= '\n');
    wish();
    while(getchar()!= '\n');
    square();
    while(getchar() != '\n');
    myOr();
    while(getchar() != '\n');
    myAnd();
    while(getchar() != '\n');
    calculator();
    while(getchar() != '\n');
    myGrade();
    while(getchar() != '\n');
    add();
     while (getchar() != '\n');
    User();
    /* int age;    prompt for age
    printf("what is your age? ");
    scanf("%d", &age);
    char name[] = "David Amajuoyi";
    int age = 19;
    char grade = 'A';
    char career[] = "Software engineer";
    char school[] = "42 Wolfsburg";
    float gpa = 1.5;
    printf("My name is %s, \n i'm %d years old, \n my grade is %c, \n my career is \"%s\", \n my school name is \"%s\", \n and my gpa is %.1f. ", name,age,grade,career,school, gpa);
    */
    return 0;
}




