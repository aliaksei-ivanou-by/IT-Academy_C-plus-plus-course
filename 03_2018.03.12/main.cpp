#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "bubble_sort.cpp"

void bubble_sort(int* array, int n_array); 

int main()
{
	int n_array;
	std::cout<<"Size_array: ";
	std::cin>>n_array;
	int array[n_array];
	for(int i=0; i<=n_array; i++)
	{
		array[i]=rand()%1000;
	}
	std::cout<<"Unsorted array"<<std::endl;
	for(int i=0; i<=n_array; i++)
	{
		std::cout<<array[i]<<" ";
	}
	bubble_sort(array,n_array);
	std::cout<<""<<std::endl;
	std::cout<<"Sorted array"<<std::endl;
	for(int i=0; i<=n_array; i++)
	{
		std::cout<<array[i]<<" ";
	}
	getch();
    return 0;
}
