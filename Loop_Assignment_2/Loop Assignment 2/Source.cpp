#include <iostream>

using namespace std;

int main()
{
	double APR, monthlyRate,totalRate = 0;
	double startingBalance, deposit, withdraw;
	double finalBalance = 0, totalDeposit = 0, totalWithdraw = 0;
	int months;

	cout << "Please enter the starting balance for the account: ";
	cin >> startingBalance;
	finalBalance += startingBalance;

	cout << "Please enter the APR: ";
	cin >> APR;
	monthlyRate = APR / 12;

	cout << "How many months has the account been open for: ";
	cin >> months;

	for (int x = 1; x <= months; ++x)
	{
		cout << "Month #" << x << endl;
		cout << "Please enter how much has been deposited this month: $";
		cin >> deposit;
		totalDeposit += deposit;
		finalBalance += deposit;

		cout << "Please enter how much has been withdrawn this month: $";
		cin >> withdraw;
		totalWithdraw += withdraw;
		finalBalance -= withdraw;

		if (deposit < 0 || withdraw < 0)
		{
			cout << "Please enter a positive number or 0." << endl;
		}
		totalRate += (finalBalance * monthlyRate);
		finalBalance += (monthlyRate * finalBalance);
	}
	cout << "The ending balance is $" << finalBalance << endl;
	cout << "The total amount of deposits made is $" << totalDeposit << endl;
	cout << "The total amount of withdrawls made is $" << totalWithdraw << endl;
	cout << "The total interest earned is " << totalRate << endl;
	

	return 0;
}