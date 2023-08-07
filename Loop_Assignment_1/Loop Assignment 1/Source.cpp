#include <iostream>

using namespace std;

int main()
{
	int empNum;
	double grossPay, netPay;
	double stateTaxPercent, fedTaxPercent;
	double stateTax, fedTax, fica;
	double stateTaxTotal, fedTaxTotal;

	cout << "Please enter your employee number: ";
	cin >> empNum;

	while (empNum < 1)
	{
		cout << "Please input a number larger than 0. Please restart the program." << endl;
		return 1;
	}

	cout << "Please enter your pay before taxes: ";
	cin >> grossPay;

	cout << "Please enter the Federal tax percentage: ";
	cin >> fedTaxPercent;
	if (fedTaxPercent >= grossPay)
	{
		cout << "This number is higher than the gross pay. Please try again." << endl;
		return 1;
	}
	
	cout << "Please enter the State tax percentage: ";
	cin >> stateTaxPercent;
	if (stateTaxPercent >= grossPay)
	{
		cout << "This number is higher than the gross pay. Please try again." << endl;
		return 1;
	}

	cout << "Please enter any FICA withholdings you have: ";
	cin >> fica;
	if (fica >= grossPay)
	{
		cout << "This number is higher than the gross pay. Please try again." << endl;
		return 1;
	}

	fedTax = fedTaxPercent / 100;
	stateTax = stateTaxPercent / 100;
	fedTaxTotal = (grossPay * fedTax);
	stateTaxTotal = (grossPay * stateTax);
	netPay = grossPay - (fedTaxTotal + stateTaxTotal + fica);

	cout << "---------------------------------" << endl;
	cout << "Below you find the information listed along with your net pay." << endl;
	cout << "Employee number: " << empNum << endl;
	cout << "Gross Pay: " << grossPay << endl;
	cout << "Federal Taxes: " << fedTaxTotal << endl;
	cout << "State Taxes: " << stateTaxTotal << endl;
	cout << "FICA Withholdings: " << fica << endl;
	cout << "Net Pay: " << netPay << endl;

	return 0;
}