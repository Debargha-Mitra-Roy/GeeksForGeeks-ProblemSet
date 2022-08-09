/*
    Maximum Chocolates. (Method - 2):-

    LINK:   https://www.geeksforgeeks.org/puzzle-22-maximum-chocolates/

*/

#include <iostream>
using namespace std;

int countRec(int chocolate, int wrap)
{
    /* If number of chocolates is less than number of wrappers required. */
    if (chocolate < wrap)
        return 0;

    /* We can immediatly get New_chocolate using wrappers of chocolate. */
    int New_chocolate = chocolate / wrap;

    /* Now we have "New_chocolate + chocolate % wrap" wrappers. */
    return New_chocolate + countRec(New_chocolate + chocolate % wrap, wrap);
}

/* Returns maximum number of chocolates we can eat with given money, price of chocolate and number of wrappers required to get a chocolate. */
int count_Max_Chocolate(int money, int price, int wrap)
{
    /* We can directly buy below number of chocolates */
    int chocolate = money / price;

    /* countRec returns number of chocolates we can have from given number of chocolates */
    return chocolate + countRec(chocolate, wrap);
}

int main()
{
    int money;
    cout << "Enter the Money that you have to buy Chocolates : ";
    cin >> money;

    int price;
    cout << "Enter the Price of each Chocolate : ";
    cin >> price;

    int wrap;
    cout << "Enter the no. of Wrapper to be returned for getting Chocolates : ";
    cin >> wrap;

    int chocolate;
    int total;

    cout << count_Max_Chocolate(money, price, wrap) << "\n";

    return 0;
}