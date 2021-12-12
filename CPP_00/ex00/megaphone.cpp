#include <iostream>
#include <string>

#define RED "\033[1;31m"

int main(int argc, char **argv)
{
    if (argc == 1) {
        std :: cout << RED"* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std :: endl;
        return 1;
    }
    for (int i = 1; i < argc; i++) {
        std :: string av(argv[i]);
        for (int j = 0; j < av.size(); j++)
            std :: cout << (char) std :: toupper(av[j]);
    }
    std :: cout << std :: endl;
    return 0;
}
