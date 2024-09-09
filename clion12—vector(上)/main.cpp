#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void test_vector()
{
    /*vector<int> v1;
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(6);
    v1.push_back(8);
    v1.push_back(9);
    vector<int> v2(v1);
    //三种遍历方式
    for (auto ch:v1) {
        cout<<ch<<endl;
    }
    for (size_t i = 0; i <v1.size() ; ++i) {
        cout<<v1[i]<<endl;
    }
    vector<int>::iterator it1 =v1.begin();
    while (it1!=v1.end())
    {
        cout<<*it1<<endl;
        it1++;
    }
    vector<int>::reverse_iterator it2 =v1.rbegin();
    while (it2!=v1.rend())
    {
        cout<<*it2<<endl;
        it2++;
    }*/

    /*vector<int> v1;
    int m;
    for (int i = 0; i < 5; ++i) {
        cin>>m;
        v1.push_back(m);
    }
    for (auto v:v1) {
        cout<<v<<endl;

    }*/

    //可读迭代器
    /*vector<int > vt;
    vt.push_back(2);
    vt.push_back(4);
    vt.push_back(7);
    vt.push_back(9);
    vt.push_back(6);
    vt.push_back(3);*/
    /*vector<int>::const_iterator it=vt.begin();
    while (it!=vt.end()) {
        //*it *= 2;
        cout<<*it<<endl;
        it++;
    }*/

    /*//resize和reserve
    //win系统下是以1.5倍来开辟空间 Linux是2倍开空间
    *//*cout<<vt.size()<<endl;
    cout<<vt.capacity()<<endl;
    *//**//*vt.resize(100);//申请空间并初始化
    cout<<vt.size()<<endl;
    cout<<vt.capacity()<<endl;*//**//*
    vt.reserve(100);//提前开空间
    cout<<vt.size()<<endl;//reserve会导致capacity变   size不变
    cout<<vt.capacity()<<endl;*/


}


void test_vector2()
{
    vector<int > vt;
    vt.push_back(2);
    vt.push_back(4);
    vt.push_back(7);
    vt.push_back(9);
    vt.push_back(6);
    vt.push_back(3);
    vt.erase(vt.begin());
    for (auto c:vt) {
        cout<<c<<" ";
    }
    cout<<endl;
    vt.insert(vt.begin(),15);
    for (auto c:vt) {
        cout<<c<<" ";
    }
    cout<<endl;
    vector<int>::iterator it= find(vt.begin(),vt.end(),4);
    vt.erase(it);
    for (auto c:vt) {
        cout<<c<<" ";
    }
    cout<<endl;
}
int main() {
    /*test_vector();*/
    test_vector2();
    return 0;
}
