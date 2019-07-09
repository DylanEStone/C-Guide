/*
A data structure is a way to group together related data elements and a strategy for using
those data. As one example, out Sales_item class groups an ISBN , a count of how many copies
of that book had been sold, and the revenue associated with those sales. It also provides a
set of operations sucha s the isbn funciton and the >>, <<, +, and += operators.

In C++ data structures are defined using classes. 
*/
#include<iostream>
// Here, we are defining out own Sales_item class
struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
// semicolon required because we can define variables outside of the class body

/*
Class Data Members

The class body defines teh members of the class. Our class has only data members. The data
members of a class define the contents of the objects of that class type. Each object has
its own copy of the class data members. Modifying the data memers of one object does not 
change the data in any other Sales_data object.
 */

struct Foo{}
int main()
{
    return 0;
}
// without the semicolon after the class definition, the program will not compile