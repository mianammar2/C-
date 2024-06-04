#include <iostream>
using namespace std;

int main() 
{
  string name;
  float id, mid, assi, pro, qui,lab, fin, tot;
  char grade;
  cout<<"Enter you Name: ";
  cin>>name;
  cout<<"\nEnter your HID: ";
  cin>>id;
  cout<<"\nEnter your Mid term marks(Out of 100): ";
  cin>>mid;
  cout<<"\nEnter your Assignment marks(Out of 100): ";
  cin>>assi;
  cout<<"\nEnter your Project marks(Out of 100): ";
  cin>>pro;
  cout<<"\nEnter your Quiz marks(Out of 100): ";
  cin>>qui;
  cout<<"\nEnter your Lab Report marks(Out of 100): ";
  cin>>lab;
  cout<<"\nEnter your Final term marks(Out of 100): ";
  cin>>fin;
  mid = (mid/100 * 100) * 0.15;
  assi = (assi/100 * 100) * 0.5;
  pro = (pro/100 * 100) * 0.20;
  qui = (qui/100 * 100) * 0.10;
  lab = (lab/100 * 100) * 0.25;
  fin = (fin/100 * 100) * 0.25;

  tot = mid + assi + pro + qui + lab + fin;
  if(tot>=90)
  {
    grade = 'A';
  }
  else if(tot>=80)
  {
    grade = 'B';
  }
  else if(tot>=70)
  {
    grade = 'C';
  }
  else if(tot>=60)
  {
    grade = 'D';
  }
  else if(tot<60)
  {
    grade = 'F';
  }

  cout<<"\n\nThe final grade of "<<name<<" for EGN "<<id<<" Applied Programming is :"<<grade;
  
}