/*(Palindromes) A palindrome is a number or a text phrase that reads the same backward as forward.
 For example, each of the following five-digit integers is a palindrome: 12321, 55555, 45554 and 11611.
Write a program that reads in a five-digit integer and determines whether it’s a palindrome.
You are required to make your own function with name isPalindrome with one parameter passed to it. 
[Hint: Use the division and modulus operators to separate the number into its individual digits.]
*/
#include <iostream>
using namespace std;

int main()
{
     int n, num, digit, rev = 0;

     cout << "Enter a positive number: ";
     cin >> num;

     n = num;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

     cout << " The reverse of the number is: " << rev << endl;

     if (n == rev)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

    return 0;
}