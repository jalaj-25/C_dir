#include <stdio.h>
#include <stdbool.h>
int main() 
{
    char check;
    while(true) 
    {
        float number1, number2;
        char operators;
        printf("\nDo you want to continue\nEnter [Y/N] : ");
        scanf(" %c", &check);
        if(check == 'N' || check == 'n'){
            break;
        }
       if(check != 'Y' && printf("%d\n",check != 'y')){
            printf("Invalid Input");
            printf("\nPlease try again");
            continue;
        }
        printf("Enter number1: ");
        scanf("%f", &number1);
        printf("Enter number2: ");
        scanf("%f", &number2);
        printf("Enter {+, -, *, /, %}: ");
        scanf(" %c", &operators);
        switch(operators) 
        {
            case '+':
            printf("Result: %.2f\n", number1 + number2);
            break;
            case '-':
            printf("Result: %.2f\n", number1 - number2);
            break;
            case '*':
            printf("Result: %.2f\n", number1 * number2);
            break;
            case '/':
            printf("Result: %.2f\n", number1 / number2);
            break;
            case '%':
            {
            printf("Result: %d\n", ((int)number1) % ((int)number2)); 
            break;
            }
            default:
            printf("This operation can not be done me.\n");
        }
    }
    return 0;
}
