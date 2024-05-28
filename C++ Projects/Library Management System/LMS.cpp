// Library Mangagement System
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <fstream>
using namespace std;
// template<T>
class Library
{
protected:
    // int book_id;
    string book_id, book, auther, publisher; // main data types for his sys .

public:
    void menu();
    void Insert();
    void display();
    void delet();
    void search();
};

void Library::menu()
{

    Beep(450, 400); // starting beep
    cout << "\n\n\t\a__________________________________________________________________";
    cout << "\n\n\t\a ------------------- Library Mangagement System-------------------";
    cout << "\n\n\t\a__________________________________________________________________";
p:
    cout << "\n\n********************************************************************************************************************************";
    cout << "\n\n\t1. Insert New Book  Record";
    cout << "\n\n\t2. Search  Book Record";
    cout << "\n\n\t3. Display Book Record ";
    cout << "\n\n\t4. Delete  Book Record";
    cout << "\n\n\t5. Exit ";
    cout << "\n\n********************************************************************************************************************************";

    cout << "\n\tEnter Your Choice -> ";

    int Choice;
    string XLAT_CLIENT;
    cin >> Choice; // get chooice
    string x;
    switch (Choice)
    {
    case 1:
        do

        {
            Insert();
            cout << "\n\t\t\t ADD Another Record (Y/N) : ";
            cin >> x;
        } while (x == "y");

        break;
    case 2:
        search();
        break;
    case 3:
        display();
        break;
    case 4:
        delet();
        break;

    case 5:
        exit(0);

        break;

    default:
        cout << "XXXXXXXXXXXXXXXXXXXXXXXX Wrong Command XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        break;
    }
    getch();
    goto p;
}

void Library::Insert()
{
    system("cls");
    cout << "*********************************************************ADD BOOK  **********************************************" << endl;

    fstream file;
    cout << " Book Id : " << endl;
    cin >> book_id;

    cout << "Book Name :" << endl;
    cin >> book;

    cout << "Auther Name :" << endl;
    cin >> auther;

    cout << "Publisher Nanme :" << endl;
    cin >> publisher;

    file.open("LMS.txt", ios::app | ios::out); // output to file

    file << " " << book_id << " " << book << " " << auther << " " << publisher << "\n ";

    file.close();
}

void Library::display()
{
    system("cls");

    cout << "********************************************************* ALL RECORD   **********************************************" << endl;
    fstream file;
    int total = 0;

    file.open("LMS.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\t NO Data  Found ....";
    }
    else
    {

        file >> book_id >> book >> auther >> publisher;
    }
    while (!file.eof())
    {
        cout << "\t\t\t Book No : " << total++ << endl;
        cout << "\t\t\tBook ID : " << book_id << endl;
        cout << "\t\t\tBook Name: " << book << endl;
        cout << "\t\t\tAuther Name : " << auther << endl;
        cout << "\t\t\tPublisher Nanme : " << publisher << endl;

        file >> book_id >> book >> auther >> publisher;
    }
}
void Library::delet()
{
    system("cls");

    cout << "\n\t\t\t DELETED ..";
    ofstream file("LMS.txt");
    file << "";
}
void Library::search()
{
    system("cls");

    cout << "********************************************************* Search RECORD   **********************************************" << endl;
    fstream file;
    file.open("LMS.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\t NO Data  Found ....";
    }
    else
    {

        string Book;
        cout << "\n Enter The Book Search : ";
        cin >> Book;

        file >> book_id >> book >> auther >> publisher;
        while (!file.eof())
        {
            if (Book == book)
            {
                cout << "\t\t\tBook ID : " << book_id << endl;
                cout << "\t\t\tBook Name: " << book << endl;
                cout << "\t\t\tAuther Name : " << auther << endl;
                cout << "\t\t\tPublisher Nanme : " << publisher << endl;
            }
            file >> book_id >> book >> auther >> publisher;

            file.close();
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// Main //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{

    // main page done
    Library book;
    book.menu();

    return 0;
}
