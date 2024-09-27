
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
//	//此处的3是值，在左闭右开的区间寻值
//
//	if(pos != ls2.end())
//	{
//		ls2.insert(pos, 30);
//		ls2.erase(pos);
//		//这里却不会报错  因为list是链表结构 在内存上并不连续  原来位置上的指针依然有效 
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
//	//这里会报错  因为vector是数组  在内存上是物理结构  在特定位置插入30  而原来那个位置的值上的指针失效了
//}




int main()
{
	/*test_list1();*/

	/*test_list2();*/

	mystl::test_mylist();

	return 0;
}