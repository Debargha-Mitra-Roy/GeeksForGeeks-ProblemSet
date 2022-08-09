/*
    Maximum Chocolates. (Method - 1):-

    LINK:   https://www.geeksforgeeks.org/puzzle-22-maximum-chocolates/
*/

#include <iostream>
using namespace std;

/* Returns maximum number of chocolates we can eat with given money, price of chocolate and number of wrappers required to get a chocolate. */
int count_Max_Chocolate(int money, int price, int wrap)
{
    /* Corner case */
    if (money < price)
        return 0;

    /* First find number of chocolates that can be purchased with the given amount */
    int chocolate = money / price;

    /* Now just add number of chocolates with the chocolates gained by wrapprices */
    chocolate = chocolate + (chocolate - 1) / (wrap - 1);

    return chocolate;
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