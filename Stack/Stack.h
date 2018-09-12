#include <iostream>

using namespace std;

template <typename T>
class Stack
{
public:
	Stack()
	{
		data = nullptr;
		size = 0;
	}

	void push(const T value)
	{
		T data = new T[size + 1];

		for (int i = 0; i < size; i++)
			data[i] = this->data[i];


		delete[] this->data;
		data[size + 1] = value;
		this->data = data;
		data = nullptr;
	}

	//temp
	void print() const
	{
		for (int i = 0; i < size; i++)
		{
			cout << data[i] << " ";
		}
		count << endl;
	}

private:
	T* data;
	size_t size;
};