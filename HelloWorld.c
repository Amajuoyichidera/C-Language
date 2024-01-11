#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

// function to copy the given amount of string
void ft_numStrCpy(char *src, char *dest, int n) {
    while(n > 0 && *src) {
        *dest++ = *src++;
        n--;
    }
    return dest;
}

// function to copy the whole string
void ft_strcpy(char *src, char *dest) {
    while(*src) {
        *dest++ = *src++;
    }
    return dest;
}

//function to print number in reversed order
void ft_rev_int_tab(int *tab, int size) {
    int start = 0;
    int end = size - 1;
    int tmp;

    while (start <= end) {
        tmp = tab[start];
        tab[start] = tab[end];
        tab[end] = tmp;
        start++;
        end--;
    }
}
//function to calculate the length of a given string
void ft_strlen(char * myString) {
    int length = 0;
    char *stringPointer = myString;
    while(*myString) {
        length++;
        myString++;
    }
    printf("The length of %s is %d",stringPointer,length);
}

// function to output string
void ft_putString(char *myString) {
    while(*myString) {
        write(1, myString, 1);
        myString++;
    }
}

//
void ft_ultimate_div_mod(int *a, int *b) {
    int temp = *a / *b;
    *a = *a % *b;
    *b = temp;
    printf("The result of the division is %d, and the remainder is %d", temp, *a);
}

// function that accept two numbers, divides the first number with the second and gives u the result and also the modulues
void ft_div_mod (int a, int b) {
    int result = a / b;
    int remainder = a % b;
    printf("result is %d and the remainder is %d", result, remainder);
}
// pointer
void my_pointer() {
    int num = 20;
    int *numPointer;
    numPointer = &num;

    printf("the value of num is %d", *numPointer);
}

void my_pointer2() {
    int numbers[] = {10, 20, 30};
    int *numPointer = numbers;

    for(int a = 0; a < 3; a++) {
        printf("a: %d, num: %d \n", a,*numPointer);
        numPointer++;
    }

}
// swap
void ft_swap(int a, int b) {
    int temp;
    temp = a;
    a = temp;
    printf("a: %d, b: %d", a,b);
}

void ft_ft(int *nbr)
{
	*nbr = 42;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	else if (nb == 0)
		ft_putchar(nb + '0');
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb >= 1 && nb <= 9)
		ft_putchar(nb + '0');
}

// print all unique combination of two number
void ft_print_comb2() {
    for(int a = 0; a <=9; a++) {
        for(int b = a + 1; b <= 9; b++) {
            char combo[3];
            combo[0] = a + '0';
            combo[1] = b + '0';
            combo[2] = '\n';

            write(1, combo, 3);
        }
    }
}

// print three character
void ft_print_three(char first, char second, char third) {
    write(1, &first, 1);
    write(1, &second, 1);
    write(1, &third, 1);
    write(1, ", ", 2);
}

// print all unique combinations of three digits in ascending order.
void ft_print_comb() {
    for(int a = 0; a <=9; a++) {
        for(int b = a + 1; b <= 9; b++) {
            for(int c = b + 1; c <= 9; c++) {
                char combination[4];
                combination[0] = a + '0';
                combination[1] = b + '0';
                combination[2] = c + '0';
                combination[3] = '\n';

                write(1, combination, 4);
            }
        }
    }
}


// print negative or positive number
void ft_negative_number(int number) {
    if(number >=0) {
        write(1, "Positive" , 8);
    } else {
        write(1, "Negative", 8);
    }
}

// print char
void ft_print_char(char alphabet) {
    write(1, &alphabet, 1);
}

// print alphabet
void ft_print_alphabet() {
    char letter = 'A';
    while(letter <= 'Z') {
        write(1, &letter, 1);
        letter++;
    }
}

//print reverse alphabet
void ft_print_reverse_alphabet() {
    char letter = 'Z';
    while(letter >= 'A') {
        write(1, &letter, 1);
        letter--;
    }
}

void print_char(int number) {
    number += '0';
    write(1, &number, 1);
}

//print number
void ft_print_number() {
    int number = 0;
    while(number <= 9) {
        print_char(number);
        number++;
    }
}


int main() {
    char name[] = "Amajuoyi chideraa david";
    char destination[30];
    //ft_strcpy(name,destination);
    ft_numStrCpy(name,destination,6);
    printf("%s",destination);
    //int myNum[] = {1,2,3,5,8};
    //int numSize = sizeof(myNum) / sizeof(myNum[0]);
    //ft_rev_int_tab(myNum, numSize);
    //printf("Reversed Array: ");
    //for (int i = 0; i < numSize; i++) {
        //printf("%d ", myNum[i]);
   // }
   // printf("\n");
    //char myName[] = "Amajuoyi Chidera David";
    //ft_strlen(myName);
    //ft_putString(&myName);
    //int number = 10;
    //int divider = 4;
    //ft_ultimate_div_mod(&number, &divider);
    //int a;
    //int b;
    //printf("Enter first number: ");
   // scanf("%d", &a);
    //while(getchar() != '\n');
    //printf("Enter second number: ");
   // scanf("%d", &b);
   // ft_div_mod(a,b);
    //my_pointer();
    //my_pointer2();
    //int a = 10;
    //int b = 20;
    //ft_swap(a, b);
   // ft_putnbr(-1000);
   // ft_print_comb2();
    //ft_print_comb();
    //ft_print_three('1', '2', '3');
   // ft_print_comb();
   // ft_negative_number(1);
    //ft_print_number();
    // ft_print_reverse_alphabet();
    //ft_print_alphabet();
    //ft_print_char('V');
    return 0;
}


/*
// number guessing game

void myGame() {
    srand(time(0));
    int number = rand() % 11;
    int numberGuessed;
    int guesses;


    do {
        printf("Guess a number between 1 to 10: ");
        scanf("%d", &numberGuessed);
        if(numberGuessed > number) {
            printf("The number you entered is too high \n");
        } else if (numberGuessed < number) {
             printf("The number you entered is too low \n");
        } else {
            printf("You're correct \n");
        }
        guesses ++;
    } while (numberGuessed != number);

    printf("***************** \n");
    printf("The answer is %d \n", number);
    printf("You guessed %d times \n", guesses);
    printf("***************** \n");
};

// array of structs

struct Student {
    char name[50];
    float gpa;
};

void myArrayOfStructs() {
    struct Student student1 = {"David", 5.0};
    struct Student student2 = {"Joshua", 4.5};
    struct Student student3 = {"micheal", 4.0};
    struct Student student4 = {"Angel", 4.0};

    struct Student students[] = {student1,student2,student3,student4};

    for(int a = 0; a < sizeof(students) / sizeof(students[0]); a++) {
        printf("%s\t", students[a].name);
        printf("%.1f\n", students[a].gpa);
    }
}

// typedef

typedef char name[200];

void myTypedef() {
    name name1 = "obinna";
    name password = "ikedinmA1234";
    printf("Welcome %s, your password is %s", name1,password);
}

// struct

// struct without typedef
struct Gamers {
    char player[100];
    int score;
};

void myStruct() {
    struct Gamers player1;
    strcpy(player1.player, "David Amajuoyi");
    player1.score = 20;

    printf("Hello %s your score is %d",player1.player, player1.score);
}

// struct with typedef

typedef struct {
    char name[100];
} house;

void myTypedefStruct() {
    house type1;
    strcpy(type1.name, "Duplex");
    house type2;
    strcpy(type2.name, "Bungalow");

    printf("The houses we have for sale are %s and %s.",type1.name, type2.name);
}

// swap values

int mySwap() {
    char first[] = "David";
    char second[] = "Kingsley";
    char third[20];

    strcpy(third, first);
    strcpy(first, second);
    strcpy(second, third);

    printf("First: %s \n  Second: %s", first, second);
}
// array

int myArray() {
    char items[][10] = { "beans", "rice", "plantain", "bread", "paw-paw", "mango", "orange" };
    strcpy(items[0], "okpa");
    for(int i = 0; i < sizeof(items)/sizeof(items[0]); i++) {
    printf("%s \n", items[i]);
}
}

// nested loop
int myNest() {
    for(int a = 1; a <= 12; a++) {
        for(int b = 1; b <= 12; b++) {
            printf("%d x %d = %d \n", a,b, a * b);
        }
    }
}

// do while loop
int myDoWhileLoop() {
    int first = 0;

     do {
        first++;
        printf("%d", first);
    } while(first < 10);
}

// while loop

int myWhileLoop() {
    char password[50];
    printf("Enter your password: ");
    fgets(password, 50, stdin);

    while(strlen(password) <=3 ) {
        printf("Enter something longer than 3 \n");
        printf("Enter your password: ");
        fgets(password, 50, stdin);
    }

    printf("Your password is %s \n", password);
}
// for loop

int myForLoop(){
    for(int a = 1; a <=10; a++) {
        printf("a is %d \n", a);
    }
}

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
    myGame();
    while(getchar() != '\n');
    myArrayOfStructs();
    while(getchar() != '\n');
    myTypedefStruct();
    while(getchar() != '\n');
    myTypedef();
    while(getchar() != '\n');
    myStruct();
    while(getchar() != '\n');
    mySwap();
    while(getchar() != '\n')
    myArray();
    while(getchar() != '\n')
    myNest();
    while(getchar() != '\n');
    myDoWhileLoop();
    while(getchar() != '\n');
    myWhileLoop();
    while(getchar() != '\n');
    myForLoop();
    while(getchar()!= '\n');
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
   // return 0;
//}




