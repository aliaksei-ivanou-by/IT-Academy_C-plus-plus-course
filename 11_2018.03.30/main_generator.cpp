#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include "f_to_string.h"
#include "f_to_string.cpp"
#include "NumberToString.h"
#include "NumberToString.cpp"
#include <ctime>

int main()
{
	std::ofstream file("array.txt");
	int n;
	std::cout<<"Enter size of array: "<<std::endl;
	std::cin>>n;
	int array_in;
	std::string array_out;
	for(int i=0;i<n;++i){
		array_in=0+rand()%(9999);
		array_out=f_to_string(array_in);
		file<<array_out<<" ";
	};
	file<<std::endl;
	file.close();
	std::cout<<std::clock()/CLOCKS_PER_SEC;
    return 0;
}
