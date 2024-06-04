#include <iostream>
#include<stdio.h>
#include<conio.h>
#include <windows.h>
#include"MMSystem.h"
using namespace std;
int main(){
	cout<<"\t\t\t\t         SMART SONG COMPANY!        \n";
	cout<<"\t\t\t\t _______________________________________\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|            WELLCOME BACK!!            |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	cout<<"\t\t\t\t        |                      |         \n";
	cout<<"\t\t\t\t        |         wait         |\n";
	cout<<"\t\t\t\t        |                      |\n";
	cout<<"\t\t\t\t        |       pass=786       |\n";
	cout<<"\t\t\t\t        |                      |\n";
	cout<<"\t\t\t\t        |                      |\n";
	cout<<"\t\t\t\t        |______________________|\n";
	
	cout<<"\n\n\n\n\n\n\n\n"<<endl;
	cout<<"\t\t\t\t\t\t plesae just enter numbers";
	Sleep(2000);
	system("cls");
		int o;
	cout<<"\n\n\n\n\n\n\n\n"<<endl;
	cout<<"\t\t\t\t\t password";
	cin>>o;
	system("cls");
	if (o==786)
	{
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
		system("COLOR F");
	cout<<"\t\t\t\t _______________________________________\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|        what kind of mucis yo want     |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	cout<<"\t\t\t\t|           1) sufii music              |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|           2) punjabi                  |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|           3) hindi/urdu               |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|           4) english                  |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	cout<<"\n\n\t\t\t\t Please enter your choice ";
	cin>>i;
	system("cls");
	if (i==1){
		int sufi;
	cout<<"\t\t\t\t __________________________________________________\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|  you select the sufi music select one            |\n";
	cout<<"\t\t\t\t|__________________________________________________|\n";
	cout<<"\t\t\t\t|1)Teray Ishq Nachaya | Original | Abida Parveen   |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|2)Ali Zafar - Jhoom (R&B version)                 |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|3) Wohi Patjhad - Sufiana Kalam                   |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|4)NARA E MASTANA - Abida Parveen & Asrar          |\n";
	cout<<"\t\t\t\t|__________________________________________________|\n";
	cout<<"\n\n\t\t\t\t Please enter your choice ";
	cin>>sufi;
		system("cls");
	if(sufi==1){
		//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
			cout<<"\t\t\t\t|1)Teray Ishq Nachaya | Original | Abida Parveen   |\n";
	cout<<"\t\t\t\t _______________________________________\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|        1)Teray Ishq Nachaya           |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
    cout<<"\t\t\t\t|      status:ok        playing....     |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|       press any key to stop           |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";

	PlaySound(TEXT("videoplayback.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
	
	getch();
	PlaySound(0,0,0);
	getch();
	
	
	}
	else if(sufi==2){
	//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
		cout<<"\t\t\t\t|2)Ali Zafar - Jhoom (R&B version)                 |\n";
	cout<<"\t\t\t\t _______________________________________\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|   2)Ali Zafar - Jhoom (R&B version)   |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	cout<<"\t\t\t\t|      status:ok        playing....     |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|       press any key to stop           |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	PlaySound(TEXT("Ali Zafar - Jhoom (R&B version) - Official video.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
	getch();
	PlaySound(0,0,0);
	getch();
	}
	
	else if(sufi==3){
		//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
		cout<<"\t\t\t\t|3) Wohi Patjhad - Sufiana Kalam                   |\n";
	cout<<"\t\t\t\t _______________________________________\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|   3) Wohi Patjhad - Sufiana Kalam     |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	cout<<"\t\t\t\t|      status:ok        playing....     |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|       press any key to stop           |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	PlaySound(TEXT("Wohi Patjhad - Sufiana Kalam - Short Sufi Kalam - Sufiyana Soulful - Sami Kanwal - Fsee Production.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
	cout <<"bss";
	getch();
	PlaySound(0,0,0);
	getch();
	
	}
	
	else if(sufi==4){
	//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
		cout<<"\t\t\t\t|4)NARA E MASTANA - Abida Parveen & Asrar          |\n";
	cout<<"\t\t\t\t ________________________________________\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|4)NARA E MASTANA - Abida Parveen & Asrar|\n";
	cout<<"\t\t\t\t|________________________________________|\n";
	cout<<"\t\t\t\t|      status:ok        playing....      |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|       press any key to stop            |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|________________________________________|\n";
	
	PlaySound(TEXT("NARA E MASTANA - Abida Parveen & Asrar - Bazm-e-Rang Chapter 2 - Official Video.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);

	getch();
	PlaySound(0,0,0);
	getch();
}
	}
	 else if(i==2){
	int singer,pnj;
	system("COLOR 2");
	cout<<"\t\t\t\t __________________________________________________\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|  you select the punjabi song(select singer)      |\n";
	cout<<"\t\t\t\t|__________________________________________________|\n";
	cout<<"\t\t\t\t|1)Sidhu Moose Wala                                |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|2)diljit dosanjh                                  |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|3) Jass Manak                                     |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|4)Guru Randhawa                                   |\n";
	cout<<"\t\t\t\t|__________________________________________________|\n";
	cout<<"\n\n\t\t\t\t Please enter your choice ";
	cin>>pnj;
	if (pnj==1){
	cout<<"\t\t\t\t __________________________________________________\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|  song by sidhu moosa wala                        |\n";
	cout<<"\t\t\t\t|__________________________________________________|\n";
	cout<<"\t\t\t\t|1)Bitch I'm Back -Sidhu Moose Wala                |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|2)295 (Official Audio) - Sidhu Moose Wala         |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|3)GOAT (Full Video) Sidhu Moose Wala              |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|4)THE LAST RIDE - Offical Video - Sidhu Moose Wala|\n";
	cout<<"\t\t\t\t|__________________________________________________|\n";
	cout<<"\n\n\t\t\t\t Please enter your choice ";
	cin>>singer;
		system("cls");
	if(singer==1){
		//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
	cout<<"\t\t\t\t _______________________________________\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|1)Bitch I'm Back -Sidhu Moose Wala     |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
    cout<<"\t\t\t\t|      status:ok        playing....     |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|       press any key to stop           |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";

	PlaySound(TEXT("Bitch I'm Back (Official Audio) - Sidhu Moose Wala - Moosetape.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
	
	getch();
	PlaySound(0,0,0);
	getch();
	
	
	}
	else if(singer==2){
	//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
	cout<<"\t\t\t\t _______________________________________\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|2)295 (Official Audio)-Sidhu Moose Wala|\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	cout<<"\t\t\t\t|      status:ok        playing....     |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|       press any key to stop           |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	PlaySound(TEXT("295 (Official Audio) - Sidhu Moose Wala - The Kidd - Moosetape.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
	getch();
	PlaySound(0,0,0);
	getch();
	}
	
	else if(singer==3){
		//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
	cout<<"\t\t\t\t _______________________________________\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|3)GOAT (Full Video) Sidhu Moose Wala   |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	cout<<"\t\t\t\t|      status:ok        playing....     |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|       press any key to stop           |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	PlaySound(TEXT("GOAT (Full Video) Sidhu Moose Wala - Wazir Patar - Sukh Sanghera - Moosetape.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
	cout <<"bss";
	getch();
	PlaySound(0,0,0);
	getch();
	
	}
	
	else if(singer==4){
	//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
	cout<<"\t\t\t\t ________________________________________\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|4)THE LAST RIDE-Offical-Sidhu Moose Wala|\n";
	cout<<"\t\t\t\t|________________________________________|\n";
	cout<<"\t\t\t\t|      status:ok        playing....      |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|       press any key to stop            |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|________________________________________|\n";
	
	PlaySound(TEXT("THE LAST RIDE - Offical Video - Sidhu Moose Wala - Wazir Patar.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);

	getch();
	PlaySound(0,0,0);
	getch();
	
	}
}
else if(pnj==2){
	int song;
	cout<<"\t\t\t\t __________________________________________________\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|  song by diljit dosanjh                          |\n";
	cout<<"\t\t\t\t|__________________________________________________|\n";
	cout<<"\t\t\t\t|1)Chauffeur- Diljit Dosanjh x Tory Lanez          |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|2)Diljit Dosanjh- Born To Shine G.O.A.T           |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|3)Diljit Dosanjh - G.O.A.T.                       |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|4)Diljit Dosanjh- LOVER  Intense - Raj Ranjodh    |\n";
	cout<<"\t\t\t\t|__________________________________________________|\n";
	cout<<"\n\n\t\t\t\t Please enter your choice ";
	cin>>song;
		system("cls");
	if(song==1){
		//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
	cout<<"\t\t\t\t _______________________________________\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|1)Chauffeur- Diljit Dosanjh x Tory Lane|\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
    cout<<"\t\t\t\t|      status:ok        playing....     |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|       press any key to stop           |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";

	PlaySound(TEXT("Chauffeur- Official Music Video - Diljit Dosanjh x Tory Lanez - Ikky.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
	
	getch();
	PlaySound(0,0,0);
	getch();
	
	
	}
	else if(song==2){
	//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
	cout<<"\t\t\t\t _______________________________________\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|2)Diljit Dosanjh- Born To Shine G.O.A.T|\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	cout<<"\t\t\t\t|      status:ok        playing....     |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|       press any key to stop           |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	PlaySound(TEXT("Diljit Dosanjh - G.O.A.T. (Official Music Video) (1).wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
	getch();
	PlaySound(0,0,0);
	getch();
	}
	
	else if(song==3){
		//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
	cout<<"\t\t\t\t _______________________________________\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|3)Diljit Dosanjh - G.O.A.T.            |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	cout<<"\t\t\t\t|      status:ok        playing....     |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|       press any key to stop           |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	PlaySound(TEXT("Diljit Dosanjh - G.O.A.T. (Official Music Video) (1).wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
	getch();
	PlaySound(0,0,0);
	getch();
	
	}
	
	else if(song==4){
	//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
	cout<<"\t\t\t\t ________________________________________\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|4)Diljit Dosanjh     Intense-Raj Ranjodh|\n";
	cout<<"\t\t\t\t|________________________________________|\n";
	cout<<"\t\t\t\t|      status:ok        playing....      |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|       press any key to stop            |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|________________________________________|\n";
	
	PlaySound(TEXT("Diljit Dosanjh- LOVER (Official Music Video) Intense - Raj Ranjodh - MoonChild Era.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);

	getch();
	PlaySound(0,0,0);
	getch();
	
	}
}	

else if(pnj==3){

int jass;
	cout<<"\t\t\t\t __________________________________________________\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t| songs by jass        select the song             |\n";
	cout<<"\t\t\t\t|__________________________________________________|\n";
	cout<<"\t\t\t\t|1)Girlfriend Jass Manak Satti Dhillon-GK DIGITAL  |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|2)Prada-Jass Manak Satti Dhillon - Punjabi Song   |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|3)Boss - Jass Manak Satti Dhillon-Ri-Punjabi Songs|\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|__________________________________________________|\n";
	cout<<"\n\n\t\t\t\t Please enter your choice ";
	cin>>jass;
		system("cls");
	if(jass==1){
		//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
	cout<<"\t\t\t\t _______________________________________\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|1)Girlfriend Jass Manak Satti Dhillon  |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
    cout<<"\t\t\t\t|      status:ok        playing....     |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|       press any key to stop           |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";

	PlaySound(TEXT("Girlfriend - Jass Manak (Official Video) Satti Dhillon - Snappy - GK DIGITAL - Geet MP3.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
	
	getch();
	PlaySound(0,0,0);
	getch();
	
	
	}
	else if(jass==2){
	//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
	cout<<"\t\t\t\t _______________________________________\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|2)Prada-Jass Manak Satti Dhillon       |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	cout<<"\t\t\t\t|      status:ok        playing....     |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|       press any key to stop           |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	PlaySound(TEXT("Prada - Jass Manak (Official Video) Satti Dhillon - Punjabi Song - GK Digital - Geet MP3.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
	getch();
	PlaySound(0,0,0);
	getch();
	}
	
	else if(jass==3){
		//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
	cout<<"\t\t\t\t _______________________________________\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|3)Boss - Jass Manak Satti Dhillon-Ri   |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	cout<<"\t\t\t\t|      status:ok        playing....     |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|       press any key to stop           |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	PlaySound(TEXT("Boss - Jass Manak (Official Video) Satti Dhillon - Ri - Punjabi Songs - GK.DIGITAL - Geet MP3.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
	cout <<"bss";
	getch();
	PlaySound(0,0,0);
	getch();
	
	}		
}
else if(pnj==4) {
	int guru;
	cout<<"\t\t\t\t __________________________________________________\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|  song by Guru Randhawa                           |\n";
	cout<<"\t\t\t\t|__________________________________________________|\n";
	cout<<"\t\t\t\t|1)Guru Randhawa- High Rated Gabru-DirectorGifty   |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|2)Guru Randhawa- Ishq Tera                        |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|3)Guru Randhawa- Lahore                           |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|__________________________________________________|\n";
	cout<<"\n\n\t\t\t\t Please enter your choice ";
	cin>>singer;
		system("cls");
	if(guru==1){
		//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
	cout<<"\t\t\t\t _______________________________________\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|1)Guru Randhawa- High Rated Gabru      |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
    cout<<"\t\t\t\t|      status:ok        playing....     |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|       press any key to stop           |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";

	PlaySound(TEXT("Guru Randhawa- High Rated Gabru Official Song - DirectorGifty - Bhushan Kumar - T-Series.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
	
	getch();
	PlaySound(0,0,0);
	getch();
	
	
	}
	else if(guru==2){
	//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
	cout<<"\t\t\t\t _______________________________________\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|2)Guru Randhawa- Ishq Tera             |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	cout<<"\t\t\t\t|      status:ok        playing....     |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|       press any key to stop           |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	PlaySound(TEXT("Guru Randhawa- Ishq Tera (Official Video) - Nushrat Bharucha - Bhushan Kumar - T-Series.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
	getch();
	PlaySound(0,0,0);
	getch();
	}
	
	else if(guru==3){
		//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
	cout<<"\t\t\t\t _______________________________________\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|3)Guru Randhawa- Lahore                |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	cout<<"\t\t\t\t|      status:ok        playing....     |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|       press any key to stop           |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	PlaySound(TEXT("Guru Randhawa- Lahore (Official Video) Bhushan Kumar - Vee - DirectorGifty - T-Series.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
	cout <<"bss";
	getch();
	PlaySound(0,0,0);
	getch();
	
	}
}
}
else if (i==3){
system("COLOR c");
int lan;
	cout<<"\t\t\t\t __________________________________________________\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|  you select the hindi/urdu select one            |\n";
	cout<<"\t\t\t\t|__________________________________________________|\n";
	cout<<"\t\t\t\t|1)hind                                            |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|2)urdu                                            |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|__________________________________________________|\n";
	cout<<"\n\n\t\t\t\t Please enter your choice ";
	cin>>lan;
		system("cls");
	if(lan==1){
		//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
		int hindi;
	cout<<"\t\t\t\t __________________________________________________\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|                  hindi                           |\n";
	cout<<"\t\t\t\t|__________________________________________________|\n";
	cout<<"\t\t\t\t|1)Na Ja - Pav Dharia - SOLO                       |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|2)Tum Hi Aana                                     |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|3)O Saathi                                        |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|__________________________________________________|\n";
	cout<<"\n\n\t\t\t\t Please enter your choice ";
	cin>>hindi;
     if(hindi==1){
	//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
	cout<<"\t\t\t\t _______________________________________\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|1)  Na Ja - Pav Dharia- SOLO           |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	cout<<"\t\t\t\t|      status:ok        playing....     |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|       press any key to stop           |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	PlaySound(TEXT("Na-Ja-Pav-Dharia-_Official-Video_-SOLO-Punjabi-Songs-White-Hill-Music-_1_.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
	getch();
	PlaySound(0,0,0);
	getch();
	}
	
	else if(hindi==2){
		//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
	cout<<"\t\t\t\t _______________________________________\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|   2) Tum Hi Aana                      |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	cout<<"\t\t\t\t|      status:ok        playing....     |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|       press any key to stop           |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	PlaySound(TEXT("Tum Hi Aana Full Video - Marjaavaan - Riteish D, Sidharth M, Tara S - Jubin N - Payal Dev Kunaal V.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
	cout <<"bss";
	getch();
	PlaySound(0,0,0);
	getch();
	
	}
	
	else if(hindi==4){
	//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
		cout<<"\t\t\t\t|4)NARA E MASTANA - Abida Parveen & Asrar          |\n";
	cout<<"\t\t\t\t ________________________________________\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|3) O Saathi                             |\n";
	cout<<"\t\t\t\t|________________________________________|\n";
	cout<<"\t\t\t\t|      status:ok        playing....      |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|       press any key to stop            |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|________________________________________|\n";
	
	PlaySound(TEXT("O Saathi Video Song - Baaghi 2 - Tiger Shroff - Disha Patani - Arko - Ahmed Khan - Sajid Nadiadwala.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);

	getch();
	PlaySound(0,0,0);
	getch();
}
}
else if (lan=2){		
     int urdu;
	cout<<"\t\t\t\t __________________________________________________\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|                  urdu                            |\n";
	cout<<"\t\t\t\t|__________________________________________________|\n";
	cout<<"\t\t\t\t|1)Pasoori Lyrics - Ali Sethi x Shae Gil           |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|2)Larsha Pekhawar - Ali Zafar ft.                 |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|3)Rafta Rafta - Atif Aslam Ft.                    |\n";
	cout<<"\t\t\t\t|                                                  |\n";
	cout<<"\t\t\t\t|4)Atif Aslam- Pehli Dafa Song                     |\n";
	cout<<"\t\t\t\t|__________________________________________________|\n";
	cout<<"\n\n\t\t\t\t Please enter your choice ";
	cin>>urdu;
     if(urdu==1){
	//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
	cout<<"\t\t\t\t _______________________________________\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|1)Pasoori Ali Sethi x Shae Gil         |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	cout<<"\t\t\t\t|      status:ok        playing....     |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|       press any key to stop           |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	PlaySound(TEXT("Pasoori-Lyrics-Ali-Sethi-x-Shae-Gill-Coke-Studio-Season-14.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
	getch();
	PlaySound(0,0,0);
	getch();
	}
	
	else if(urdu==2){
		//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
	cout<<"\t\t\t\t _______________________________________\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|2)Larsha Pekhawar - Ali Zafar ft.      |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	cout<<"\t\t\t\t|      status:ok        playing....     |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|       press any key to stop           |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	PlaySound(TEXT("Larsha Pekhawar - Ali Zafar ft. Gul Panra & Fortitude Pukhtoon Core - Pashto Song.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
	cout <<"bss";
	getch();
	PlaySound(0,0,0);
	getch();
	
	}
	
	else if(urdu==3){
	//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
		cout<<"\t\t\t\t|4)NARA E MASTANA - Abida Parveen & Asrar          |\n";
	cout<<"\t\t\t\t ________________________________________\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|3)Rafta Rafta - Atif Aslam Ft.          |\n";
	cout<<"\t\t\t\t|________________________________________|\n";
	cout<<"\t\t\t\t|      status:ok        playing....      |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|       press any key to stop            |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|________________________________________|\n";
	
	PlaySound(TEXT("Rafta Rafta - Official Music Video - Atif Aslam Ft. Sajal Ali - Tarish Music"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);

	getch();
	PlaySound(0,0,0);
	getch();
	}
		else if(urdu==4){
	//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
		cout<<"\t\t\t\t|4)NARA E MASTANA - Abida Parveen & Asrar          |\n";
	cout<<"\t\t\t\t ________________________________________\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|4)Atif Aslam- Pehli Dafa Song           |\n";
	cout<<"\t\t\t\t|________________________________________|\n";
	cout<<"\t\t\t\t|      status:ok        playing....      |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|       press any key to stop            |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|________________________________________|\n";
	
	PlaySound(TEXT("Atif Aslam- Pehli Dafa Song (Video) - Ileana D’Cruz - Latest Hindi Song 2017 - T-Series.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);

	getch();
	PlaySound(0,0,0);
	getch();
	}
	}
	}
	else if (i==4){
		system("COLOR E");
		int eng;
    cout<<"\t\t\t\t ________________________________________\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|you select english songs select one     |\n";
	cout<<"\t\t\t\t|________________________________________|\n";
	cout<<"\t\t\t\t|1)Alexander rybak - fairy tale          |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|2)Lil Nas X, Jack Harlow - INDUSTRY BABY|\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|                                        |\n";
	cout<<"\t\t\t\t|________________________________________|\n";
			cout<<"\n\n\t\t\t\t Please enter your choice ";
	      cin>>eng;
if(eng==1){
	//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
	cout<<"\t\t\t\t _______________________________________\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|1)Alexander rybak - fairy tale         |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	cout<<"\t\t\t\t|      status:ok        playing....     |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|       press any key to stop           |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	PlaySound(TEXT("Alexander rybak - fairy tale (lyrics) trending song.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
	getch();
	PlaySound(0,0,0);
	getch();
	}
	
	else if(eng==2){
		//PlaySound(TEXT("ICYTWAT - OFF DA LEASH (INSTRUMENTAL REMAKE).wav"),NULL,SND_SYNC);
	cout<<"\t\t\t\t _______________________________________\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|2)Lil Nas X, Jack Harlow-INDUSTRY BABY |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	cout<<"\t\t\t\t|      status:ok        playing....     |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|       press any key to stop           |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	PlaySound(TEXT("Lil Nas X, Jack Harlow - INDUSTRY BABY (Official Video).wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC);
	cout <<"bss";
	getch();
	PlaySound(0,0,0);
	getch();
	
	}	
	}	
	else if(i>4||i<1){
		cout<<"\t\t\t\t _______________________________________\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|somthing went worng try again later    |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	cout<<"\t\t\t\t|      author:Mian ammar hanif          |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|       eiditor: rumisa jawad           |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|        allah hafiz                    |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	}
}
	else if (o!=786){
	cout<<"\t\t\t\t _______________________________________\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|somthing went worng try again later    |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	cout<<"\t\t\t\t|      author:Mian ammar hanif          |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|       eiditor: rumisa jawad           |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|        allah hafiz                    |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|                                       |\n";
	cout<<"\t\t\t\t|_______________________________________|\n";
	}
}

