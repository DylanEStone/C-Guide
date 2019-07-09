#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item currItem, sum;

    if (std::cin >> currItem) {
        int count = 1;
        while (std::cin >> sum) {
            if (currItem.isbn() == sum.isbn()){
                count ++;
            } else {
                std::cout << currItem.isbn() << "occurs " 
                << count << " times. " << std::endl;

                currItem = sum;
                count = 1;
            }
        }
        std::cout << currItem.isbn() << " occurs "
        << count << " times " << std::endl;
    }
    return 0;
}