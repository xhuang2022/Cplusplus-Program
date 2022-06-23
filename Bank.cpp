#include "Bank.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
using namespace std;


/*construct the layout and output yearly balance and interest earned
	with NO monthly deposit*/
void Bank::calculateBalanceWithoutMonthlyDeposit(double initialInvestment, double interestRate, int numberOfYears) {
	cout << "    Balance and Interest without Additional Monthly Deposits    " << endl;
	cout << string(66, '=') << endl;
	cout << right << setw(9) <<"Year" << right << setw(25) << "Year End Balance"<< right << setw(32) << "Year End Earned Interest" << endl;
	cout << string(66, '-') << endl;
	for (int i = 1; i <= numberOfYears; ++i) {
		double interestEarned = (initialInvestment * (interestRate / 100));
		initialInvestment += interestEarned;
		cout << setw(9) << i << fixed << setprecision(2) << right << setw(18) << "$" << initialInvestment << right <<  setw(30) << interestEarned << endl;
	}
}
/*construct the layout and output yearly balance and interest earned
	with monthly deposit*/
void Bank::balanceWithMonthlyDeposit(double initialInvestment, double monthlyDeposit, double interestRate, int numOfYears) {
	double interestEarned;
	double annualBalance;
	double currentInterestEarned;
	double currentBalance;
	cout << "    Balance and Interest with Additional Monthly Deposits    " << endl;
	cout << string(66, '=') << endl;
	cout << right << setw(9) << "Year" << right << setw(25) << "Year End Balance" << right << setw(32) << "Year End Earned Interest" << endl;
	cout << string(66, '-') << endl;
	for (int i = 1; i <= numOfYears; ++i) {
		currentInterestEarned = 0;
		for (int j = 1; j <= 12; ++j) {
			currentBalance = initialInvestment + (monthlyDeposit);
			interestEarned = currentBalance * ((interestRate / 100) / 12);
			currentInterestEarned += interestEarned;
			annualBalance = currentBalance + interestEarned;
			initialInvestment = annualBalance;
		}
		cout << setw(9) << i << fixed << setprecision(2) << right << setw(18) << "$" << annualBalance << right << setw(30) << currentInterestEarned << endl;
	}
}

//construct check function to ensure only positive number is accepted
double Bank::getInput() {
	double userInput;
	while (!(cin >> userInput) || (userInput < 0)) {
		cout << "Enter a number greater than or equal to 0: ";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
	}
	return userInput;
}







