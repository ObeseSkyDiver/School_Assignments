#include <iostream>
#include <iomanip>

using namespace std;

void inpatientCharge(double&, int&, double&, double&, double&);
void outpatientCharge(double&, double&, double&);



int main()
{
	char inOrOut;

	double dailyRate;
	double medicationCharge;
	double hospitalServiceFee;
	double totalCost;

	int daysAdmitted;

	cout << fixed << showpoint << setprecision(2);

	cout << "Hello, thank you for visiting Fernandez Hospital." << endl;
	cout << "Your bill may vary depending on different things." << endl;
	cout << "If you were an inpatient, you will be charged for daily fees." << endl;
	cout << "If not, no worries! However there will still be a charge for medication and work done." << endl;
	cout << "\nWere you checked in as an inpatient or outpatient? I/O: ";
	cin >> inOrOut;

	if (inOrOut == 'I' || inOrOut == 'i')
	{
		inpatientCharge(dailyRate, daysAdmitted, medicationCharge, hospitalServiceFee,totalCost);
	}
	else
	{
		outpatientCharge(medicationCharge, hospitalServiceFee, totalCost);
	}	

	return 0;
}

void inpatientCharge(double& dailyRate, int& daysAdmitted, double& medicationCharge, double& hospitalServiceFee, double& totalCost)
{
	cout << "\nHow much is the charge for daily stay? ";
	cin >> dailyRate;
	
	cout << "\nHow many days were spent in the hospital? ";
	cin >> daysAdmitted;

	cout << "\nWhat is the total cost for medication prescribed to the patient? ";
	cin >> medicationCharge;

	cout << "\nHow much is the total for hospital services provided? ";
	cin >> hospitalServiceFee;

	totalCost = (dailyRate * daysAdmitted) + medicationCharge + hospitalServiceFee;

	cout << "\nThe cost comes out to a total of $" << totalCost << endl;
}
	

void outpatientCharge(double& medicationCharge, double& hospitalServiceFee, double& totalCost)
{
	cout << "\nWhat are the total costs for medication prescribed to the patient? ";
	cin >> medicationCharge;

	cout << "\nHow much is the total for hospital services provided? ";
	cin >> hospitalServiceFee;

	totalCost = medicationCharge + hospitalServiceFee;

	cout << "\nThe cost comes out to a total of $" << totalCost << endl;
}