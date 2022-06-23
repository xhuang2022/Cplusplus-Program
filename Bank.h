#pragma once
#ifndef BANK_APP_H
#define BANK_APP_H

class Bank {
	public:
		/*define calculation function to calculate yearly balance
		and interest earned with NO monthly deposit*/
		void calculateBalanceWithoutMonthlyDeposit(double initialInvestment, double interestRate, int numberOfYears);

		/*define calculation function to calculate yearly balance
		and interest earned with monthly deposit*/
		void balanceWithMonthlyDeposit(double initialInvestment, double monthlyDeposit, double interestRate, int numOfYears);
		//define function to check userinput
		double getInput();
		
	
	private:
		double initialAmount;
		double monthlyAmount;
		double interestRate;
		int numOfYears;



};
#endif 
