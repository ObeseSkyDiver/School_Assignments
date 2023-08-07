using namespace std;

#include <iostream>

int main()
{
	double numAdults, numChildren, costAdultMeal, costDessert, roomFee, tipTax, deposit;

	cout << "\tWelcome to the CCCS billing system" << endl << endl;

	cout << "Please enter the number of adults served: ";
	cin >> numAdults;

	cout << "Please enter the number of children served: ";
	cin >> numChildren;

	cout << "Please enter the cost of each meal: ";
	cin >> costAdultMeal;

	cout << "Please enter the cost for dessert: ";
	cin >> costDessert;

	cout << "Please enter the room fee: ";
	cin >> roomFee;

	cout << "\nYou do not need to put the percent, the number is fine." << endl;
	cout << "Please enter the tip and tax percentage: ";
	cin >> tipTax;

	cout << "Please enter the deposit: ";
	cin >> deposit;

	double costChildMeal = (costAdultMeal * .6);
	double adultTotal = (numAdults * costAdultMeal);
	double childTotal = (numChildren * costChildMeal);
	double dessertTotal = costDessert * (numAdults + numChildren);
	double foodTotal = adultTotal + childTotal + dessertTotal;
	double tipTaxPercent = (tipTax / 100);
	double totalTip = (foodTotal * tipTaxPercent);
	double balance = (foodTotal + totalTip + roomFee) - deposit;

	

	cout << "\n\t Casewell Catering and Convention Service" << endl;
	cout << "\t\t Final Bill" << endl << endl;

	cout << "Adults Served:" << numAdults << endl;
	cout << "Children Served: " << numChildren << endl;
	cout << "Cost of meal for adults without dessert: " << costAdultMeal << "$" << endl;
	cout << "Cost of meal for children without dessert: " << costChildMeal << "$" << endl;
	cout << "Cost per desert: " << costDessert << "$" << endl;
	cout << "Room Fee: " << roomFee << "$" << endl;
	cout << "Tip and Tax Percentage: " << tipTax << "%" << endl;

	cout << "\nTotal Cost for Adult meals: " << adultTotal << "$" << endl;
	cout << "Total Cost for children meals: " << childTotal << "$" << endl;
	cout << "Total Cost for dessert: " << dessertTotal << "$" << endl;
	cout << "Total food cost: " << foodTotal << "$" << endl;
	cout << "Total Tips and Tax: " << totalTip << "$" << endl;
	cout << "Room Fee: " << roomFee << "$" << endl;
	cout << "Deposit Paid: " << deposit << "$" << endl;
	cout << "Balance Due: " << balance << "$" << endl;

	return 0;
}