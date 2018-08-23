template <typename T>
class Vector
{
public:
	Vector()
	{
		arr = nullptr;
	}

	Vector(const int value, const int size)
	{
		this->size = size;
		arr = new T[this->size];

		for (int i = 0; i < this->size; i++)
			arr[i] = value;
	}

	Vector(const Vector& other)
	{
		this->size = other.size;
		this->arr = new T[size];

		for (int i = 0; i < size; i++)
			this->arr[i] = other.arr[i];
	}

	~Vector()
	{
		delete[] arr;
	}

	Vector& operator=(const Vector& other)
	{
		if (arr != nullptr)
			delete[] arr;

		this->size = other.size;
		this->arr = new T[size];

		for (int i = 0; i < size; i++)
			this->arr[i] = other.arr[i];

		return *this;
	}

	bool operator==(const Vector &other)
	{
		if (this->size != other.size) 
		{
			return false;
		}
		else 
		{
			for (int i = 0; i < size; i++)
			{
				if (this->arr[i] != other.arr[i])
					return false;
			}
		}
		return true;
	}

	bool operator!=(const Vector &other)
	{
		if (this->size != other.size)
		{
			return true;
		}
		else
		{
			for (int i = 0; i < size; i++)
			{
				if (this->arr[i] != other.arr[i])
					return true;
			}
		}
		return false;
	}
	
	size_t getSize()
	{
		return size;
	}

	bool empty()
	{
		return size == 0;
	}

	void print()
	{
		for (int i = 0; i < this->size; i++)
			std::cout << arr[i] << " ";

		std::cout << std::endl;
	}

	void pushBack(const T value)
	{
		T *newArr = new T[size + 1];

		for (int i = 0; i < size; i++)
			newArr[i] = arr[i];

		delete[] arr;
		newArr[size++] = value;
		arr = newArr;
		newArr = nullptr;
	}

	void popBack()
	{
		T *newArr = new T[size--];

		for (int i = 0; i < size; i++)
			newArr[i] = arr[i];

		delete[] arr;
		arr = newArr;
		newArr = nullptr;
	}

	void insert(const T value, const int index)
	{
		T *newArr = new T[size + 1];

		for (int i = 0; i < index; i++)
			newArr[i] = arr[i];

		newArr[index] = value;

		for (int i = index + 1; i < size; i++)
			newArr[i] = arr[i];

		delete[] arr;
		arr = newArr;
		newArr = nullptr;
	}

	void erase(const int index)
	{
		T *newArr = new T[size--];

		for (int i = 0; i < index; i++)
			newArr[i] = arr[i];

		for (int i = index; i < size; i++)
			newArr[i] = arr[i + 1];

		delete[] arr;
		arr = newArr;
		newArr = nullptr;
	}

private:
	T *arr;
	int size;
};
