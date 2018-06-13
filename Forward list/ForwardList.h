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
	};
};

