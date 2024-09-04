//#include<iostream>
//using namespace std;
//#include <string>
//
//void test_string(string  str )
//{
//	//string file3("hello.cpp");
//	string str3(str);
//	/*string::iterator it = str3.begin();
//	while(it !=str3.end() )
//	{
//		cout << *it << " ";
//		it++;
//	}*/
//
//	//新增接口
//	const char* it1 = str3.c_str();
//	while (*it1)
//	{
//		cout << *it1 ;
//		++it1;
//	}
//	cout << endl;
//	cout << str3 << endl;
//	cout << str3.c_str() << endl;
//
//	str3 += '\0';
//	str3 += "world";
//	cout << str3 << endl;
//	cout << str3.c_str() << endl;
//	
//	
//
//}
//
//int main()
//{
//	string str1("hello world");
//	test_string(str1);
//
//
//	return 0;
//}



#include<iostream>
using namespace std;

//gdk->china    unicode->utf8,utf16,utf32
//char str[]="中国";   五个字节
//str[3]=-7  and so on;

//void get_split_url(const string& url)
//{
//	size_t st1 = url.find(':');
//	if (st1 != string::npos)
//	{
//		cout << url.substr(0,st1) << endl;
//	}
//	size_t st2 = url.find('/', st1 + 3);
//	if (st2!=string::npos)
//	{
//		cout << url.substr(st1 + 3,st2-st1-3) << endl;
//	}
//	cout << url.substr(st2 + 1) << endl;
//
// }
//
//inline  void test_string()
//{
//	//string str1("string.cpp");
//	//string str2("string.c");
//	//string str3("string.html");
//	//string str4("string.html.zip");
//
//	//size_t found_index = str1.find('.');//返回位置下标
//	//if (found_index!=string::npos)//找到返回下标找不到nops  
//	//{
//	//	cout << str1.substr(found_index) << endl;//特定位置向后截取
//	//	cout << str2.substr(found_index) << endl;
//	//	cout << str3.substr(found_index) << endl;
//	//}
//	//size_t found = str4.rfind('.');
//	//if (found != string::npos)
//	//{
//	//	cout << str4.substr(found) << endl;
//	//}
//
//	string ollamaurl("https://ollama.com/library/llama3.1");
//	string gpturl("https://chatgpt.com/c/092cde33-0284-411c-9749-a4b3b4a39cba");
//	get_split_url(ollamaurl);
//	get_split_url(gpturl);
//
//}
//
//
//
//int main()
//{
//	test_string();
//
//	return 0;
//}


void test_string()
{
	string str("hello");
	string  ret1 = str + "world";//str不改变自身
	string  ret2 = str += "world";//str改变自身
	

}

int main()
{
	test_string();

	return 0;
}