//---------------------------------------------------
//  Miles to km.cpp
// Miles to Kilometer calculator
//
//  Created by Avnish Asthana on 2022-01-21.
//--------------------------------------------------
#include <iostream>
using namespace std;
int main()
{   //variable declarations
    double Miles,Km;
    int ans;
    //prompt to choose Km or Miles.
    cout<<"Please press 1 to enter distance in miles and 0 to enter distance in km"<<endl;
    cin>>ans;
        if (ans>0)
    {
    cout<< "please enter distance in miles:";
    cin>>Miles;
    Km=Miles*1.6093;
    cout<<"Equivalent distance in km is:"<< Km <<endl;
    }
        else
    {
        cout<< "please enter distance in Km:";
        cin>>Km;
        Miles=Km/1.6093;
        cout<<"Equivalent distance in miles is:"<< Miles <<"Miles"<<endl;
    }
    return 0;
}


