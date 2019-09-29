//Programming Challenge 9
//This program plays a coin game with the user
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Sets the worth of each coin as a constant
	const float penny_worth = 0.01,
		nickel_worth = 0.05,
		dime_worth = 0.10,
		quarter_worth = 0.25,
		dollar = 1.00;

	int pennies, nickels, dimes, quarters, coin_total;

	//User enters how many of each coin
	cout << "This program plays a coin game.\nEnter how many of each coin you want. The total of the coins ";
	cout << "should equal one dollar, or 100 cents.\n";
	cout << "\nEnter how many pennies:  ";
	cin >> pennies;
	cout << "\nEnter how many nickels:  ";
	cin >> nickels;
	cout << "\nEnter how many dimes:  ";
	cin >> dimes;
	cout << "\nEnter how many quarters:  ";
	cin >> quarters;

	//Sets the decimal precision
	cout << setprecision(2) << fixed;

	//Adds together the worth of the coins
	coin_total = ((pennies * penny_worth) + (nickels * nickel_worth) +
		(dimes * dime_worth) + (quarters * quarter_worth));

	//Displays if the coins equal one dollar
	if (coin_total == dollar)
	{
		cout << "\n\nCongratulations! The total coins equal $" << coin_total << endl;
	}
	//Displays if coins equal more than one dollar
	else if (coin_total > dollar)
	{
		cout << "\n\nThe total coins equal $" << coin_total << endl;
		cout << "This is more than one dollar.\n";
	}
	//Displays if coins equal more than one dollar
	else if (coin_total < dollar)
	{
		cout << "\n\nThe total coins equal $" << coin_total << endl;
		cout << "This is less than one dollar.\n";
	}

	return 0;
}