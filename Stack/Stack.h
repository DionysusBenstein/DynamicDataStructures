template <typename T>
class Stack
{
public:
	Stack()
	{
		data = nullptr;
		size = 0;
	}

private:
	T* data;
	size_t size;
};