#include <iostream>
int main()
{
	int N;
	std::cout<<"Enter N: ";
	std::cin>>N;
	bool key;
	for(int i=1; i<=N; i++)
	{
		key=true;
		for(int j=2; j<i; j++)
		{
			if(i%j==0)
			{
				key=false;
				break;
			}
		}
		if(key)
		{
			std::cout<<i<<" ";
		}
	}
return 0;
}
