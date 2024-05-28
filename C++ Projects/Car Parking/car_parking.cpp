#include <iostream>
using namespace std;
class parking{
    public:
     int input, amount = 0, count = 0, car = 0, bus = 0, rickshw = 0;
    void use()
    {
         
   
    // menu
    while (1)
    { //  infintve loop
        cout << "Enter 1 for Rickshaw" << endl;
        cout << "Enter 2 for Car" << endl;
        cout << "Enter 3 for Bus" << endl;
        cout << "Enter 4 for Show Record" << endl;
        cout << "Enter 5 for Delet Record" << endl;
        cin >> input;

        if (input == 1)
        {
            if (count <= 50)
            {
                rickshw++;
                amount += 100;
                count += 1;
            }
            else
            {
                cout << "**********************" << endl;

                cout << "Parking is full" << endl;

                cout << "**********************" << endl;
            }
        }
        else if (input == 2)
        {
            if (count <= 50)
            {
                car++;
                amount += 200;
                count += 1;
            }
            else
            {
                cout << "**********************" << endl;

                cout << "Parking is full" << endl;

                cout << "**********************" << endl;
            }
        }
        else if (input == 3)
        {
            if (count <= 50)
            {
                bus++;
                amount += 300;
                count += 1;
            }
            else
            {
                cout << "**********************" << endl;

                cout << "Parking is full" << endl;

                cout << "**********************" << endl;
            }
        }
        else if (input == 4)
        {
            cout << "----------------------------------" << endl;
            cout << "The Total amount is = " << amount << endl;
            cout << "The Total Vehicles is : " << count << endl;
            cout << "The Total Buses are : " << bus << endl;
            cout << "The Total Cars are : " << car << endl;
            cout << "The Total Rickshaw are  : " << rickshw << endl;

            cout << "----------------------------------" << endl;
        }
        else if (input == 5)
        {
            amount = 0;
            count = 0;
            car=0;
            bus =0;
            rickshw =0;
            cout << "........" << endl;
            cout << "Delete" << endl;
            cout << "........" << endl;
        }
        else
        {
            cout << "!! Invalid Number !!" << endl;
        } // else beaket

    } // whie loop braket
    }
};
int main()
{
    parking one;
    one.use();

    return 0;
}
