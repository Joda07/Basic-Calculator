///////////////////////////////////////////////////////
// Name: Joda Emmanuel
// Date: 12/17/2016
// Description: Basic Calculator
///////////////////////////////////////////////////////

#include <iostream> //Includes the iostream library
#include <string> //Includes the string library

using namespace std; //Assume the use of the standard (std) family

int main()  //the main function
{ //Start of main



	string userchoice = " ";
	double num1 = 0;
	double num2 = 0;
	double result = 0;

	cout << "Please select an arithmethic Operation from the folowing: " << endl;
	cout << "A) Addition" << endl;
	cout << "B) Subtraction" << endl;
	cout << "C) Division" << endl;
	cout << "D) Multiplication" << endl;

	cin >> userchoice;

	if (userchoice == "A")
	{
		cout << "Please input your First value: " << endl;
		cin >> num1;
		cout << "Please inout a Second number: " << endl;
		cin >> num2;

		result = num1 + num2;

		cout << "The Sum of two numbers " << num1 << " + " << num2 << " is  = " << result << endl;
	}
	else if (userchoice == "B")
	{
		cout << "Please input your First value: " << endl;
		cin >> num1;
		cout << "Please input a Second number: " << endl;
		cin >> num2;

		result = num1 - num2;

		cout << "The Subtraction  of two numbers " << num1 << " - " << num2 << " is  = " << result << endl;

	}
	else if (userchoice == "C")
	{
		cout << "Please input your First value: " << endl;
		cin >> num1;
		cout << "Please input a Second number: " << endl;
		cin >> num2;

		result = num1 / num2;

		cout << "The Quotient of  of two numbers " << num1 << " / " << num2 << " is  = " << result << endl;

	}
	else if (userchoice == "D")
	{
		cout << "Please input your First value: " << endl;
		cin >> num1;
		cout << "Please input a Second number: " << endl;
		cin >> num2;

		result = num1 * num2;

		cout << "The Product of two numbers " << num1 << " * " << num2 << " is  = " << result << endl;

	}

	else
	{
		cout << "You have Selected an invalid operation !!!" << endl;
		 

	}





	





	system("pause");  //Prevents the console from closing on exit.  This line is
	//not needed in Xcode (Mac OS X)
	return 0;  //Returns whatever is defined by the function return type

} //End of main