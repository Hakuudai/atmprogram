
#include <stdio.h>

int main()
{
    int choice, amount;
    float balance = 1000.00;

    printf("Welcome to ATM\n\n");
    printf("1. Check balance\n");
    printf("2. Withdraw cash\n");
    printf("3. Deposit cash\n");
    printf("4. Quit\n\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("\nYour balance is %.2f", balance);
            break;
        case 2:
            printf("\nEnter the amount to withdraw: ");
            scanf("%d", &amount);
            if(amount > balance)
            {
                printf("\nInsufficient balance");
            }
            else
            {
                balance = balance - amount;
                printf("\nPlease collect your cash");
                printf("\nYour current balance is %.2f", balance);
            }
            break;
        case 3:
            printf("\nEnter the amount to deposit: ");
            scanf("%d", &amount);
            balance = balance + amount;
            printf("\nYour new balance is %.2f", balance);
            break;
        case 4:
            printf("\n Program quit successfully!!");
            break;
        default:
            printf("\n Invalid input. Program terminated!!");
            break;
    }
    return 0;
}
