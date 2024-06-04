/*Task-1: 
Write a program that lets the user to enter the total rainfall for each of 12 months into an array of doubles
. The program should calculate and display the total rainfall for the year, the average monthly rainfall,
 and the month with the highest and lowest amounts.
Input validation: Do not accept negative numbers for monthly rainfall figures*/

#include<iostream>
using namespace std;
int main(){
	int month[12], rain[12], tot = 0, avg, large, small;
	cout<<"Enter the rain according to each month: ";
	for(int i=0 ; i<12;i++)
	{
		cin>>rain[i];
		tot = tot + rain[i];
	}
	cout<<"The total times it will rain this year is: "<<tot;
	avg = tot/12;
	cout<<"\nThe average rainfall per month is: "<<avg;
	
	for(int i = 0;i < 12; i++) 
	{
    if(large < rain[i])
      large = rain[i];
  }

  cout << endl << "The higest rainfall number is = " << large;
  
  
	for(int i = 0;i < 12; i++) 
	{
    if(small > rain[i])
      small = rain[i];
  }
  cout << endl << "The minimum rainfall number is = " << small;
}
	
