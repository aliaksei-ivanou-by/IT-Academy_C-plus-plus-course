#include <iostream>
#include <stdlib.h>
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
    return 0;
}
void bubble_sort(int* array, int n_array)
{
	int temp=0;
	for(int i=0; i<=n_array-1; i++)
	{
		for(int j=0; j<=n_array-i-1; j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
}
