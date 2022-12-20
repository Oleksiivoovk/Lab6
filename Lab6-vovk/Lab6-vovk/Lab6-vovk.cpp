
#include <iostream>
using namespace std;

struct Date 
{
    int year;
};
    struct Tank
{
    int armor;
    float calibr;
    double speed;
    
    Date vipusck;
    };


int main()
{
    setlocale(LC_ALL, "Ukr");

    
    
    Tank t34;
    t34.armor;
    t34.calibr;
    t34.speed;
    t34.vipusck.year = 1944;
   
    cout << "рiк випуску: " << t34.vipusck.year << endl;
    
    cout << "вiдповiдь 1: " << endl;
    cin >> t34.armor;
    
    cout << "вiдповiдь 2: " << endl;
    cin >> t34.calibr;
    
    cout << "вiдповiдь 3: " << endl;
    cin >> t34.speed;
   
    cout << "правильна вiдповiдь 1: " << endl;
    cout << 45 << endl;
   
    cout << "правильна вiдповiдь 2: " << endl;
    cout << 75 << endl;
   
    cout << "правильна вiдповiдь 3: " << endl;
    cout << 45 << endl;

    
    if (t34.armor != 45)
    {
        cout << "Ваша вiдповiдь: " << "false" << endl;
    }

    else
    {
        cout << "Ваша вiдповiдь: " << "true" << endl;
    }
    if (t34.calibr != 75)
    {
        cout << "Ваша вiдповiдь: " << "false" << endl;
    }

    else
    {
        cout << "Ваша вiдповiдь: " << "true" << endl;
    }
    if (t34.speed != 45)
    {
        cout << "Ваша вiдповiдь: " << "false" << endl;
    }

    else
    {
        cout << "Ваша вiдповiдь: " << "true" << endl;
    }

}

