#include <iostream>
#include <iomanip>


using namespace std;


void setPrices(double&, double&);
void getInfo(bool&, bool&, bool&, int&, int&);
double membershipCost(double, int, double, int, bool, bool, bool);

void displayCenterInfo();

int main()
{
	bool senorCitizen;
	bool boughtTwelveOrMoreMonths;
	bool boughtFiveOrMoreSessions;

	int numOfMonths;
	int numOfSessions;

	double monthlyMembershipCharge;
	double trainingSessionCharge;
	double memberCost;

	cout << fixed << showpoint << setprecision(2);

	displayCenterInfo();


	setPrices(monthlyMembershipCharge, trainingSessionCharge);
	getInfo(senorCitizen, boughtTwelveOrMoreMonths, boughtFiveOrMoreSessions, numOfSessions, numOfMonths);

	memberCost = membershipCost(monthlyMembershipCharge, numOfMonths, trainingSessionCharge, numOfSessions, senorCitizen, boughtTwelveOrMoreMonths, boughtFiveOrMoreSessions);

	cout << "\n$" << memberCost << endl;

	return 0;
}

void displayCenterInfo()
{
	cout << "Welcome to Sam's Fitness Center! We have the best prices around!" << endl;
	cout << "We have a program that determines the cost of a membership." << endl;
	cout << "If you are a senor citizen, you get a 30% discount on our membership." << endl;
	cout << "We also have a 15% discount if you pay for 12 or more months. " << endl;
	cout << "At Sam's Fitness Center we also provide fitness training at an affordable rate. " << endl;
	cout << "If you purchase 5 or more sessions you will receive a 20% discount for each session! " << endl;
}

void setPrices(double& monthlyMembershipCharge, double& trainingSessionCharge)
{
	cout << "\nPlease enter the price of the monthly membership at regular cost: ";
	cin >> monthlyMembershipCharge;

	cout << "\nPlease enter the price of a training session: ";
	cin >> trainingSessionCharge;
}

void getInfo(bool& senorCitizen, bool& twelveOrMoreMonths, bool& fiveOrMoreSessions, int& numOfMonths, int& numOfSessions)
{
	char senCitizenInput;
	cout << "\nAre you over the age of 65? Please put Y/N: ";
	cin >> senCitizenInput;

	if (senCitizenInput == 'Y' || senCitizenInput == 'y')
	{
		senorCitizen = true;
	}
	else
	{
		senorCitizen = false;
	}

	cout << "\nHow many months are you looking to get: ";
	cin >> numOfMonths;

	if (numOfMonths >= 12)
	{
		twelveOrMoreMonths = true;
	}
	else
	{
		twelveOrMoreMonths = false;
	}

	cout << "\nHow many personal training sessions are you interested in getting: ";
	cin >> numOfSessions;

	if (numOfSessions >= 5)
	{
		fiveOrMoreSessions = true;
	}
	else
	{
		fiveOrMoreSessions = false;
	}
}

double membershipCost(double monthlyMembershipCharge, int numOfMonths, double trainingSessionCharge, int numOfSessions, bool senorCitizen, bool boughtTwelveOrMoreMonths, bool boughtFiveOrMoreSessions)
{
	double totalMembershipCost, totalTrainingCost;


	if (boughtTwelveOrMoreMonths)
	{
		monthlyMembershipCharge = (monthlyMembershipCharge * .85);
	}
	else
	{
		monthlyMembershipCharge = monthlyMembershipCharge;
	}

	if (boughtFiveOrMoreSessions)
	{
		trainingSessionCharge = (trainingSessionCharge * .8);
	}
	else
	{
		trainingSessionCharge = trainingSessionCharge;
	}

	totalMembershipCost = (monthlyMembershipCharge * numOfMonths);
	totalTrainingCost = (trainingSessionCharge * numOfSessions);

	if (senorCitizen)
	{
		return(totalMembershipCost * .7) + totalTrainingCost;
	}
	else
	{
		return(totalMembershipCost + totalTrainingCost);
	}
}