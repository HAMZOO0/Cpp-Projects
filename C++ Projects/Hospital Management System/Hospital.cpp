#include <iostream>
#include <iomanip>
using namespace std;
class hospital
{
private:
    int id[5];
    string name[5];
    string desies[5];
    int fee[5];
    static int counter;

public:
   

    void set_id()
    {
       
        cout << "Enter The patiens " << counter << " id " << endl;
        cin >> id[counter];
                counter;

    
    
        cout << "Enter The patiens " << counter << " Name " << endl;
        cin >> name[counter];
                counter;

   
        cout << "Enter The patiens " << counter << " desies " << endl;
        cin >> desies[counter];
             counter;

    
        cout << "Enter The patiens " << counter << " fee " << endl;
        cin >> fee[counter];
    counter++;
    }
 void print()
    {
        for (int i = 0; i < counter; i++)
        {

            // cout << " ID of " << name[i] << " is " << id[i] << " patiens Desies is " << desies[i] << " And FEE will be " << fee[i] << endl;
            cout<<" ID  "<<setw(10);cout<<" Name "<<setw(10);cout<<" Desies  "<<setw(10) ; cout<<" FEE  "<<setw(1) <<endl;
            cout<< id[i] <<setw(10);cout<< name[i]<<setw(10);cout<<  desies[i]<<setw(10);   cout<< fee[i]    <<setw(1)<<endl; 
        }
             
    }
 
};
            
int hospital ::counter;
int main()
{
    hospital pasents  ;
   pasents.set_id();
   pasents.set_id();
   pasents.set_id();
   pasents.print();
  
   

    return 0;
}
