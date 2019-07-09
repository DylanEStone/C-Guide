#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total;       // variable to hold data for the next ransaction
    //read the first transaction and ensure that there is data to process
    if (std::cin >> total) {
        Sales_item trans;   // variable to hold data for the next transaction
        while (std::cin >> trans) {
            // if we're still processing the same book
            if (total.isbn() == trans.isbn())
                total += trans; // update running total
            else {
                // print results for the previous book
                std::cout << total << std::endl;
                total = trans;  //total now refers to the next book
            }
        }
        std::cout << total << std::endl;    //print the last transaction
    } else  {
        // no input! warn the user
        std::cerr << "No data" << std::endl;
        return -1; // indicate failure
    }
}