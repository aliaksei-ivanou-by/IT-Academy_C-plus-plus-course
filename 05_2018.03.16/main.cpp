#include <iostream>
class Array
{
	unsigned int size;
	int * p;
public:
	Array(int size_) {size = size_; p = new int[size];}
	Array(Array const &obj)
	{
		std::cout<<""<<std::endl;
		std::cout<<"Copy"<<std::endl;
		p=new int[obj.size];
		for (int i=0; i<obj.size; i++)
			p[i]=obj.p[i];
		size=obj.size;
		std::cout<<""<<std::endl;
	}
	int& operator[](int index)
	{
		if(index < size) 
			return p[index]; 
		else throw 5;
	}
	Array& operator=(Array &array) {
		delete [] p;
		size=array.size;
		p=new int [size];
		for (int i=0; i<size; i++) {p[i]=array.p[i];}
		return *this;
    }
	~Array(){delete [] p;}
};
int main()
{	
	// 1
	Array arr(5);
	for(int i = 0; i < 5; i++)
	{
		arr[i] = i+1;
	}
	try{
		for(int i = 0; i < 6; i++)
		{
			std::cout << arr[i] <<std::endl;
		}
	}catch(int) {std::cout << "Use good!" <<std::endl;}
	// 2
	Array a(5);
	for(int i = 0; i < 5; i++)
	{
		a[i] = i+1;
	}
	Array b(a);
	for(int i = 0; i < 5; i++)
	{
		a[i] = i*5+1;
	}
	std::cout<<"a:"<<std::endl;
	for(int i = 0; i < 5; i++)
		{
			std::cout << a[i] <<std::endl;
		}
	std::cout<<""<<std::endl;
	std::cout<<"b:"<<std::endl;
	for(int i = 0; i < 5; i++)
		{
			std::cout << b[i] <<std::endl;
		}
	return 0;
}
