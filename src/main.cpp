#include <iostream>
#include <stdexcept>

int main()
{
    try
    {
        std::cout<<"app launched!"<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

}
