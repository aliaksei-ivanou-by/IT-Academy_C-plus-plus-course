#include <iostream>

int main()
{
    int key=8;
    int a_n2=0;
    int a_n1=1;
    int a_n;
    std::cout<<a_n2<<std::endl;
    std::cout<<a_n1<<std::endl;
    while(key)
    {
        a_n=a_n2+a_n1;
        std::cout<<a_n<<std::endl;
        a_n2=a_n1;
        a_n1=a_n;
        key--;
    }
    return 0;
}