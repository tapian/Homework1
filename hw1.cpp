//
//  INFO450 ADV
//

#include <iostream>
using namespace std;

int main()
{
    // using values:
    // l = 5 and w = 10
    double length = 5;
    double width = 10;
    // calculating perimeter and area
    double perim;
    double area;
    
    // formulas
    perim = 2 * (length + width);
    area = width * length;
    
    // display message output
    cout << "the perimeter is " << perim << endl;
    cout << "the area is " << area << endl;

    return 0;
}
