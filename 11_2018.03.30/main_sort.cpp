#include <iostream>
#include <fstream>
#include <cmath>
#include "f_to_string.h"
#include "f_to_string.cpp"
#include "NumberToString.h"
#include "NumberToString.cpp"
#include <ctime>

int main()
{
	std::ifstream f_in("array.txt", std::ios::in);
	f_in.seekg(0, f_in.end);
	long long int length=f_in.tellg();
	long long int a, b, key, p;
	while(true)
	{
		key=0;
		p=0;
		while(p<=(length-10)){
			std::ofstream f_out("array.txt", std::ios::in);
			f_in.seekg(p,f_in.beg);
			f_in>>a>>b;
			if(a>b){
				int temp=a;
				a=b;
				b=temp;
				key++;
				f_out.seekp(p, f_out.beg);
				std::string a_str=f_to_string(a);
				std::string b_str=f_to_string(b);
				f_out<<a_str<<" "<<b_str<<" ";
				};
			p=p+5;
			f_out.close();
		};
		if (key==0)
			break;
	};
	f_in.close();
	std::cout << std::clock()/CLOCKS_PER_SEC;
    return 0;
}
