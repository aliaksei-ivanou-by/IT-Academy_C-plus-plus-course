#include <iostream>
class Stack{
public:
	struct Elem{
		int num;
		Elem * p_prev;
	};
	Elem * top;
	Elem * pp;
	int count=0;
	Stack();
	~Stack();
	void push(int);
	int pop();
	int counter();
	void clear();
	Stack& operator=(const Stack &);
	Stack(const Stack & source);
};
Stack::Stack(){
	top=new Elem;
	top->p_prev=NULL;
	count=0;
};
Stack::~Stack(){
	while(top!=NULL){
		Elem * tmp=top;
		top=top->p_prev;
		delete tmp;
	}
}
void Stack::push(int n){
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
int Stack::pop(){
	if(top == NULL) throw 1;
	Elem tmp = *top;
	delete top;
	top = tmp.p_prev; 
	count--;
	return tmp.num;
}
int Stack::counter(){
	return count;
}
void Stack::clear(){
	while(count!=0){
		pop();
	}
}
Stack& Stack::operator=(const Stack & source){
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
Stack::Stack(const Stack & source){
	clear();
	Stack st_tmp;
	Elem * tmp1=source.top;
	while(tmp1!=NULL)
	{
		st_tmp.push(tmp1->num);
		tmp1=tmp1->p_prev;
	}
	Elem * tmp2 = new Elem;
	tmp2=st_tmp.top;
	while(tmp2!=NULL)
	{
		push(tmp2->num);
		tmp2=tmp2->p_prev;
	}
};
int main(){
	Stack obj1, obj2;
	obj1.push(4);
	obj1.push(3);
	obj1.push(2);
	obj1.push(1);
	obj2.push(40);
	obj2.push(30);
	obj2.push(20);
	obj2.push(10);
	Stack obj3(obj1);
	obj1=obj2;
	std::cout << "obj2" << std::endl;
	std::cout << &obj2 << " " << obj2.pop() << std::endl;
	std::cout << &obj2 << " " << obj2.pop() << std::endl;
	std::cout << &obj2<< " " << obj2.pop() << std::endl;
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
