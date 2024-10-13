#include<iostream>
using namespace std;

//class Person
//{
//public :
//	Person(const char* name )//= "peter"  当没有全缺省时无法调用构造函数
//	: _name(name )
//	{
//	cout<<"Person()" <<endl;
//	}
//	Person(const Person& p)
//	: _name(p._name)
//	{
//	cout<<"Person(const Person& p)" <<endl;
//	}
//
//	Person& operator=(const Person& p )
//	{
//	cout<<"Person operator=(const Person& p)"<< endl;
//
//	if (this != &p)
//		_name = p ._name;
//	return *this ;
//	}
//
//	~Person()
//	{
//	cout<<"~Person()" <<endl;
//	}
//protected :
//	string _name ; // 姓名
//	};
//
//
//class student : public Person
//{
//public:
//	student(const char* name, int id)
//		:Person(name),_stuid(id)//直接初始化父类中的_name 不行的，必须调用person类中的构造函数，才可以，或者干脆不初始化
//	{
//	
//	}
//
//	~student()
//	{
//		//~Person();//子类和父类的析构函数构成隐藏，因为编译器会将他们的名字统一编译成destructor（与多态有关）
//		/*Person::~Person();*///不需要显式的调用父类析构函数，因为在结束时会自动调用父类析构
//	}
//
//private:
//	int _stuid;
//};
//
//
//
//int main()
//{
//	student s("jia",234);
//	//student s;//    “student”: 没有合适的默认构造函数可用 (51, 10)
//	//静态成员继承之后还是同一个
//
//	return 0;
//}

//菱形继承导致数据冗余和二义性-》解决办法：指定作用域  和  虚继承
//class Person
//{
//public :
//string _name ; // 姓名
//};
//class Student : virtual public Person
//{
//protected :
//int _num ; //学号
//};
//class Teacher : virtual public Person
//
//{
//protected :
//int _id ; // 职工编号
//};
//
//class Assistant : public Student, public Teacher
//{
//protected :
//string _majorCourse ; // 主修课程
//};
//
//
//void Test ()
//{
//	// 这样会有二义性无法明确知道访问的是哪一个
//	Assistant a ;
//	a._name = "peter";
//	// 需要显示指定访问哪个父类的成员可以解决二义性问题，但是数据冗余问题无法解决
//	a.Student::_name = "xxx";
//	a.Teacher::_name = "yyy";
//}

//int main()
//{
//
//	Test();
//	return 0;
//}

//下图是菱形虚拟继承的内存对象成员模型：这里可以分析出D对象中将A放到的了对象组成的最下
//面，这个A同时属于B和C，那么B和C如何去找到公共的A呢？这里是通过了B和C的两个指针，指
//向的一张表。这两个指针叫虚基表指针，这两个表叫虚基表。虚基表中存的偏移量。通过偏移量
//可以找到下面的A。
class A
{
public:
	int _a;
};
// class B : public A
class B : virtual public A
{
public:
int _b;
};
// class C : public A
class C : virtual public A
{
public:
	int _c;
};

class D : public B, public C
{
public:
	int _d;
};
int main()
{
	D d;
	cout<<sizeof(d)<<endl;
	d.B::_a = 1;
	d.C::_a = 2;
	d._b = 3;//地址：0x001B7B40  偏移量（二进制到十进制）20
	d._c = 4;//地址；0x001B7B48  偏移量（二进制到十进制）12（共同去寻找基类中的_a 有效减少空间占用和二义性）
	d._d = 5;
	d._a=6;
	return 0;
}//总结：最好不要用菱形继承  会出太多问题 