#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    //printf("Quarters are %i\n", quarters);
    //printf("Dimes are %i\n", dimes);
    //printf("Nickels are %i\n", nickels);
    //printf("Pennies are %i\n", pennies);
    printf("%i\n", coins);
    //printf("Cents left; %i\n", cents);
}


// While input is less than 1, keep asking for cents, return cents
int get_cents(void)
{
    int i;
    do
    {
        i = get_int("Change owed: ");
    }
    while (i < 1);
    return i;
}

// Calculate the number of quarters in given cents and return
int calculate_quarters(int cents) //25
{
    int i = cents;
    int quarters;
    for (quarters = 0; i >= 25; quarters++)
    {
        i = i - 25;
    }
    return quarters;
}


// Calculate the number of dimes in given cents and return
int calculate_dimes(int cents) // 10
{
    int i = cents;
    int dimes;
    for (dimes = 0; i >= 10; dimes++)
    {
        i = i - 10;
    }
    return dimes;
}

// Calculate the number of dimes in given cents and return
int calculate_nickels(int cents) // 5
{
    int i = cents;
    int nickels;
    for (nickels = 0; i >= 5; nickels++)
    {
        i = i - 5;
    }
    return nickels;
}

int calculate_pennies(int cents) // 1
{
    int i = cents;
    int pennies;
    for (pennies = 0; i >= 1; pennies++)
    {
        i = i - 1;
    }
    return pennies;
}
