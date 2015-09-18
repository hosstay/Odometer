/***************************************************************************** 
   Taylor Hoss
   X432Z869
   Program #2 
   
*/

#include "odometer.hpp" 

//mutator functions
void Odometer::Reset_odometer(void)
{
   milesDriven = 0;
}

void Odometer::Set_fuelEfficiency(double fe)
{
   fuelEfficiency = fe;
}

void Odometer::Add_milesDriven(double md)
{
   milesDriven += md;
}

//accessor functions
double Odometer::Get_gasConsumed(void)
{
   return (1 / ( fuelEfficiency / milesDriven ));
}
