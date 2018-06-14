#pragma once

template <typename T>
class ForwardList
{
public:
	ForwardList();

	~ForwardList();

	void push_back(T data);

private:
	template <typename T>
	class Node
	{
	public:
		Node *pNext;
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

