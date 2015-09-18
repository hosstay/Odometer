/***************************************************************************** 
   Taylor Hoss
   X432Z869
   Program #2

   This program implements the Odometer class. It contains the fuel and
   mileage entered by the user and is able to calculate miles driven
   and fuel efficiency, as well as allow the user to get the gas
   consumed since the odometer was last reset.  
    
*/

#include "odometer.cpp"
#include <iostream>
using namespace std;

int main (void)
{
   
   //initialize class
   Odometer od1;

   //declare interface variables
   int choice;
   double input;
   
   //main loop of prompting user for input and giving output
   //based on users choices                                 
   do
   {

      //prompt user
      cout<<"\nChoose an option:\n";
      cout<<"   1. Reset the odometer\n";
      cout<<"   2. Set fuel efficiency\n";
      cout<<"   3. Add miles driven\n";
      cout<<"   4. Find gallons of fuel consumed\n";   
      cout<<"   5. Quit\n";
      
      //get choice (re-prompt if non-valid response)
      do
      {
      
         cin>>choice;

      }while ( choice < 1 || choice > 5 );

      //reset the odometer
      if ( choice == 1 )
      {
         od1.Reset_odometer();
         
         cout<<"\nOdometer reset\n\n";

      }

      //set fuel efficiency
      if ( choice == 2 )
      {
         cin>>input;      

         od1.Set_fuelEfficiency(input);

         cout<<"\n Fuel efficiency set: "<<input<<" miles per gallon.\n\n";

      }

      //add miles driven
      if ( choice == 3 )
      {
         cin>>input;      

         od1.Add_milesDriven(input);

         cout<<"\n Miles added: "<<input<<"\n\n";

      }

      //find gallons of fuel consumed
      if ( choice == 4 )
      {
         cout<<"\nFuel consumed: "<<od1.Get_gasConsumed()<<" gallons.\n\n";
      }

   }while ( choice != 5 );

   //terminate program
   return 0;

}
