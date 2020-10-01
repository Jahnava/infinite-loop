//infinate loop if i remove the counter++, otherwise this loop stops at 5

#include<iostream>
using namespace std;

int main()
{
	//variables
	int counter = 0;
	int sum = 0;
	int inputNum;

	do
	{
		cout << "Enter a number: ";
		cin >> inputNum;

		sum += inputNum;
		counter++;
	} 
	while (counter < 5);


	cout << "The sum of the values is: " << sum << endl;

}
