/*******************************************************************/

/* Original File Name: ForwardList.h                               */

/* Date: 13-06-2018                                                */

/* Developer: Dionysus Benstein                                    */

/* Copyright © 2018 Dionysus Benstein. All rights reserved.        */

/* Description: Class dynamic data structure single linked list.   */

/*******************************************************************/

#pragma once

template<typename T>
class ForwardList
{
public:
	ForwardList()
	{
		_size = 0;
		head.p_next = nullptr;
	}

	void push_back(T data)
	{
		Node<T> node;
		_size++;
		head.p_next = &node;
		node.p_next = nullptr;
		node.data = data;
	}

	void pop_back()
	{

	}
	
	size_t size() const
	{
		return _size;
	}

private:
	template<typename T>
	struct Node
	{
		T data;
		Node* p_next;
	};

	Node<T> head;
	int _size;
};
