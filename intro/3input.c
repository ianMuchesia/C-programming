
// #include <stdio.h>

// int main()
// {

//     int num;

//     printf("Please Enter input value: \n");

//     scanf("%d", &num);

//     printf("Age = %d", num);

//     return 0;
// }

// take doubkle number

#include <stdio.h>

int main()
{

    double number;
    char alphabet;

    printf("Please input a number: ");
    scanf("%lf", &number);

    printf("\nplease input a character: ");
    scanf(" %c", &alphabet);

    printf("Your character is: %c \n", alphabet);

    return 0;
}