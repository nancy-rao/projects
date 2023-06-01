#include <iostream>
using namespace std;
int main(){
float normal_temp = 70;                    // Normal temperature is the temperature on which there is no need to do any change in the system
float desired_temp, current_temp ;         //desired_temp is the temperature - the user want 
cout<<"Desired Temperature is = ";         //current_temp is the temperature on which thermostat is working
cin>>desired_temp ;
if(desired_temp == normal_temp){           
    cout<<" Temperature is Normal.\n";
    current_temp = normal_temp;
    cout<<"Current Temperature of Thermostat = "<<current_temp<<"\n";
    cout<<"Cooling and heating systems are off.";
}
else if(desired_temp < normal_temp){             //decrease in temperature
    cout<<"Cooling system is ON.\n";
    current_temp = desired_temp;
    cout<<"Current Temperature of Thermostat = "<<current_temp<<"\n";
}
else {                                              //increase in temperature 
    cout<<"Heating system is ON.\n";
    current_temp = desired_temp;
    cout<<"Current Temperature of Thermostat = "<<current_temp<<"\n";
}
}