#include <iostream>
using namespace std;
#define gravitational 9.8

int main()
{
    cout << "This is a small learning project by 'Pawan Negi'";
    cout << "\n\n\n";

    cout << "What kind of force you want to calculate ?\n";
    cout << "1-Fundamental\n 2-Gravitational\n 3-Frictional\n Enter no(1,2,3!)\n";
    int x;
    cin >> x;

    if (x == 1)
    {

        float mass, acceleration, force_01;
        cout << "Enter Mass of the object (KG) : ";
        cin >> mass;
        cout << "Enter Acceleration of the object (m/s) : ";
        cin >> acceleration;

        force_01 = mass * acceleration;
        cout << "The net force on a " << mass << " Kg" << " will be " << force_01 << " Newtons.";
    }

    else if (x == 2)
    {
        // w=m*g
        float mass02, weight;
        cout << "Enter Mass of the object (KG) : ";
        cin >> mass02;
        weight = mass02 * gravitational;
        cout << "Gravitational Force (weight) of a " << mass02 << " Kg " << " will be " << weight << " Newtons.";
    }

    else if (x == 3)
    {
        float mass03, frictional, normal, mu;
        cout << "Enter Mass of the object (KG) : ";
        cin >> mass03;
        normal = mass03 * gravitational;
        cout << "The Normal force on the " << mass03 << " Kg object will be " << normal << " N \n"
             << "Enter the value of 'μ' :\n";
        cin >> mu;
        frictional = mu * normal;
        cout << "The frictional force will be : " << frictional << " Newtons.";
    }

    else
    {

        cout << "Seems a wrong approach !, Please try again!";
    }

    return 0;
}