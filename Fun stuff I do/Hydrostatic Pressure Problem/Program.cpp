#include <iostream>
using namespace std;
int main()
{
    float density, g, height,pressure;
    cout << "Enter density(kg/m^3): "; cin >> density;
    cout << "\n" << "Enter gravity(n/kg or m/s^2): "; cin >> g;
    cout << "\n" << "Enter height(m): "; cin >> height;
    pressure = density * g * height;
    cout << "\n" << "The Hydrostatic pressure is: " << pressure;

}