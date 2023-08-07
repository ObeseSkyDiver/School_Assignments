#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
	double carWash;
	double gallons;
	char washChoice, gasChoice;
	double rGas = 3.89;
	double pGas = 4.09;
	double sGas = 4.39;
	double gasTotal;
	double totalBill;

	cout << "Welcome to Gas-N-Clean Service Station!" << endl;
	cout << "If you get $10 of gas, the car wash is $1.25, otherwise it's $3. " << endl;
	cout << "How many gallons are you looking to get? ";
	cin >> gallons;

	cout << "\n What gas type(R, P, S, or N) do you want? ";
	cin >> gasChoice;

	cout << "\n Would you like to get a car wash? " ;
	cin >> washChoice;

	

	while (gasChoice == 'R' && 'r')
	{
		rGas;
		gasTotal = (gallons * rGas);

		if (gasTotal > 9.99)
		{
			carWash = 1.25;
		}
		else
		{
			carWash = 3.00;
		}

		
		totalBill = (gasTotal + carWash);

		
		cout << "This is the total for your purchase. " << endl << endl;
		cout << "Gallons of Gas: " << gallons << endl;
		cout << "Price per Gallon: " << rGas << endl;
		cout << "Total Gas Price: " << gasTotal << endl;
		cout << "Car Wash Price: " << carWash << endl;
		cout << "Total Cost: " << totalBill << endl;
		cout << "Thank you for coming to Self-N-Clean Service Station! " << endl;
		cout << "I hope you have a beautiful day!" << endl;
		return 0;
	}

	while (gasChoice == 'P' && 'p')
	{
		pGas;
		gasTotal = (gallons * pGas);

		if (gasTotal > 9.99)
		{
			carWash = 1.25;
		}
		else
		{
			carWash = 3.00;
		}


		totalBill = (gasTotal + carWash);


		cout << "This is the total for your purchase. " << endl << endl;
		cout << "Gallons of Gas: " << gallons << endl;
		cout << "Price per Gallon: " << pGas << endl;
		cout << "Total Gas Price: " << gasTotal << endl;
		cout << "Car Wash Price: " << carWash << endl;
		cout << "Total Cost: " << totalBill << endl;
		cout << "Thank you for coming to Self-N-Clean Service Station! " << endl;
		cout << "I hope you have a beautiful day!" << endl;
		return 0;
	}

	while (gasChoice == 'S' && 's')
	{
		sGas;
		gasTotal = (gallons * sGas);

		if (gasTotal > 9.99)
		{
			carWash = 1.25;
		}
		else
		{
			carWash = 3.00;
		}


		totalBill = (gasTotal + carWash);


		cout << "This is the total for your purchase. " << endl << endl;
		cout << "Gallons of Gas: " << gallons << endl;
		cout << "Price per Gallon: " << sGas << endl;
		cout << "Total Gas Price: " << gasTotal << endl;
		cout << "Car Wash Price: " << carWash << endl;
		cout << "Total Cost: " << totalBill << endl;
		cout << "Thank you for coming to Self-N-Clean Service Station! " << endl;
		cout << "I hope you have a beautiful day!" << endl;
		return 0;
	}

	while (gasChoice == 'N' && 'n')
	{
		cout << "You have chosen to not get gas." << endl;
		cout << "The carwash is $3. " << endl;
		cout << "Have a good day!" << endl;
		return 0;
	}
	
	return 0;
}