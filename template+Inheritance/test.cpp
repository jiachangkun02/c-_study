//#include<iostream>
//using namespace std;
//
////ȫ�ػ�
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
//	date(){ cout<<"ȫ�ػ�"<< endl;}
//private:
//
//};
//
////ƫ�ػ�
//template<class T2>
//class date<int,T2>
//{
//public:
//	date(){ cout<<"ƫ�ػ�"<<endl;}
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
//	date<int,int> d1;//���õ���δ���ػ�����ģ�� 
//	date<int,char> d2;//���õ��Ǳ��ػ��˵�
//	//����һ������ƥ��  ������ƫ�ػ�����ģ�� ������������ȫ�ػ���ƥ��������ȫ�ػ����������ݲ���������ƥ���ػ�ģ��
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

//��ļ̳�

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
////private�Ƕ����ܷ���  �����Ǽ̳л��ǵ����Ĵ������ⲿ����
////protected�ǲ��ܴ����ⲿ����  ���ڲ��ͼ̳п��Է���
////һ��̳ж���public  
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
	////������֮��ĸ�ֵ,���������Ը�ֵ���������/����/ָ��  ������ֻ����_age _name _num ����  �����_no�ͱ������� �׳ơ���Ƭ��
	////�Ӹ��� ����   ������  ����
	////�������������ͬ��������ʱ��  �����ĸ���������ȵ��� �ĸ����еı���  �����Ա�����˸����Ա���ض��壩
	////����Ҫ���ø����ͬ������ʱ  ��Ҫָ�������� 

	//person* ptr=&s;
	//person& sp=s;

	person p;
	p.fun();
	student s;
	s.fun();
	s.person::fun();
	//person �е�fun()��student�е�fun()��ϵ�������ض����ض���  ��Ϊ����������ͬ  ֻҪ������ͬ������ͬ�����ض��壬�����Ǳ������Ǻ��� ���ص�ǰ����������Ҫ��ͬ
	return 0;
}