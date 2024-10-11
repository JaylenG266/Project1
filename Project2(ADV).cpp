// Project2(ADV).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int Northeast; 
	int Southwest; 
	int Southeast; 
	int Northwest; 

	double NEQ; 
	double NWQ; 
	double SEQ; 
	double SWQ;

	 NEQ = nEsales(NEQ);

	 NWQ = nWsales(NWQ);

	 SEQ = sEsales(SEQ);

	 SWQ = sWsales(SWQ);

	 cout << NEQ << " " << NWQ << "  " << SEQ << " " << SWQ; 

	
	




		
}

double nEsales(double sale)
{
	cout << "What was the northeast's profit's this quarter ?";
	cin >> sale;
	

	return sale;
}

double nWsales(double sale)
{
	cout << "What was the northeast's profit's this quarter ?";
	cin >> sale;


	return sale;
}

double sEsales(double sale)
{
	cout << "What was the northeast's profit's this quarter ?";
	cin >> sale;


	return sale;
}

double sWsales(double sale)
{
	cout << "What was the northeast's profit's this quarter ?";
	cin >> sale;


	return sale;
}
