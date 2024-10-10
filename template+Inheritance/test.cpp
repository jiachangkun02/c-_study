//#include<iostream>
//using namespace std;
//
////全特化
//template<class T1,class T2>
//class date
//{
//public:
//	date(){cout<<"int,int"<<endl;}
//};
//
//template< >
//class date<int,char>
//{
//public:
//	date(){ cout<<"全特化"<< endl;}
//private:
//
//};
//
////偏特化
//template<class T2>
//class date<int,T2>
//{
//public:
//	date(){ cout<<"偏特化"<<endl;}
//};
//
//template<class T1,class T2>
//class date<T1*,T2*>
//{
//public:
//	date(){cout<<"T1*,T2*"<<endl;}
//};
//
//template<class T1,class T2>
//class date<T1&,T2&>
//{
//public:
//	date(){cout<<"T1&,T2&"<<endl;}
//};
//
//
//int main()
//{
//	date<int,int> d1;//调用的是未被特化的类模板 
//	date<int,char> d2;//调用的是被特化了的
//	//若第一个参数匹配  则会调用偏特化的类模板 若两个参数和全特化的匹配则会调用全特化——》根据参数类型来匹配特化模板
//	
//	date<int*,int*> d3;
//	date<int&,int&> d4;
//
//	return 0;
//}


#include<iostream>
using namespace std;
#include<string>

/*
int main()
{
	F1();
	F2(10);
	F2('a');
	F2(10.11);
	return 0;
}*/

//类的继承

//class person
//{
//public:
//	void print()
//	{
//		cout<<"person"<<_age<<  _name<<endl;
//		}
//
//private:
//	int _age;
//	string _name;
//};
//
////private是都不能访问  无论是继承还是单纯的从类内外部访问
////protected是不能从类外部访问  类内部和继承可以访问
////一般继承都用public  
//class student : public person
//{
//public:
//	void sprint()
//	{
//		cout<<"student"<<endl;
//	}
//};


class person
{
public:
	void fun()
	{
		cout<<"person"<<_age<<endl;
	}

private:
	int _age;
	string _name;
	string _num;
};

class student : public person
{
public:
	void fun()
	{
		cout<<"xueshen"<<_no<<endl;
	}

private:
	int _no;
};



int main()
{
	/*student s;
	s.sprint();
	person p;
	p.print();*/

	//person p;
	//student s;
	////类与类之间的赋值,子类对象可以赋值给父类对象/引用/指针  但父类只能有_age _name _num 这样  子类的_no就被忽略了 俗称“切片”
	////子给父 可以   父给子  不行
	////当父类和子类有同名变量的时候  创建哪个对象就优先调用 哪个类中的变量  子类成员隐藏了父类成员（重定义）
	////当想要调用父类的同名对象时  需要指定作用域 

	//person* ptr=&s;
	//person& sp=s;

	person p;
	p.fun();
	student s;
	s.fun();
	s.person::fun();
	//person 中的fun()和student中的fun()关系不是重载而是重定义  因为这俩作用域不同  只要名字相同作用域不同就是重定义，不管是变量还是函数 重载的前提是作用域要相同
	return 0;
}