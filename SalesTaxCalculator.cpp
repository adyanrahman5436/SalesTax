#include <iostream>

using namespace std;

//this program gets the county and state tax on a purchase and combines them to see the total tax

int
main ()
{
    
    //declaring the variables and assigning the value of what they are
    
    double countyTax, stateTax, totalTax, countyTax2, stateTax2;
    countyTax = 0.02;
    stateTax = 0.06;
    double purchase;

    //getting an input for purchase price of an item

    cout << "Purchase Cost = " << endl;
    cin >> purchase;
    
    //calculating the state and county tax based on the assigned value for them

    countyTax2 = (countyTax * purchase);
    stateTax2 = (stateTax * purchase);

    //giving an output on how much the sales taxes are
    
    cout << "State sales tax = $" << stateTax2 << endl;
    cout << "County sales tax = $" << countyTax2 << endl;
    
    //calculation of total tax

    totalTax = stateTax2 + countyTax2;
    
    //output for total tax

    cout << "Total sales tax = $" << totalTax << endl;

    return 0;
}

