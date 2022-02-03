#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc <= 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    
    i = 1;
    while (argv[i])
    {
        j = 0;
        while (argv[i][j])
        {
            putchar(toupper(argv[i][j]));
            j++;
        }
        std::cout << " ";
        i++;
    }
    std::cout << std::endl;    

    return (0);
}