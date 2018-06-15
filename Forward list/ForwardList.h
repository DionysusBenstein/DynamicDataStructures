/*******************************************************************/

/* Original File Name: ForwardList.h                               */

/* Date: 13-06-2018                                                */

/* Developer: Dionysus Benstein                                    */

/* Copyright © 2018 Dionysus Benstein. All rights reserved.        */

/* Description: Class dynamic data structure forward list.         */

/*******************************************************************/

#pragma once

template<typename T>
class ForwardList
{
public:
	ForwardList();
	~ForwardList();

	void push_back(T data);

	int getSize() { return size; }
	
private:
	template<typename T>
	class Node
	{
	public:
		Node * pNext;
		T data;

		Node(T data = T(), Node *pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};

	Node<T> *head;
	int size;
};