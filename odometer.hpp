/***************************************************************************** 
   Taylor Hoss
   X432Z869 
   Program #2

   This program implements the Odometer class. It contains the fuel and
   mileage entered by the user and is able to calculate miles driven
   and fuel efficiency, as well as allow the user to get the gas
   consumed since the odometer was last reset.
    

   Psuedo Code
      Class Name: Odometer
      Data:
         milesDriven 
         fuelEfficiency
      Mutator Functions:
         Reset_odometer
         Set_fuelEfficiency
         Add_milesDriven
      Accessor Functions:
         Get_gasConsumed

*/

class Odometer
{

   //data
   double milesDriven, fuelEfficiency;

 public:
   //mutator functions
   void Reset_odometer(void);
   void Set_fuelEfficiency(double fe);
   void Add_milesDriven(double md);

   //accessor functions
   double Get_gasConsumed(void);
};
