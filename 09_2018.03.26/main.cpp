#include <iostream>

template <typename T>
class Stack{
public:
	struct Elem{
		T num;
		Elem * p_prev;
	};
	Elem * top;
	Elem * pp;
	int count=0;
	Stack();
	~Stack();
	void push(T);
	T pop();
	int counter();
	void clear();
	Stack& operator=(const Stack &);
	Stack(const Stack & source);
};
template <typename T>
Stack<T>::Stack(){
	top=new Elem;
	top->p_prev=NULL;
	count=0;
};
template <typename T>
Stack<T>::~Stack(){
	while(top!=NULL){
		Elem * tmp=top;
		top=top->p_prev;
		delete tmp;
	}
}
template <typename T>
void Stack<T>::push(T n){
	Elem * tmp = new Elem;
	tmp->num = n;
	tmp->p_prev = top;
	top = tmp;
	if(count==0){
		top->p_prev=NULL;
		pp=tmp;
	}
	count++;
}
template <typename T>
auto Stack<T>::pop()->T{
	if(top == NULL) throw 1;
	Elem tmp = *top;
	delete top;
	top = tmp.p_prev; 
	count--;
	return tmp.num;
}
template <typename T>
int Stack<T>::counter(){
	return count;
}
template <typename T>
void Stack<T>::clear(){
	while(count!=0){
		pop();
	}
}
template <typename T>
Stack<T>& Stack<T>::operator=(const Stack & source){
	clear();
	Stack st_tmp;
	Elem * tmp1=source.top;
	while(tmp1!=NULL)
	{
		st_tmp.push(tmp1->num);
		tmp1=tmp1->p_prev;
	}
	Elem * tmp2=st_tmp.top;
	while(tmp2!=NULL)
	{
		push(tmp2->num);
		tmp2=tmp2->p_prev;
	}
	return *this;
};
template <typename T>
Stack<T>::Stack(const Stack & source){
	*this=source;
};
int main(){
	Stack<double> obj1, obj2;
	obj1.push(4);
	obj1.push(3);
	obj1.push(2);
	obj1.push(1);
	obj2.push(40);
	obj2.push(30.2);
	obj2.push(20);
	obj2.push(10);
	Stack<double> obj3(obj1);
	obj1=obj2;
	std::cout << "obj2" << std::endl;
	std::cout << &obj2 << " " << obj2.pop() << std::endl;
	std::cout << &obj2 << " " << obj2.pop() << std::endl;
	std::cout << &obj2 << " " << obj2.pop() << std::endl;
	std::cout << "" << std::endl;
	std::cout << "obj1" << std::endl;
	std::cout << &obj1 << " " << obj1.pop() << std::endl;
	std::cout << &obj1 << " " << obj1.pop() << std::endl;
	std::cout << &obj1 << " " << obj1.pop() << std::endl;
	std::cout << "" << std::endl;
	std::cout << "obj3" << std::endl;
	std::cout << &obj3 << " " << obj3.pop() << std::endl;
	std::cout << &obj3 << " " << obj3.pop() << std::endl;
	std::cout << &obj3 << " " << obj3.pop() << std::endl;
	return 0;
}
