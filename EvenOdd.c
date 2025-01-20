#include <stdio.h>
#include <math.h>

int main()
{

    int given_number;
        printf("Enter a number please: ");   /*Accepts input*/
        scanf("%d", &given_number);

        if(given_number % 2 == 0)            /*Verifies that a number has no remainder after being divided by 2*/
            printf("EVEN");
        else                                 /*Conditional Statement*/
            printf("ODD");
                return 0;

}

