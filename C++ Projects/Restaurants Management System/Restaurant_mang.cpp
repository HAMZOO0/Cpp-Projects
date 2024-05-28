#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    // item
    //  pizza , , cake , burger , icecream , sandwaesh

    int p_p = 0, p_b = 0, p_i = 0, p_c = 0, p_s = 0; // purchase
    int s_p = 0, s_b = 0, s_i = 0, s_c = 0, s_s = 0; // sell
    int p = 0, b = 0, i = 0, c = 0, s = 0;           // count
    int choice, q;

    cout << "\n\t\t\tpurchase Items";
    cout << "\n\n Number of Pizza :";
    cin >> p_p;
    cout << "\n\n Number of Burger :";
    cin >> p_b;
    cout << "\n\n Number of Sandwich :";
    cin >> p_s;
    cout << "\n\n Number of Ice-Cream :";
    cin >> p_i;
    cout << "\n\n Number of Cake :";
    cin >> p_c;
p:                 // goto hare  !!
    system("cls"); // clear screen

    cout << "\n\t\t\tControl Panel";
    cout << "\n 1. Pizza";     // 1000
    cout << "\n 2. Burger";    // 950
    cout << "\n 3. Sandwich";  // 300
    cout << "\n 4. Ics-Cream"; // 150
    cout << "\n 5. Cake";      // 500
    cout << "\n 6. Details";
    cout << "\n.7. Exit";
    cout << "\n\n Enter Your Choice ==";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n\nEnter Pizza Quantity : ";
        cin >> q;
        if ((p_p) - (s_p) >= q) // we check if we ha q pizza value or not
        {
            s_p += q; // if  we have q pizzas then we enter q to seel pizza
            p += q * 1000;
            cout << "\n\n\n\t\t\t" << q << " Pizza Sales Thank you";
        }
        else
            cout << "\n\n\n\t\tSorry" << (p_p) - (s_p) << " Pizza Remaining in Resturent. . . ";
        break;
    case 2:
        cout << "\n\nEnter Burger Quantity : ";
        cin >> q;
        if ((p_b) - (s_b) >= q)
        {
            s_b += q;
            b += q * 950;
            cout << "\n\n\n\t\t\t" << q << " Burger Sales Thank you";
        }
        else
            cout << "\n\n\n\t\tSorry" << (p_b) - (s_b) << " Burger Remaining in Resturent. . . ";
        break;
    case 3:
        cout << "\n\nEnter Sandwich Quantity : ";
        cin >> q;
        if ((p_s) - (s_s) >= q)
        {
            s_b += q;
            s += q * 300;
            cout << "\n\n\n\t\t\t" << q << " Sandwich Sales Thank you";
        }
        else
            cout << "\n\n\n\t\tSorry" << (p_s) - (s_s) << " Sandwich Remaining in Resturent. . . ";
        break;
    case 4:
        cout << "\n\nEnter Ics-Cream Quantity : ";
        cin >> q;
        if ((p_i) - (s_i) >= q)
        {
            s_i += q;
            i += q * 150;
            cout << "\n\n\n\t\t\t" << q << " Ics-Cream Sales Thank you";
        }
        else
            cout << "\n\n\n\t\tSorry" << (p_c) - (s_c) << " Ics-Cream Remaining in Resturent. . . ";
        break;
    case 5:
        cout << "\n\nEnter Cake Quantity : ";
        cin >> q;
        if ((p_c) - (s_i) >= q)
        {
            s_c += q;
            c += q * 500;
            cout << "\n\n\n\t\t\t" << q << " Cake Sales Thank you";
        }
        else
            cout << "\n\n\n\t\tSorry" << (p_c) - (s_c) << " Cake Remaining in Resturent. . . ";
        break;
    case 6:
        system("cls");
        cout << "\n\t\tDetails Panel";
        cout << "\n\t PIZZA";
        cout << "\n Purchase Pizza Quantity :" << p_p;
        cout << "\n Sales Pizza Quantity :" << s_p;
        cout << "\n Remaning Pizza Quantity :" << (p_p) - (s_p);
        cout << "\n Total Pizza Price in a Day : " << p;
        cout << "\n.*..*..*..*..*..*..*..*..*..*..*..*.";
        cout << "\n\t BURGER";
        cout << "\n Purchase Burger Quantity :" << p_b;
        cout << "\n Sales Burger Quantity :" << s_b;
        cout << "\n Remaning Burger Quantity :" << (p_b) - (s_b);
        cout << "\n Total Burger Price in a Day : " << b;
        cout << "\n.*..*..*..*..*..*..*..*..*..*..*..*.";
        cout << "\n\t SANDWICH";
        cout << "\n Purchase Sandwich Quantity :" << p_s;
        cout << "\n Sales Sandwich Quantity :" << s_s;
        cout << "\n Remaning Sandwich Quantity :" << (p_s) - (s_s);
        cout << "\n Total Sandwich Price in a Day : " << s;
        cout << "\n.*..*..*..*..*..*..*..*..*..*..*..*.";
        cout << "\n\t ICS-CREAM";
        cout << "\n Purchase Ics-Cream Quantity :" << p_i;
        cout << "\n Sales Ics-Cream Quantity :" << s_i;
        cout << "\n Remaning Ics-Cream Quantity :" << (p_i) - (s_i);
        cout << "\n Total Ics-Cream Price in a Day : " << i;
        cout << "\n.*..*..*..*..*..*..*..*..*..*..*..*.";
        cout << "\n\t CAKE";
        cout << "\n Purchase Cake Quantity :" << p_s;
        cout << "\n Sales Cake Quantity :" << s_s;
        cout << "\n Remaning Cake Quantity :" << (p_s) - (s_s);
        cout << "\n Total Cake Price in a Day : " << s;
        cout << "\n.*..*..*..*..*..*..*..*..*..*..*..*.";

        break;

    case 7:
        exit(1);
    default:
        cout << "\n\n Invalid Value ... Try Again";
    }
    getch(); // we use getcg funtion bcz we want to pause parograme hare
    goto p;
    return 0;
}
