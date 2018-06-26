#include <iostream>
#include <vector>

int main()
{
    std::cout << "Hello!\n";

    std::vector<double> vec = {1,2,3};
    for(auto v : vec)
        std::cout << v << std::endl;

    return 0;
}