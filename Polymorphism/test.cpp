#include<iostream>
using namespace std;

//class Person
//{
//public :
//	Person(const char* name )//= "peter"  ��û��ȫȱʡʱ�޷����ù��캯��
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
//	string _name ; // ����
//	};
//
//
//class student : public Person
//{
//public:
//	student(const char* name, int id)
//		:Person(name),_stuid(id)//ֱ�ӳ�ʼ�������е�_name ���еģ��������person���еĹ��캯�����ſ��ԣ����߸ɴ಻��ʼ��
//	{
//	
//	}
//
//	~student()
//	{
//		//~Person();//����͸�������������������أ���Ϊ�������Ὣ���ǵ�����ͳһ�����destructor�����̬�йأ�
//		/*Person::~Person();*///����Ҫ��ʽ�ĵ��ø���������������Ϊ�ڽ���ʱ���Զ����ø�������
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
//	//student s;//    ��student��: û�к��ʵ�Ĭ�Ϲ��캯������ (51, 10)
//	//��̬��Ա�̳�֮����ͬһ��
//
//	return 0;
//}

//���μ̳е�����������Ͷ�����-������취��ָ��������  ��  ��̳�
//class Person
//{
//public :
//string _name ; // ����
//};
//class Student : virtual public Person
//{
//protected :
//int _num ; //ѧ��
//};
//class Teacher : virtual public Person
//
//{
//protected :
//int _id ; // ְ�����
//};
//
//class Assistant : public Student, public Teacher
//{
//protected :
//string _majorCourse ; // ���޿γ�
//};
//
//
//void Test ()
//{
//	// �������ж������޷���ȷ֪�����ʵ�����һ��
//	Assistant a ;
//	a._name = "peter";
//	// ��Ҫ��ʾָ�������ĸ�����ĳ�Ա���Խ�����������⣬�����������������޷����
//	a.Student::_name = "xxx";
//	a.Teacher::_name = "yyy";
//}

//int main()
//{
//
//	Test();
//	return 0;
//}

//��ͼ����������̳е��ڴ�����Աģ�ͣ�������Է�����D�����н�A�ŵ����˶�����ɵ�����
//�棬���Aͬʱ����B��C����ôB��C���ȥ�ҵ�������A�أ�������ͨ����B��C������ָ�룬ָ
//���һ�ű�������ָ��������ָ�룬��������������������д��ƫ������ͨ��ƫ����
//�����ҵ������A��
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
	d._b = 3;//��ַ��0x001B7B40  ƫ�����������Ƶ�ʮ���ƣ�20
	d._c = 4;//��ַ��0x001B7B48  ƫ�����������Ƶ�ʮ���ƣ�12����ͬȥѰ�һ����е�_a ��Ч���ٿռ�ռ�úͶ����ԣ�
	d._d = 5;
	d._a=6;
	return 0;
}//�ܽ᣺��ò�Ҫ�����μ̳�  ���̫������ 