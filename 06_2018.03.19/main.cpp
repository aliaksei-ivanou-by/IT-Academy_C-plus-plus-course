#include <iostream>
class Figure {
public:
	int n;
	virtual int change_area(int n) {return 1;}
	virtual int change_area() {return 1;}
};
class Square: public Figure {
public:
	int a;
	Square(int n_, int a_)	{n=n_; a=a_; std::cout<<"Square, a="<<a<<std::endl;}
	int change_area() {return a*a*n;}
};
class Rect: public Figure {
public:
	int a;
	int b;
	Rect(int n_, int a_, int b_) {n=n_; a=a_; b=b_; std::cout<<"Rect, a="<<a<<", b="<<b<<std::endl;}
	int change_area(int n) {return a*b*n;}
};
int x2(int n, Figure * p){
	return (p->change_area()*p->change_area(n))/n*2;
}
/*
void x2(int n, Figure * p){
	std::cout<<(p->change_area(n))/n*2<<std::endl;
}
*/
int main()
{
	Figure figure;
	int n=100, a1=3, a2=3, b2=4;
	/*
	std::cout<<"Enter n: ";
	int n;
	std::cin>>n;
	std::cout<<"Enter a for square: ";
	int a1;
	std::cin>>a1;
	std::cout<<"Enter a, b for square: ";
	int a2; int b2;
	std::cin>>a2>>b2;
	*/
	Square square(n, a1); Rect rect(n, a2,b2);
	std::cout<<"Result for square: ";
	int sq_sq=x2(n,&square);
	std::cout<<sq_sq<<std::endl;
	std::cout<<"Result for rect: ";
	int sq_rect=x2(n,&rect);
	std::cout<<sq_rect<<std::endl;
}
