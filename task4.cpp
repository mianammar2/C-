/*(Number Conversion) Write a program that can convert a binary number to octal, decimal and hexadecimal numbers
. Your program should input a binary stream containing 0’s and 1’s only (bits only) and the convert the entered 
number into octal, decimal and hexadecimal numbers by calling the appropriate function.
 You should make three functions named toDecimal(), toOctal(), to Hexa() with one parameter. The parameter should be the binary number entered by the user. And all function must return the converted value. Which you should then print. 
*/
// convert decimal to binary

#include <iostream>
using namespace std;
int choice();
 int toBinary( int a);
 int toOctal( int a);
 int toHex( int a);

 int main()
{
	int convert = choice();

	switch (convert)
	{
	case (0):
		toBinary(0);
		break;

	case (1):
		toOctal(1);
		break;

	case (2):
		toHex(2);
		break;
	}
	return 0;
}

int choice()
{
	int convert;
	cout << "Enter Your Choice of Conversion";
	cout << "\nConvert the decimal into the following:";
	cout << "\n0-Binary";
	cout << "\n1-Octal";
	cout << "\n2-Hexadecial";
	cin >> convert;
	return convert;
}

 int toBinary( int a)
{
	 int num;
	 int answer = 0;

	cout << "Please enter a decimal";
	cin >> num;

	while (num > 0)
	{
		answer = a % 2;
		a = a / 2;
		cout << answer << " ";
	}
	return answer;
}

 int toOctal(int a)
{
	 int num;
	 int answer = 0;

	cout << "Please enter a decimal: ";
	cin >> num;

	while (num > 0)
	{
		answer = a % 8;
		a = a / 8;
		cout << answer << " ";
	}
	return answer;
}
 int toHex(long int a)
{
	long int num;
	int answer[100] ;
	int ctr=0;

	cout << "Please enter a decimal";
	cin >> num;


	num = a % 16;
	ctr++;
	answer[ctr] = num;


	for (int ctr = a; ctr > 0; ctr--)
	{
		cout << answer[ctr];
	}
	return num;
}