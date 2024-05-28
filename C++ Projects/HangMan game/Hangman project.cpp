#include<iostream>
#include <stdlib.h>
#include<conio.h>
using namespace std;
void start(); // forward decleartion
void Meneu()
{
	int choose;
	cout<<"\n********************************************************************************"<<endl;
	cout<<"\n\t HI ...";
//	cout<<"\n\n\t Press Key";
//	getch();
//	cout<<"\n********************************************************************************"<<endl;
	cout<<"\n\n\t Welcome To  HANGMAN "<<char(2)<<"...";
	cout<<"\n\n\t Press Key";
	getch();
	cout<<"\n********************************************************************************"<<endl;
	cout<<"\n\t 1. Start ";
	cout<<"\n\t 2. Quit "<<endl;

		
	
	cout<<"\nEnter your Feeling....."<<endl;
	cin>>choose;
	switch(choose)
	{
		case 1 :start();
	
		break;
		case 2:
			cout<<"BYE ...";
		 exit(0); 
	}

}
void lose_user() ; //  forward decleartion
void lose_pc();
inline void play_again();
void start()
{
	system("CLS");
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"\n\n\t Welcome To  HANGMAN "<<char(2)<<"...";
	getch();
	system("CLS");
	cout<<"\n\n\t Now You Are Inside The Game.."<<endl;
	cout<<"\n\t\t\t Rules"<<endl;
	cout<<" First You Choose The Number If the Number Was Same Which Computer Can Choose then You Get 2 points and if Answer is wrong  Then Computer Get 2 Points At the End Wonner Was Deceleard  Then Computer Get 2 Points At the End Wonner Was Deceleard  "<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	getch();
	system("CLS");
	int user_points = 0 ; 
	int computer_points=0;
	int a = 0 ;
	int num ; 
	do{
	
	cout<<"\n\t Enter Number Rang 0 -- 10 "<<endl;
	cin>>num;
	cout<<"\tYou Enter "<<num<<endl;
	int computer = rand()%10;
	cout<<"\tComputer Enter "<<computer<<endl;
	a++;
	if(num==computer)
	{
		user_points+=2;
	}
	else
	{
		computer_points+=2;
	}
	
}while(a<10);
	system("CLS");
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"\n\t USER POINTS --> "<<user_points<<endl;
cout<<"\n\t Computer POINTS --> "<<computer_points<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
if(user_points<computer_points)
{
	cout<<"\n\t COMPUTER WON THE GAME"<<endl;
	cout<<"I am smart alwas"<<endl;
	lose_user();
	
}
else
{

	cout<<"\n\t YOU WON THE GAME"<<endl;
	cout<<"We Build You Beroo"<<endl;
	lose_pc();
}
cout<<"\nIf you want to play again then Enter (Y) else press (N)"<<endl;
char n ; 
cin>>n;
if(n=='y'|| n=='Y')
play_again();
else
exit(0);
}

void lose_user()
{
	cout<<"Sorry ... Rules are Rules "<<endl;
	cout<<"    ___________________"<<endl;	
	cout<<"   |                   |"<<endl;;
	cout<<"   |                   |"<<endl;
	cout<<"   |                \\ (') / "<<endl;
	cout<<"   |                 \\ | / "<<endl;
	cout<<"   |                   |    "<<endl;
	cout<<"   |                  / \\  "<<endl;
	cout<<"   |                 /   \\ "<<endl;
	cout<<" __|__";


}
void lose_pc()
{
		cout<<"Sorry ... Rules are Rules "<<endl;
	cout<<"    ___________________"<<endl;	
	cout<<"   |                   |"<<endl;;
	cout<<"   |                   |"<<endl;
	cout<<"   |               ---------- "<<endl;
	cout<<"   |              | 0      0 | "<<endl;
	cout<<"   |              |     |    | "<<endl;
	cout<<"   |              |   #####  |"<<endl;
	cout<<"   |               ----------  "<<endl;
	cout<<" __|__";
}
 void play_again()
{
	start() ; 
}
main()
{
	Meneu();

///score
}
