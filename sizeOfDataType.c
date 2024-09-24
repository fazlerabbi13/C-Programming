// knowing the size of data type using sizeof oparator

#include <stdio.h>

int main(){
    int myInt= 5;
    float myFloat = 5.5;
    double myDouble = 10.5;
    char myChar = 'a';

    printf("%lu\n",sizeof(myInt));
    printf("%lu\n",sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu", sizeof(myChar));
}