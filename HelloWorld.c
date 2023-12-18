#include <stdio.h>

int Hello(){
    printf("Hello World \n");
    printf("This is David And i will pass this \"piscine\" \n");
    return 0;
}

int main() {
    Hello();
    char name[] = "David Amajuoyi";  // array of characters or simply more than one characters  %s
    int age = 19; // int is whole number data type no decimal point.
    char bloodType = 'A'; // single character %c
    float gpa = 1.5; // float is decimal data type
    printf("My Name is %s, my age is %d, my blood type is %c and my G.P.A is %f", name,age,bloodType,gpa);
}
