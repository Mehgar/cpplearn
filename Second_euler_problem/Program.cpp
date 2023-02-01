#include <iostream>

using namespace std;

int main()
{
    int handle = 0;
    int first = 1;
    int second = 2;
    while (handle < 10){
        int latter_noice = first + second;
        std::cout << latter_noice << "-";
        first = second;
        second = latter_noice;
        
        handle++;
    }
    return 0;
}
