/*******************************************************************/

/* Original File Name: ForwardList.cpp                             */

/* Date: 13-06-2018                                                */

/* Developer: Dionysus Benstein                                    */

/* Copyright © 2018 Dionysus Benstein. All rights reserved.        */

/* Description: Implementation of the dynamic data structure class */
/*				forward list.									   

/*******************************************************************/


#include "ForwardList.h"

template <typename T>
ForwardList<T>::ForwardList()
{
	this->size = 0;
	this->head = nullptr;
}

template <typename T>
ForwardList<T>::~ForwardList()
{

}

template<typename T>
void ForwardList<T>::push_back(T data)
{
	if (head == nullptr)
	{
		head = new Node<T>(data);
	}
	else
	{
		Node<T> *current = this->head;

		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}

		current->pNext = new Node<T>(data);
	}
}