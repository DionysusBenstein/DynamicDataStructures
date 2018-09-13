/*******************************************************************/

/* Original File Name: Stack.h                                     */

/* Date: ‎12-09-2018                                                */

/* Developer: Dionysus Benstein                                    */

/* Copyright © 2018 Dionysus Benstein. All rights reserved.        */

/* Description: Реализация стэка посредством динамического массива.*/

/*******************************************************************/

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

	~Stack()
	{
		delete[] data;
	}

	void push(const T value)
	{
		T* data = new T[size + 1];

		for (int i = 0; i < size; i++)
			data[i] = this->data[i];

		delete[] this->data;
		data[size++] = value;
		this->data = data;
		data = nullptr;
	}

	void pop()
	{
		T* data = new T[size--];

		for (int i = 0; i < size; i++)
		{
			data[i] = this->data[i];
		}

		delete[] this->data;
		this->data = data;
		data = nullptr;
	}

	size_t getSize() const
	{
		return this->size;
	}

	//Temp method
	void print() const
	{
		for (int i = 0; i < size; i++)
		{
			cout << data[i] << " ";
		}
		cout << endl;
	}

private:
	T* data;
	size_t size;
};