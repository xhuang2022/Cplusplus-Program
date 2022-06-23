#include <iostream>
#include <iomanip>
#include "Bank.h"
using namespace std;


int main() {
	double initialAmount;
	double monthlyAmount;
	double interestRate;
	int numOfYears;
	char choice;
	Bank bank;

	//prompt user to enter data
	do {
		cout << string(36, '*') << endl;
		cout << string(10, '*') << " Data Input " << string(14, '*') << endl;
		cout << "Initital Investment Amount:  $";
		initialAmount = bank.getInput();

		cout << "Monthly Deposit:  $";
		monthlyAmount = bank.getInput();

		cout << "Annual Interest:  %";
		interestRate = bank.getInput();

		cout << "Number of years:  ";
		numOfYears = bank.getInput();

		system("pause");
		cout << "Press any key to continue . . ." << endl;
		cin.get();
		system("cls");
		
	
		bank.calculateBalanceWithoutMonthlyDeposit(initialAmount, interestRate, numOfYears);
		cout << endl;
		bank.balanceWithMonthlyDeposit(initialAmount, monthlyAmount, interestRate, numOfYears);
		cout << endl;

		//prompt use to re-enter data or quit the app
		cout << "Press any key to reset the data or 'q' to quit" << endl;
		cin >> choice;
		system("cls");

	} while (choice != 'q');

	return 0;
}
