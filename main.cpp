#include <iostream>
#include "first.h"
#include <cmath> // for abs(); which is: The abs() function in C++ returns the absolute value of an integer number.

using namespace std;

int main()
{

    /*-------------------------------------------------------------
    Here’s some sample code using these operators with integers:
    ---------------------------------------------------------------*/
    cout << "Enter an integer: ";
    int x{};
    cin >> x;
 
    cout << "Enter another integer: ";
    int y{};
    cin >> y;
 
    if (x == y)
        cout << x << " equals " << y << '\n';
    if (x != y)
        cout << x << " does not equal " << y << '\n';
    if (x > y)
        cout << x << " is greater than " << y << '\n';
    if (x < y)
        cout << x << " is less than " << y << '\n';
    if (x >= y)
        cout << x << " is greater than or equal to " << y << '\n';
    if (x <= y)
        cout << x << " is less than or equal to " << y << '\n';

    /*--------------------------
    Boolean conditional values:
    ----------------------------*/
    // if (!b1) ...
    // if (b1) ...

    /*-----------------------------------
    Comparison of floating point values:
    ------------------------------------*/

    double b1{ 100.0 - 99.99 }; // should equal 0.01
    double b2{ 10.0 - 9.99 }; // should equal 0.01

    if (b1 == b2)
        cout << "b1 == b2" << '\n';
    else if (b1 > b2)
        cout << "b1 > b2" << '\n';
    else if (b1 < b2)
        cout << "b1 < b2" << '\n';
    /*
    Variables d1 and d2 should both have value 0.01. But this program prints an unexpected result:

    d1 > d2

    If you inspect the value of d1 and d2 in a debugger, you’d likely see that 
    d1 = 0.0100000000000005116 and d2 = 0.0099999999999997868. Both numbers are close to 0.01, 
    but d1 is greater than, and d2 is less than.
    */


    /*------------------------
    Floating point equality
    -------------------------*/

    //Avoid using operator== and operator!= with floating point operands.
    //In above example if we used floating point operands we will have expected result.

    // epsilon is (e.g. 0.00000001, sometimes written 1e-8)

    cout << isAlmostEqual(11151,152,1500) << '\n';
    /*
    std::abs() is a function in the <cmath> header that returns the absolute value of its argument. 
    So std::abs(a - b) <= epsilon checks if the distance between a and b is less than whatever epsilon 
    value representing "close enough" was passed in. If a and b are close enough, the function returns 
    true to indicate they're equal. Otherwise, it returns false.
    */

   

    return 0;
}