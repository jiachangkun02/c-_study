#include <iostream>
using namespace std;
#include <string>


//int main()
//{
//	string s3("hello world");
//
//	//for (size_t i = 0; i < s3.size(); ++i)
//	//{
//	//	s3[i] += 1;//会发生什么？ ->i f m m p ! x p s m e
//	//	//给每个字符的ASCII码值加上1 再转换为字符
//	//}
//
//	for (size_t i = 0; i < s3.size(); ++i)
//	{
//		s3[i] += '0';//会发生什么？ ->乱码   因为0的ASCII值是48 
//		//不管是加上单纯的数字还是加上字符  都是在ASCII的基础上加
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
//	//const迭代器  只能读不能写
//	//const_iterator  正向可读迭代器
//	string::const_reverse_iterator it = str.rbegin();//反向可读迭代器
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
	//迭代器
	/*string s1("hello world");*/
	//string::iterator it=s1.begin();
	//while (it !=s1.end())
	//{
	//	*it -= 1;
	//	++it;
	//	
	//}
	//it = s1.begin();
	
	////范围for-》原来；迭代器
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
	//	s1.push_back('c');//基本上是以1.5倍的容量扩容
	//	s1.push_back('s');
	//	if(sz!=s1.capacity())
	//	{
	//		sz = s1.capacity();
	//		cout << sz << endl;
	//	}
	//}


	//resize和reserve的区别
	//1.若字符串的长度小于resize(x)则会裁剪字符串的内容  若大于则会填充
	//2.reserve则是单纯开辟空间


	return 0;
}