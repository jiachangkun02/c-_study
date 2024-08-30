#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*string s1;
	string s2("hehe world");
	string s3(s2,3,4);
	string s5(s2,3);
	string s6("123");
	s6 += "123";
	s6.push_back('3');
	s6.append("23");*/
	/*cout << s1 << " " << s2 << " " << s3 <<s5<< endl;*/
	/*cout << s6 <<endl;*/

	string s("12345");
	int val=0;
	for (size_t i = 0; i < s.size(); i++)
	{
		val *= 10;
		val += (s[i]-'0');//这里的operator[]是指它的ascii值，不能直接用

	}
	cout << val << endl;

	return 0;
}