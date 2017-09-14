#include<limits>
#include<iostream>

int main()
{
    char c = 'A';
    signed int x = -2;
    unsigned int y = 3;
    bool b = false;
    double d = 232.4332;
    float f = 2.124f;
    
       	std::cout << "type\t\t\t\tlowest\t\t\thighest\n";
        std::cout << "bool\t\t\t\t"
        << std::numeric_limits<bool>::min() << "\t\t\t"
        << std::numeric_limits<bool>::max() << '\n';
        
        std::cout << "char\t\t\t\t"
        << static_cast<int>(std::numeric_limits<char>::min()) << "\t\t\t"
        << static_cast<int>(std::numeric_limits<char>::max()) << '\n';
    
        std::cout << "signed char\t\t\t"
        << static_cast<int>(std::numeric_limits<signed char>::min()) << "\t\t\t"
        << static_cast<int>(std::numeric_limits<signed char>::max()) << '\n';
    
        std::cout << "unsigned char\t\t\t"
        << static_cast<int>(std::numeric_limits<unsigned char>::min()) << "\t\t\t"
        << static_cast<int>(std::numeric_limits<unsigned char>::max()) << '\n';
    
        std::cout << "wchar_t\t\t\t\t"
        << std::numeric_limits<wchar_t>::min() << "\t\t"
        << std::numeric_limits<wchar_t>::max() << '\n';
    
        std::cout << "int\t\t\t\t"
        << std::numeric_limits<int>::min() << "\t\t"
        << std::numeric_limits<int>::max() << '\n';
        
        std::cout << "unsigned int\t\t\t"
        << std::numeric_limits<unsigned int>::min() << "\t\t\t"
        << std::numeric_limits<unsigned int>::max() << '\n';
        
        std::cout << "long int\t\t"
        << std::numeric_limits<long int>::min() << "\t\t"
        << std::numeric_limits<long int>::max() << '\n';
        
        std::cout << "float\t\t\t"
        << std::numeric_limits<float>::min() << "\t\t"
        << std::numeric_limits<float>::max() << '\n';
    
        std::cout << "double\t\t\t"
        << std::numeric_limits<double>::min() << "\t\t"
        << std::numeric_limits<double>::max() << '\n';

    return 0;
}
