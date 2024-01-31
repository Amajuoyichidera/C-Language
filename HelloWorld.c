#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>



//function to calculate the length of a string
int ft_str_len(char *str) {
    int length = 0;
    while(*str) {
        length++;
        str++;
    }
    return length;
}
//function to put string
void ft_put_string(char *str) {
    while(*str) {
        write(1, str, 1);
        str++;
    }
}
//ft_ultimate_div_mod
ft_ultimate_div_mod(int *a, int *b) {
    int temp = *a / *b;
    *b = *a % *b;
    *a = temp;
}
//ft_div_mod
void ft_div_mod(int a, int b, int *div, int *mod) {
    *div = a / b;
    *mod = a % b;
}
//function to swap
void ft_swap(char *str1, char *str2) {
    char temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}
//ft_ft_ultimate
void ft_ft_ultimate(int *********num) {
    *********num = 42;
}
//ft_ft function
void ft_ft(int *num) {
    *num = 42;
}
//function to check whether a number is negative or positive
void ft_is_negative(int *num) {
    char positive = 'P';
    char negative = 'N';
        if(*num >= 0) {
            write(1, &positive, 1);
        } else {
            write(1, &negative, 1);
        }
}
//function to print numbers
void ft_print_numbers() {
    char num = '0';
    while(num <= '9') {
        write(1, &num, 1);
        num++;
    }
}
//function to print reverse alphabet
void ft_print_reverse_alphabet() {
    char letter = 'z';
    while(letter >= 'a') {
        write(1, &letter, 1);
        letter--;
    }
}
//function to print alphabet
void ft_print_alphabet() {
    char letter = 'a';
    while(letter <= 'z') {
        write(1, &letter, 1);
        letter++;
    }
}
//function to put a character or output character
void ft_put_char(char myChar) {
    write(1, &myChar, 1);
}


int main() {
    char mystr[] = "david";
    ft_put_string(&mystr);
    //int a = 10;
   // int b = 2;
   // int div;
   // int mod;
   // ft_div_mod(a,b, &div, &mod);
   // printf("%d",div);
    //char str1 = 'a';
    //char str2 = 'b';
    //ft_swap(&str1, &str2);
    //printf("%c\n", str1);
    // int num = 10;
   // ft_ft(&num);
   //int *pointer1 = &num;
    //int **pointer2 = &pointer1;
    //int ***pointer3 = &pointer2;
     //int ****pointer4 = &pointer3;
     //int *****pointer5 = &pointer4;
     //int ******pointer6 = &pointer5;
     //int *******pointer7 = &pointer6;
     //int ********pointer8 = &pointer7;
     //int *********pointer9 = &pointer8;
     //ft_ft_ultimate(pointer9);
     //printf("%d",num);
    //int num = -1;
    //ft_is_negative(&num);
    //ft_print_numbers();
    //ft_print_reverse_alphabet();
   // ft_print_alphabet();
    //char myC = 'a';
    //ft_put_char(myC);
    return 0;
}



/*
//function to capitalize
char *my_str_capitalize(char *str) {
    int firstLetter = 1;
    while(*str) {
        if(*str >= 'a' && *str <= 'z' || *str >= 'A' && *str <= 'Z') {
            if(firstLetter > 0) {
                if(*str >= 'a' && *str <= 'z') {
                    *str -= 32;
                }
                firstLetter = 0;
            } else {
                if(*str >= 'A' && *str <= 'Z') {
                *str += 32;
             }
            }
        } else if(!(*str >= '0' && *str <= '9')) {
            firstLetter = 1;
        }
        str++;
    }
    return str;
}
//function to put nbr
void my_put_nbr(int *num) {
    write(1, nbr, 1);
}
//function to put string
void my_put_string(char *str) {
    while(*str) {
            write(1, str, 1);
        str++;
    }
}
//function to calculate the length of a string
int my_str_length(char *str) {
    int length = 0;
    while(*str) {
        length++;
        str++;
    }
    return length;
}
//function to concatenate the given number of two strings
char *my_str_num_concatenate(char *dest, char *src, int n) {
    while(*dest) {
        dest++;
    }

    while(*src && n > 0) {
        *dest++ = *src++;
        n--;
    }
    *dest = '\0';
    return dest;
}
//function to concantenate two strings
char *my_str_concatenate(char *dest, char *src) {
    while(*dest) {
        dest++;
    }

    while(*src) {
        *dest++ = *src++;
    }
    *dest = '\0';
    return dest;
}
//function to compare the given number of two strings and know if they are the same
int my_str_num_comp(char *str1, char *str2, int n) {
    while(*str1 && *str2 && *str1 == *str2 && n > 0) {
        str1++;
        str2++;
        n--;
    }

    return *str1 - *str2;
}
//function to compare two strings and know if they are the same
int my_str_comp(char *str1, char *str2) {
    while(*str1 && *str2 && *str1 == *str2) {
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}
//function to convert uppercase string to lowercase
void my_str_to_lower(char *str) {
    while(*str) {
        if(*str >= 'A' && *str <= 'Z') {
            *str += 32;
        }
        str++;
    }
}
//function to convert lowercase string to uppercase
void my_str_to_upper(char *str) {
    while(*str) {
        if(*str >= 'a' && *str <= 'z') {
            *str -= 32;
        }
        str++;
    }
}
//function to check if given string is printable
int my_str_is_print(char *str) {
    while(*str) {
        if(!(*str >= ' ' && *str <= '~')) {
            return 0;
        }
        str++;
    }
    return 1;
}
//function to check if given string is lowercase only
int my_str_is_upper(char *str) {
    while(*str) {
        if(!(*str >= 'A' && *str <= 'Z')) {
            return 0;
        }
        str++;
    }
    return 1;
}
//function to check if given string is lowercase only
int my_str_is_lower(char *str) {
    while(*str) {
        if(!(*str >= 'a' && *str <= 'z')) {
            return 0;
        }
        str++;
    }
    return 1;
}
//function to check if the given string is numbers only
int my_str_is_num(char *str) {
   while(*str) {
    if(!(*str >= '0' && *str <= '9')) {
        return 0;
    }
    str++;
   }
   return 1;
}
//function to check if a given string is alphabet only
int my_str_is_alpha(char *str) {
    while(*str) {
        if(!(*str >= 'a' && *str <= 'z' || *str >= 'A' && *str <= 'Z')) {
            return 0;
        }
        str++;
    }
    return 1;
}
//function to copy the given number of a string from source to destination
char *my_ft_str_num_cpy(char *dest, char *src, int n) {
    while(*src && n > 0) {
        *dest++ = *src++;
        n--;
    }
    *dest = '\0';
    return dest;
}
//function to copy a string from source to destination
char *my_ft_str_cpy(char *dest, char *src) {
    while(*src) {
        *dest++ = *src++;
    }
    *dest = '\0';
    return dest;
}
//function to calculate the length of a string
int my_ft_str_length(char *str) {
    int length = 0;
    while(*str) {
        length++;
        str++;
    }
    return length;
}
//function to put string
void my_ft_put_string(char *str) {
    while(*str) {
        write(1, str, 1);
        str++;
    }
}
//my ultimate div mod function
void my_ultimate_div_mod(int *a, int *b) {
    int division = *a;
    int mode = *b;
    *a = division / mode;
    *b = division % mode;
}
//division modulus function
void my_div_mod(int a, int b, int *division, int *mode) {
   *division = a / b;
   *mode = a % b;
}
//function to swap
void my_ft_swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
//function that modifies the value of an integer through nine pointer.
void my_ft_ultimate_ft(int *********num) {
    *********num = 42;
}
//function that modifies the value of an integer through a pointer.
void my_ft_ft(int *num) {
    *num = 42;
}
//function to print n for negative number and p for positive
void ft_num_is_negative(int num) {
    char p = 'P';
    char n = 'N';
    if(num >= 0) {
        write(1, &p, 1);
    } else {
        write(1, &n, 1);
    }
}
//function to print numbers
void ft_print_my_number() {
    char num = '0';
    while(num <= '9') {
        write(1, &num, 1);
        num++;
        write(1, "\n", 1);
    }
}
//function to print reverse alphabet
void ft_print_my_reverse_alphabet() {
    char letter = 'z';
    while(letter >= 'a') {
        write(1, &letter, 1);
        letter--;
        write(1, "\n", 1);
    }
}
//function to print alphabet
void ft_print_my_alphabet() {
    char letter = 'a';
    while(letter <= 'z') {
        write(1, &letter, 1);
        letter++;
        write(1, "\n", 1);
    }
}
//function to put character or write character
void ft_putMyChar(char *c) {
    write(1, &c, 1);
}

//function to calculate the result of a number raised to power of s given number
int ft_iterative_power(int num, int power) {
    int result = 1;
    if(num == 0 && power == 0) {
        return 1;
    }

    if(power < 0) {
        return 0;
    }

    while(power > 0) {
        result *= num;
        power--;
    }

    return result;
}
//function to calculate the factorial of a positive integer
long long ft_iterative_factorial(int num) {
    long long result = 1;
    while(num > 1) {
        result *= num;
        num--;
    }
    return result;
}
//function to put string
void ft_put_str(char *str) {
    while(*str) {
        write(1, str, 1);
        str++;
    }
}
//function to print the length of characters in a given string
int ft_str_length(char *str) {
    int numOfChar = 0;
    while(*str) {
        numOfChar++;
        str++;
    }
    return numOfChar;
}
//function to find the first occurrence of a substring within a given string
char *ft_strstr(char *str, char *to_find) {
    while(*str) {
        char *strPointer = str;
        char *to_findPointer = to_find;

        while(*strPointer && *to_findPointer && *strPointer == *to_findPointer) {
            strPointer++;
            to_findPointer++;
        }

        if(*to_findPointer == '\0') {
            return str;
        }
        str++;
    }
    return NULL;
}
//function to concantenate the given number of two srings
char ft_str_num_cat(char *dest, char *src, int n) {
   char *destPointer = dest;

   while(*dest) {
    dest++;
   }

   while(*src && n > 0) {
    *dest++ = *src++;
    n--;
   }

   *dest = '\0';

   return destPointer;
}
//function to concantenate/combine/join two strings together
char ft_strcat(char *dest, char *src) {
    char *destPointer = dest;
    while(*dest) {
        dest++;
    }

    while(*src) {
        *dest++ = *src++;
    }

    *dest = '\0';
    return destPointer;
}
//function to compare the given number of two strings
int ft_str_num_comp(char *str1, char *str2, int n) {
    while(*str1 && *str2 && *str1 == *str2 && n > 0) {
        str1++;
        str2++;
        n--;
    }
    if(n == 0) {
        return 0;
    }
    return *str1 - *str2;
}
//function to compare two strings
int ft_str_comp(char *str1, char *str2) {
    while(*str1 && *str2 && *str1 == *str2) {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}
//function to capitalize only the first letter of the given word
char ft_str_capitalize(char *str) {
    int firstLetter = 1;
    while(*str) {
        if(*str >= 'a' && *str <= 'z' || *str >= 'A' && *str <= 'Z') {
            if(firstLetter > 0) {
                if(*str >= 'a' && *str <= 'z') {
                    *str -= 32;
                }
                firstLetter = 0;
            } else {
                if(*str >= 'A' && *str <= 'Z') {
                    *str += 32;
                }
            }
        } else {
            if(!(*str >= '0' && *str <= '9')) {
                firstLetter = 1;
            }
        }
        str++;
    }
    return str;
}
//function to change characters from uppercase to lowercase
void ft_str_to_lowercase(char *myString)
{
    while(*myString)
    {
        if(*myString >= 'A' && *myString <= 'Z')
        {
            *myString += 32;
        }
        myString++;
    }
}
//function to change characters from lowercase to uppercase
void ft_str_to_uppercase(char *myString)
{
    while(*myString)
    {
        if(*myString >= 'a' && *myString <= 'z')
        {
            *myString -= 32;
        }
        myString++;
    }
}
//function to check if a character is printable
int ft_str_is_printable(char *myStr)
{
    while(*myStr)
    {
        if(!(*myStr >= ' ' && *myStr <= '~'))
        {
            return 0;
        }
        myStr++;
    }
    return 1;
}
//function to check if the given characters is uppercase only
int ft_str_is_uppercase(char *myString)
{
    while(*myString)
    {
        if(!(*myString >= 'A' && *myString <= 'Z'))
        {
            return 0;
        }
        myString++;
    }
    return 1;
}
//function to check if the given characters is lowercase only
int ft_str_is_lowercase(char *myString)
{
    while(*myString)
    {
        if(!(*myString >= 'a' && *myString <= 'z'))
        {
            return 0;
        }
        myString++;
    }
    return 1;
}
//function to check if the given characters contains only numbers
int ft_str_is_numeric(char *myNum)
{
    while(*myNum)
    {
        if(!(*myNum >= '0' && *myNum <= '9'))
        {
            return 0;
        }
        myNum++;
    }
    return 1;
}
//function to check if the given characters contains only alphabet
int ft_str_is_alpha(char *myStr)
{
    while(*myStr)
    {
        if(!(*myStr >= 'A' && *myStr <= 'Z' || *myStr >= 'a' && *myStr <= 'z'))
        {
            return 0;
        }
        myStr++;
    }
    return 1;
}
// function to copy the given amount of string
char *ft_numStrCpy(char *src, char *dest, int n)
{
    while(*src && n > 0)
    {
        *dest++ = *src++;
        n--;
    }
    return dest;
}
// function to copy the whole string
char ft_strcpy(char *src, char *dest)
{
    char *originalDest = dest;
    while(*src)
    {
        *dest++ = *src++;
    }
    return originalDest;
}

//function to print number in reversed order
void ft_rev_int_tab(int *tab, int size)
{
    int start = 0;
    int end = size - 1;
    int tmp;

    while (start <= end)
    {
        tmp = tab[start];
        tab[start] = tab[end];
        tab[end] = tmp;
        start++;
        end--;
    }
}
//function to calculate the length of a given string
void ft_strlen(char *myString)
{
    int length = 0;
    char *stringPointer = myString;
    while(*myString)
    {
        length++;
        myString++;
    }
    printf("The length of %s is %d",stringPointer,length);
}

// or
/* int ft_strlen(char *myString) {
    int length = 0;
    while(*myString) {
        length++;
        myString++;
    }
    return length;
}*/

/*
// function to output string
void ft_putString(char *myString)
{
    while(*myString)
    {
        write(1, myString, 1);
        myString++;
    }
}

//
void ft_ultimate_div_mod(int *a, int *b)
{
    int temp = *a / *b;
    *a = *a % *b;
    *b = temp;
    printf("The result of the division is %d, and the remainder is %d", temp, *a);
}

// function that accept two numbers, divides the first number with the second and gives u the result and also the modulues
void ft_div_mod (int a, int b)
{
    int result = a / b;
    int remainder = a % b;
    printf("result is %d and the remainder is %d", result, remainder);
}
// pointer
void my_pointer()
{
    int num = 20;
    int *numPointer;
    numPointer = &num;

    printf("the value of num is %d", *numPointer);
}

void my_pointer2()
{
    int numbers[] = {10, 20, 30};
    int *numPointer = numbers;

    for(int a = 0; a < 3; a++)
    {
        printf("a: %d, num: %d \n", a,*numPointer);
        numPointer++;
    }

}
// swap
void ft_swap(int a, int b)
{
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
void ft_print_comb2()
{
    for(int a = 0; a <=9; a++)
    {
        for(int b = a + 1; b <= 9; b++)
        {
            char combo[3];
            combo[0] = a + '0';
            combo[1] = b + '0';
            combo[2] = '\n';

            write(1, combo, 3);
        }
    }
}

// print three character
void ft_print_three(char first, char second, char third)
{
    write(1, &first, 1);
    write(1, &second, 1);
    write(1, &third, 1);
    write(1, ", ", 2);
}

// print all unique combinations of three digits in ascending order.
void ft_print_comb()
{
    for(int a = 0; a <=9; a++)
    {
        for(int b = a + 1; b <= 9; b++)
        {
            for(int c = b + 1; c <= 9; c++)
            {
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
void ft_negative_number(int number)
{
    if(number >=0)
    {
        write(1, "Positive", 8);
    }
    else
    {
        write(1, "Negative", 8);
    }
}

// print char
void ft_print_char(char alphabet)
{
    write(1, &alphabet, 1);
}

// print alphabet
void ft_print_alphabet()
{
    char letter = 'A';
    while(letter <= 'Z')
    {
        write(1, &letter, 1);
        letter++;
    }
}

//print reverse alphabet
void ft_print_reverse_alphabet()
{
    char letter = 'Z';
    while(letter >= 'A')
    {
        write(1, &letter, 1);
        letter--;
    }
}

void print_char(int number)
{
    number += '0';
    write(1, &number, 1);
}

//print number
void ft_print_number()
{
    int number = 0;
    while(number <= 9)
    {
        print_char(number);
        number++;
    }
}


int main()
{
     char str1[20] = "Hello, ";
    char str2[] = "world!";
    my_str_num_concatenate(str1, str2, 3);
   // my_str_concatenate(str1, str2);
    printf("Concatenated string: %s\n", str1);
   // char str1[] = "apeple";
    //char str2[] = "apples";
   // int result = my_str_num_comp(str1, str2, 3);
    //int result = my_str_comp(str1, str2);
   // if(result == 0) {
     //   printf("The two strings are the same");
   // } else if(result < 0) {
    //    printf("string two: %s is greater than string one: %s",str2,str1);
   // } else {
   //     printf("string one: %s is greater than string two: %s", str1, str2);
    //}
   // char example[] = "david";
    //(&example);
   // printf("%s",example);
   // char example[] = "12345r";
   // int result = my_str_is_num(&example);
   // result ? printf("the string is num") : printf("the string is not num");
    //char example1[] = "HelloWorld";
    // int result1 = my_str_is_alpha(example1);
//printf("Example 1: %s\n", result1 ? "Alphabetic" : "Non-alphabetic");
    //char mySrc[] = "David Amajuoyi";
    //char dest[30];
   // my_ft_str_num_cpy(&dest, &mySrc, 5);
    //my_ft_str_cpy(&dest, &mySrc);
   // printf("%s", dest);
   // char myStr[] = "David Amajuoyi";
   // int result = my_ft_str_length(&myStr);
   // printf("%d", result);
    //int num1 = 20;
    //int num2 = 10;
   // my_ultimate_div_mod(&num1,&num2);
    //printf("%d", num1);
    //int dividend = 20;
    //int divisor = 2;
    //int divisionResult;
    //int modeResult;
    //my_div_mod(dividend,divisor,&divisionResult,&modeResult);
    //printf("%d",divisionResult);
    //int num1 = 10;
    //int num2 = 20;
   // my_ft_swap(&num1, &num2);
    //printf("%d",num1);
    //int num = 10;
    //int *numPoint1 = &num;
    //int **numPoint2 = &numPoint1;
    //int ***numPoint3 = &numPoint2;
    //int ****numPoint4 = &numPoint3;
   // int *****numPoint5 = &numPoint4;
    //int ******numPoint6 = &numPoint5;
    //int *******numPoint7 = &numPoint6;
    //int ********numPoint8 = &numPoint7;
    //int *********numPoint9 = &numPoint8;
    //my_ft_ultimate_ft(numPoint9);
   // printf("%d", num);
    //int num = 10;
    //my_ft_ft(&num);
    //printf("%d",num);
   // char num = 1;
    //ft_num_is_negative(num);
   // ft_print_my_number();
    //ft_print_my_reverse_alphabet();
    //ft_print_my_alphabet();
    //char str = 'a';
    //ft_putMyChar(str);
   // long long result = ft_iterative_factorial(20);
    //printf("%lld",result);
    // char example[] = "Hello, World!";
   // ft_put_str(example);
   // char haystack[] = "Hello, David! How are you?";
   // char needle[] = "David";

   // char *result = ft_strstr(haystack, needle);

   // if (result != NULL) {
      //  printf("Substring found at position: %ld\n", result - haystack);
   // } else {
       // printf("Substring not found.\n");
   // }

    //char src[] = "David";
    //char dest[] = "Hello ";
    //ft_strcat(src,dest);
    //ft_str_num_cat(dest,src,3);
    //printf("%s",dest);
    // char str1[] = "bbbb";
    //char str2[] = "bbbba";
   //int result = ft_str_comp(str1, str2);
   //int result = ft_str_num_comp(str1, str2, 4);

   //if (result == 0) {
   //printf("the two strings are the same\n");
   //} else if (result < 0) {
     //printf("str2: %s is greater than str1: %s\n", str2, str1);
  // } else {
    // printf("str1: %s is greater str2: %s\n", str1, str2);
  // }
    //char name[] = "DAVID12a AMAJUOYI chidera";
    //ft_str_to_lowercase(name);
    //ft_str_capitalize(name);
   // printf("%s",name);
    //char occupation[] = "software engineering";
    //ft_str_to_uppercase(occupation);
    //printf("%s", occupation);
    //char name[] = "david";
    //printf("%d",ft_str_is_printable(name));
    //printf("%d",ft_str_is_uppercase(name));
    //printf("%d",ft_str_is_lowercase(name));
    //char name[] = "12345";
    // printf("%d",ft_str_is_numeric(name));
    //char name[] = "Amajuoyi";
    //printf("%d",ft_str_is_alpha(name));
    //char name[] = "Amajuoyi chideraa david";
    //char destination[30];
    // ft_strcpy(name,destination);
    // ft_numStrCpy(name,destination,6);
    //printf("%s",destination);
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




