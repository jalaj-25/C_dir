#include <stdio.h>
#include <string.h>

struct bank
{
    int accno;
    char name[100];
    int balance;
};
struct bank b[200] = {123, "krish", 1200, 1234, "abcde", 100, 12345, "abc", 999};
int below();
int change();
int main()
{
    below();
    change();
}
int below()
{
    printf("Customer who have Balance below 1000 are: \n");
    for (int i = 0; i < 3; i++)
    {
        if (b[i].balance < 1000)
        {
            printf("Account number: %d, Name: %s\n", b[i].accno, b[i].name);
        }
    }
    return 0;
}
int change()
{
    char a;
    printf("Do you want to withdraw or deposit (y/n): ");
    scanf("%c", &a);
    if (a == 'y')
    {
        int choice, acc, amount;
        printf("Enter the Account Number: ");
        scanf("%d", &acc);
        for (int i = 0; i < 3; i++)
        {
            if (b[i].accno == acc)
            {
                printf("Enter 1 for deposit and 0 for withdrawal: ");
                scanf("%d", &choice);
                printf("Enter the amount: ");
                scanf("%d", &amount);
                switch (choice)
                {
                case 1:
                    printf("Your Balance has been credited by %dRs.\n", amount);
                    printf("New Balance is: %d", b[i].balance + amount);
                    break;

                case 0:
                    if (b[i].balance < 1000)
                    {
                        printf("The balance is insufficient for the specified withdrawal\n");
                        break;
                    }
                    else
                    {
                        printf("Your Balance has been debited by %dRs.\n", amount);
                        printf("New Balance is: %d", b[i].balance - amount);
                        break;
                    }
                default:
                    printf("Invalid choice");
                    break;
                }
            }
        }
    }
    else
    {
        printf("Thank you");
        return 0;
    }
}
