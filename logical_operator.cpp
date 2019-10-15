#include <iostream>
using namespace std;


int main()
{
    bool wear_coat{ false };
    double temperature{};
    int wind_speed{};

    const int wind_speed_for_coat{ 25 };     // wind over this value requires a coat
    const double temperature_for_coat{ 45 }; // temperature below this value requires a coat

    // Require a coat if either wind is too high OR temperature is too low
    cout << "\nEnter the current temperature in (F) :";
    cin >> temperature;
    cout << "Enter windspeed in (mph): ";
    cin >> wind_speed;
    
    if (wind_speed > wind_speed_for_coat || temperature<temperature_for_coat)
        cout<<"Coat is needed"<<endl;
    else if (wind_speed>wind_speed_for_coat && temperature>temperature_for_coat)
        cout<<"Coat is needed"<<endl;
    else 
        cout<<"Coat is not needed"<<endl;
return 0;
}
