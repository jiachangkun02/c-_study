
#include <vector>

#include"list.h"


//void print_list(const list<int>& ls)
//{
//	list<int>::const_iterator it = ls.begin();
//	while (it!=ls.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//}




//void test_list1()
//{
//	list<int> ls1;
//	ls1.push_back(10);
//	ls1.push_back(12);
//	ls1.push_back(13);
//
//	print_list(ls1);
//}


//void test_list2()
//{
//	list<int> ls2;
//	ls2.push_back(1);
//	ls2.push_back(2);
//	ls2.push_back(3);
//	ls2.push_back(4);
//	ls2.push_back(5);
//	
//	list<int>::iterator pos = find(ls2.begin(), ls2.end(),3);
//	//�˴���3��ֵ��������ҿ�������Ѱֵ
//
//	if(pos != ls2.end())
//	{
//		ls2.insert(pos, 30);
//		ls2.erase(pos);
//		//����ȴ���ᱨ��  ��Ϊlist������ṹ ���ڴ��ϲ�������  ԭ��λ���ϵ�ָ����Ȼ��Ч 
//	}
//	vector<int> vc;
//	vc.push_back(1);
//	vc.push_back(2);
//	vc.push_back(3);
//	vc.push_back(4);
//	vc.push_back(5);
//
//
//	/*vector<int>::iterator vp = find(vc.begin(), vc.end(), 3);
//	if (vp != vc.end())
//	{
//		vc.insert(vp, 30);
//		vc.erase(vp);
//	}*/
//	//����ᱨ��  ��Ϊvector������  ���ڴ���������ṹ  ���ض�λ�ò���30  ��ԭ���Ǹ�λ�õ�ֵ�ϵ�ָ��ʧЧ��
//}




int main()
{
	/*test_list1();*/

	/*test_list2();*/

	mystl::test_mylist();

	return 0;
}