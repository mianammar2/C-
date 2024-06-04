/*(Calculating Salaries) A company pays its employees as managers (who receive a fixed weekly salary), 
hourly workers (who receive a fixed hourly wage for up to the first 40 hours they work and “time-and-a-half”—1.5
times their hourly wage—for overtime hours worked), commission workers (who receive $250 plus 5.7 percent of 
their gross weekly sales), or pieceworkers (who receive a fixed amount of money per item for each of the items 
they produce—each pieceworker in this company works on only one type of item). Write a program to compute the 
weekly pay for each employee. You do not know the number of employees in advance. Each type of employee has its
 own pay code: Managers have code 1, hourly workers have code 2, commission workers have code 3 and pieceworkers
  have code 4. Use a switch to compute each employee’s pay according to that employee’s paycode. Within the 
  switch, prompt the user (i.e., the payroll clerk) to enter the appropriate facts your program needs to 
  calculate each employee’s pay according to that employee’s paycode.
*/
#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	int pass;
 	cout<<"\t\t\t\t         SMART COMPANY!        \n";
	cout<<"\t\t\t\t _______________________________________\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|            WELLCOME BACK!!            |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	cout<<"\t\t\t\t        |                      |         \n";
	cout<<"\t\t\t\t        |         wait         |\n";
	cout<<"\t\t\t\t        |                      |\n";
	cout<<"\t\t\t\t        | for any updates      |\n";
	cout<<"\t\t\t\t        |                      |\n";
	cout<<"\t\t\t\t        |                      |\n";
	cout<<"\t\t\t\t        |______________________|\n";
	
	cout<<"\n\n\n\n\n\n\n\n"<<endl;
	cout<<"enter password numbers";
	cin>>pass;
	system("cls");
	system("COLOR B");
		cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t loading";
	char x=219;
	for( int i=0; i<35; i++)
	{
	
	cout<<x;
	if(i<10)
	Sleep(300);
	if(i>=10&&i<20)
	Sleep(150);
	if (i>=10)
	Sleep(25);
	}
	system("cls");
		int i;
	if(pass=786){
	
	cout<<"\t\t\t\t ____________________________________________________________\n";
	cout<<"\t\t\t\t|                                                           |\n"; 
	cout<<"\t\t\t\t|      company workers data                                 |\n";
	cout<<"\t\t\t\t|___________________________________________________________|\n";
	cout<<"\t\t\t\t        |                                                   |\n";
	cout<<"\t\t\t\t        |     select the person who's salary you want to see|\n";
	cout<<"\t\t\t\t        |1.CEO                                              |\n";
	cout<<"\t\t\t\t        |2.managers                                         |\n";
	cout<<"\t\t\t\t        |3.hourly workers                                   |\n";
	cout<<"\t\t\t\t        |4.commission workers                               |\n";
	cout<<"\t\t\t\t        |5.pieceworker                                      |\n";
	cout<<"\t\t\t\t        |___________________________________________________|\n";
	int em;
	cout<<"select the number=";
	cin>>em;
	system("cls");
	if(em=1){
		cout<<"\t\t\t\t\t CEO ";
		float a,b,c,d ,total;
		cout<<"enter the total leaves in week of the ceo=";
		cin>>b;
		cout<<"enter the extra hours of working in week of the ceo=";
		cin>>c;
		cout<<"enter the total salry  in week of the ceo=";
		cin>>d;
		total=d+(c*10)-(b*1.5*10);
		cout<<"total salary is ="<<total;
		return 0;
			}
				else if(em=2){
		cout<<"\t\t\t\t\t manger ";
		float a,b,c,d ,total;
		cout<<"enter the total leaves in week of the manger=";
		cin>>b;
		cout<<"enter the extra hours of working in week of the manger=";
		cin>>c;
		cout<<"enter the total salry  in week of the manger=";
		cin>>d;
		cout<<"total salary is ="<<total;//maneger have a fix salary;
		return 0;
	}
	else if(em=3){
		cout<<"\t\t\t\t\t hourly workers ";
		float a,b,c,d ,total;
		cout<<"enter the hours of working in week of the hourly workers=";
		cin>>c;
		cout<<"enter the total salry  in week of the hourly workers=";
		cin>>d;
		total=d+(c*1.5);
		cout<<"total salary is ="<<total;
		return 0;
		
		
}
	else if(em=3){
		cout<<"\t\t\t\t\t commission workers";
		float a,b,c,d ,total;
		cout<<"enter the hours of working in week of the commission workers=";
		cin>>c;
		cout<<"enter the total salry  in week of the commission workers=";
		cin>>d;
		total=d+5.7;
		cout<<"total salary is ="<<total;
		return 0;
		}
			else if(em=4){
		cout<<"\t\t\t\t\t pieceworker";
		float a,b,c,d ,total;
		cout<<"enter the hours of working in week of the pieceworker=";
		cin>>c;
		cout<<"number of item he sale pieceworker=";
		cin>>d;
		total=d+5.7;
		cout<<"total salary is ="<<total;
		return 0;
		}
	}
		}