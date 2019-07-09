// decrements from 10 to 0 using while loop and decrementing
#include <iostream>
int main() 
{
    int count = 10;
    while(count > 0){
        std::cout << count << " ";
        count--;
    }
    std::cout << std::endl;
}