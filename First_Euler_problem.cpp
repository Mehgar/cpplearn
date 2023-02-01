#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int handle = 0;
    while (handle < 1000){
        if ((handle % 3 == 0) or (handle % 5 == 0)){
            sum = sum + handle;
        }
        
        handle++;
    }
    
    std::cout << "Sum is : " << sum << std::endl;
    return 0;
}
