#include <iostream>
using namespace std;
#include <string>


//int main()
//{
//	string s3("hello world");
//
//	//for (size_t i = 0; i < s3.size(); ++i)
//	//{
//	//	s3[i] += 1;//�ᷢ��ʲô�� ->i f m m p ! x p s m e
//	//	//��ÿ���ַ���ASCII��ֵ����1 ��ת��Ϊ�ַ�
//	//}
//
//	for (size_t i = 0; i < s3.size(); ++i)
//	{
//		s3[i] += '0';//�ᷢ��ʲô�� ->����   ��Ϊ0��ASCIIֵ��48 
//		//�����Ǽ��ϵ��������ֻ��Ǽ����ַ�  ������ASCII�Ļ����ϼ�
//	}
//
//	for (size_t i = 0; i < s3.size(); ++i)
//	{
//		cout<<s3[i]<<" ";
//	}
//	cout << endl;
//	return 0;
//}

//static int strtoint(string& str)
//{
//	int  val = 0;
//	//const������  ֻ�ܶ�����д
//	//const_iterator  ����ɶ�������
//	string::const_reverse_iterator it = str.rbegin();//����ɶ�������
//	while(it!=str.rend())
//	{
//		val *= 10;
//		val += (*it - '0');
//		it++;
//	}
//	return val;
//}



int main()
{
	//������
	/*string s1("hello world");*/
	//string::iterator it=s1.begin();
	//while (it !=s1.end())
	//{
	//	*it -= 1;
	//	++it;
	//	
	//}
	//it = s1.begin();
	
	////��Χfor-��ԭ����������
	//for(auto c : s1)
	//{
	//	cout << c << endl;
	//}
	//while (it != s1.end())
	//{
	//	cout << *it << " ";
	//	++it;
	//}

	/*string::reverse_iterator rit = s1.rbegin();
	while (rit != s1.rend())
	{
		cout << *rit << endl;
		rit++;
	}*/

	string s2("1245");

	/*cout << strtoint(s2) << " ";*/

	string s1("abc");
	//capacity
	//int sz = s1.capacity();
	//for (size_t i = 0; i < 20000; ++i)
	//{
	//	s1.push_back('c');//����������1.5������������
	//	s1.push_back('s');
	//	if(sz!=s1.capacity())
	//	{
	//		sz = s1.capacity();
	//		cout << sz << endl;
	//	}
	//}


	//resize��reserve������
	//1.���ַ����ĳ���С��resize(x)���ü��ַ���������  ������������
	//2.reserve���ǵ������ٿռ�


	return 0;
}