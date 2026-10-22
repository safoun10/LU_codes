#include <stdio.h>
double total_with = 0, total_depo = 0;
int times = 0;

void line();
void header();
void deposit(double *);
void withdraw(double *);
void balance(double);
void interest(double);
void transaction();

int main()
{
    double balance_ = 1000;

    while (1)
    {
        line();
        printf("\n\tBANK ACCOUNT SYSTEM\t\n");
        line();
        header();
        line();

        int choice;
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 6)
        {

            switch (choice)
            {

            case 1:
                deposit(&balance_);
                break;

            case 2:
                withdraw(&balance_);
                break;

            case 3:
                balance(balance_);
                break;

            case 4:
                interest(balance_);
                break;

            case 5:
                transaction();
                break;

            case 6:
                return 0;
            }
        }
        else
        {
            printf("please,enter right choice!!!");
        }
    }

    return 0;
}

void line()
{
    for (int i = 0; i < 35; i++)
        printf("=");
}

void header()
{
    printf("\n1.Deposit Money\n2.Withdraw Money\n3.Check Balance\n4.Calculate Interest\n5.Transaction Summary\n6.Exit\n");
}

void deposit(double *balance_)
{

    unsigned int deposit_;
    printf("\nEnter deposit amount: ");
    scanf("%u", &deposit_);

    total_depo += deposit_;
    times++;

    printf("Deposit successful.\n\n");
    *balance_ += deposit_;
}

void withdraw(double *balance_)
{

    unsigned int withdraw_;
    printf("\nEnter amount to withdraw: ");
    scanf("%u", &withdraw_);
    if (withdraw_ > *balance_)
    {
        printf("You don't have sufficient balance.\n\n");
        return;
    }

    total_with += withdraw_;
    times++;

    printf("Withdraw is successfull.\n\n");
    *balance_ -= withdraw_;
}

void balance(double balance_)
{

    printf("\nBalance is %.2lf\n\n", balance_);
}

void interest(double balance_)
{

    unsigned int rate, year;
    printf("\nEnter the rate: ");
    scanf("%u", &rate);
    printf("For how long(year): ");
    scanf("%u", &year);

    double in_money = (rate * year * balance_) / 100;

    printf("Your interest money will be %.2lf\n", in_money);
    printf("Your balance with interest will be %.2lf\n\n", in_money + balance_);
}

void transaction()
{

    printf("\nTransaction times = %d", times);
    printf("\nTotal deposit = %.2lf", total_depo);
    printf("\nTotal withdrawal = %.2lf", total_with);
    printf("\nTotal transaction = %.2lf\n\n", (total_depo - total_with));
}