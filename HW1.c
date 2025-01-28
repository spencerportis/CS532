#include <stdio.h>
#include <math.h>

void primeOrFactorial();
int UABIndexSum();

int main (){
    
    printf("hello\n");
    primeOrFactorial();
    int result = UABIndexSum();
    printf("The sum of elements equal to their indices is: %d\n", result); // Print the result
 
   
}


void primeOrFactorial (){
    int num;
    int dummy = 0;
    double facty = 1;     //factorials are usually very large numbers, int doesn't hold enough data here.  A double is necessary.
    printf("Enter a number please.\n");   //Accepts input from user
    scanf("%d" , &num);

    for (int i = 2; i<= num / 2; i++){    //Establishing what a prime number is.  Using a for loop.  
        if (num % i == 0)
        {
           dummy++;    
           break;      //moving to next part of code
        }
    }

    if (dummy == 0 && num != 1){                 // if "dummy" is 0, (meaning there is no remainder) and the number isn't one then it's a prime number
        printf("Prime Number");               
    }
    else {
                for (int i = 1; i <= num; i++) {  //factorial calculation 
                    facty *= i;
                }
                printf("the factorial of the number is %f \n" , facty);

                
    }
}

int UABIndexSum() {
    int size;

    printf("Enter array size please: ");        //Asks user to input value for the size of the array
    scanf("%d", &size);

    int arr[size];                                  //initalizes an array based on the user provided size


    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {                //prompts user for array values 
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }
    

    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == i) {                       //iterates over the array and finds values 
                                                    //where the array position matches the value of the array
            sum += arr[i];
        }
    }
      return sum;
}
