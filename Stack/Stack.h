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
		{
			data[i] = this->data[i];
		}

		data[i + 1] = value;

		this->data = data;
		delete[] data;
		data = nullptr;
	}

	//temp
	void print() const
	{

	}

private:
	T* data;
	size_t size;
};