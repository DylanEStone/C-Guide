/* Write a program that uses a while to sum teh numbers from 50 to 100 */
#include <iostream>
int main() 
{
    int start = 50, sum = 0;

    while(start < 100) {
        sum += start;
        ++start;
    }
    std::cout << "Sum from 50 to 100 is " << sum << std::endl;
    return 0;
}