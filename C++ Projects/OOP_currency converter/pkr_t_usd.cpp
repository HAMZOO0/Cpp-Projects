#include<iostream>
#include<conio.h>
using namespace std;
class Card { 								//class 1 card
	protected : string card ;			
	public: Card(string a ): card(a){				//intializaation list in constructor 
		cout<<"Your Card name is = "<<card<<endl;
	}
};

class Pkr{
	protected: float price1 ;
	public :
		Pkr(float b ): price1(b){
			cout<<"You have "<<price1<<" PKR"<<endl;
		} 
};

class Usd{
	protected: float price2=0.0057 ;
	public :
		
		Usd(){
			cout<<"1 USD is = "<<price2<<" USD"<<endl;
		}
};
class Derived : virtual public Card , public Pkr,public Usd 
{
	public:
	
	Derived(string a , float b ) : Card(a),Pkr(b){
	
	}
	void dispaly(){
			cout<<"I convert Your Pkr --> USD Now You Have "<<price1*price2<<" USD"<<endl;

	}
	
};
main()
{float Pkr ;
	string a ;
	cout<<"Enter PKRs "<<endl;
	cin>>Pkr;

	cout<<"Enter Your Card Name"<<endl;
	cin>>a;
	Derived hamza(a, Pkr );
	hamza.dispaly();
	
	
	getch();
}