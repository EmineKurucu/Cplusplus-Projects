/*Restaurant Bill 
 Write a program that computes the tax and tip on a restaurant bill for a patron with 
a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should 
be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip 
amount, and total bill on the screen. */
#include <iostream>
#include <iomanip> // for format the result
using namespace std;

int main(){
    // create the variales
    float meal_charge = 88.67;
    double tax , tip , total ;

    // calculate the tax and tip amount
    tax = meal_charge * 0.0675;

    tip = meal_charge * 0.2;

    total = meal_charge + tax + tip;

    // dipslay the results
    cout << "The charge of the meal is " << fixed << setprecision(2) << meal_charge << endl; 
    cout << "The tax amount is " << fixed << setprecision(2) << tax << endl; // we format the result
    cout << "The tip amount is " << fixed << setprecision(2)  << tip << endl ;
    cout << "The total amount is " << fixed << setprecision(2) << total ;

    return 0;
}