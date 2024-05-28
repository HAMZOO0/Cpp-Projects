#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

class student
{
private:
    string name, roll_no, course, address, email_id, contact_no;

public:
    void menu();
    void insert();
    void display();
    void search();
    void Delet();
};
//.................................................. menu start ..................................................
void student::menu()
{
    int choice;
    char x;
    system("cls");

menustart:
    cout << "\t\t\t-------------------------------------------------" << endl;
    cout << "\t\t\t STUDENT MANAGEMENT SYSTEM" << endl;
    cout << "\t\t\t-------------------------------------------------" << endl;
    cout << "\t\t\t1. Enter New Record" << endl;
    cout << "\t\t\t2. Display  Record" << endl;
    cout << "\t\t\t3. Search Record" << endl;
    cout << "\t\t\t4. Delet Record" << endl;
    cout << "\t\t\t5. Exit" << endl;
    cout << "\n\tEnter Your Choice -> ";
    cin >> choice;

    switch (choice)
    {
    case 1:

        do
        {
            insert();
            cout << "\n\t\t\t ADD Another Record (Y/N) : ";
            cin >> x;

        } while (x == 'y' || x == 'y');

        break;

    case 2:
        display();
        break;

    case 3:
        search();
        break;

    case 4:
        Delet();
        break;

    case 5:
        exit(0);

    default:
        cout << "\n\t\t\t Invalid Choice .... Try Again-...";
    }

    getch();

    goto menustart;
}

//------------------------------------------------------------------------------- menu end ............ insert data start
void student::insert()
{
    system("cls");

    fstream file;

    cout << "*********************************************************ADD Student Data **********************************************" << endl;
    cout << "\t\t\tEnter Name : ";
    cin >> name;

    cout << "\t\t\tEnter Roll NO : ";
    cin >> roll_no;

    cout << "\t\t\tEnter Course : ";
    cin >> course;

    cout << "\t\t\tEnter contact NO : ";
    cin >> contact_no;

    cout << "\t\t\tEnter Address  : ";
    cin >> address;

    cout << "\t\t\tEnter Email Address  : ";
    cin >> email_id;

    file.open("LMS.txt", ios::app | ios::out);

    file << " " << name << " " << roll_no << " " << course << " " << contact_no << " " << address << " " << email_id << "\n ";

    file.close();
}
//---------------------------------------------------------- insert end ...... show record start---------------------------------------

void student::display()
{
    system("cls");

    fstream file;

    int total = 0;

    cout << "*********************************************************Display Student Record Table **********************************************" << endl;

    file.open("LMS.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\t NO Data  Found ....";
    }
    else
    {

        file >> name >> roll_no >> course >> contact_no >> address >> email_id;
    }

    while (!file.eof())
    {
        cout << "\t\t\tStudent No : " << total++ << endl;
        cout << "\t\t\tStudent Name : " << name << endl;
        cout << "\t\t\tStudent Roll No : " << roll_no << endl;
        cout << "\t\t\tStudent course : " << course << endl;
        cout << "\t\t\tStudent Email ID : " << email_id << endl;
        cout << "\t\t\tStudent NAddressme : " << address << endl;

        file >> name >> roll_no >> course >> contact_no >> address >> email_id;
    }

    if (total == 0)
    {
        cout << "\n\t\t\t NO Data  Found ....";
    }

    file.close();
}
//---------------------------------------------------------- record  end ...... Search start---------------------------------------
void student ::search()
{
    system("cls");

    fstream file;

    int found = 0;

    cout << "*********************************************************ADD Student Search Data **********************************************" << endl;

    file.open("LMS.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\t NO Data  Found ....";
    }
    else
    {

        string rollno;
        cout << "\n Enter The Roll NO for Search : ";
        cin >> rollno;

        file >> name >> roll_no >> course >> contact_no >> address >> email_id;
        while (!file.eof())
        {
            if (rollno == roll_no)
            {
                cout << "\n\t\t\tStudent Name : " << name << endl;
                cout << "\t\t\tStudent Roll No : " << roll_no << endl;
                cout << "\t\t\tStudent course : " << course << endl;
                cout << "\t\t\tStudent Email ID : " << email_id << endl;
                cout << "\t\t\tStudent NAddressme : " << address << endl;
                found++;
            }
            file >> name >> roll_no >> course >> contact_no >> address >> email_id;
            if (found == 0)
            {
                cout << "\n\t\t\t Student Roll number Not Found ...";
            }
            file.close();
        }
    }
}
//----------------------------------------------------------Search End ------- Delet start---------------------------------------
void student::Delet()
{

    cout << "\n\t\t\t DELETED ..";
    ofstream file("LMS.txt");
    file << "";
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// Main //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    student project;
    project.menu();

    return 0;
}
