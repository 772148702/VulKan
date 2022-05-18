#include <iostream>
#include <stdexcept>
#include "lve_app.hpp"
#include<filesystem>
int main(int  argc, char* argv[])
{
    std::cout << "Current working directory: " << std::filesystem::current_path() << '\n';
    lve::FirstApp app;

    try
    {
        app.run();
    
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;

}
