#pragma once

class ForwardList
{
public:
	ForwardList();

	~ForwardList();

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
};

