#include <iostream>
#include "Sales_item.h"

int main()
{
    int count;
    double rev;
    Sales_item current, check;

    if(std::cin >> current){
        count = 1;
        rev = 0.00;
        while(std::cin >> check){
            if(current.isbn() == check.isbn()) {
                count ++;

            } else{
                std::cout << "ISBN: " << current.isbn() << "\nCopies Sold: "  
                    << count << "\nAverage Price: " << current.avg_price() << std::endl;
                count = 0;
            }
        } std::cout << "ISBN: " << current.isbn() << "\nCopies Sold: " << 
        count << "\nAverage Price: " << current.avg_price() << std::endl;
        return 0;
    } else(std::cout << "Error reading data");
    return -1;
}