#include <iostream>
int main()
{
    int a=0, b=0;
    std::cin>>b;
    while(a<b)
    {
        if((a%2==0) || (a%2!=0) || (a%7==0)) // четные, нечетные или делящиеся на 7 нацело
            std::cout << a << std::endl;
        a++;
    }
    return 0;
}
