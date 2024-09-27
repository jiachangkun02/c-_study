#pragma once

#include<iostream>

using namespace std;
#include<algorithm>



namespace mystl
{
	template<typename T>
	struct __node
	{
		T val;
		__node<T>* next;
		__node<T>* prev;

		__node(const T& x=T())
			:val(x),next(nullptr),prev(nullptr)
		{

		}
	};

	template<class T>
	struct __list_iterator
	{
		typedef __node<T> node;
		node* _node;

		__list_iterator(node* node)
			:_node(node)
		{

		}

		

		T& operator*()
		{
			return _node->val;
		}

		__list_iterator<T> operator++()
		{
			return _node = _node->next;
		}

		bool operator!=(const __list_iterator<T>& it)
		{
			return _node != it._node;
		}

	};


	template<class T>
	class list
	{
		
	public:
		typedef __list_iterator<T> iterator;
		typedef __node<T> node;
		iterator begin()
		{
			return iterator(_head->next);
		}
		iterator end()
		{
			return iterator(_head);
		}


		list()
		{
			_head = new node;
			_head->next =_head;
			_head->prev =_head;

		}
		~list(){}

		void push_back(const T& x)
		{
			node* tail = _head->prev;
			node* newnode = new node(x);

			tail->next = newnode;
			newnode->prev = tail;

			_head->prev = newnode;
			newnode->next = _head;
			
		}

		void push_front(const T& x)
		{
			node* newnode = new node(x);

			node* _front = _head->next;
			
			newnode->prev = _head;
			_head->next = newnode;

			newnode->next = _front;
			_front->prev = newnode;

		}



		void pop_back()
		{
			node* tail = _head->prev;

			node* prev = tail->prev;

			prev->next = _head;
			_head->prev = prev;

			tail->next = tail->prev = nullptr;

		}
		 
		
	private:
		node* _head;
		
	};


	void test_mylist()
	{
		list<int> ls1;
		ls1.push_back(3);
		ls1.push_back(4);
		ls1.push_back(5);
		ls1.push_back(6);
		
		ls1.push_front(9);
		ls1.pop_back();

		list<int>::iterator it = ls1.begin();
		while (it != ls1.end())
		{
			int v = *it;
			cout << v << " ";
			++it;
		}

	}
	
}
