using namespace std;

template <typename T>
class Vector
{
public:
	Vector() {}

	//temp constructor
	Vector(const int value, const int size)
	{
		this->size = size;
		arr = new T[this->size];

		for (int i = 0; i < this->size; i++)
		{
			arr[i] = value;
		}
	}

	//Copy constructor
	Vector(const Vector& other)
	{
		this->size = other.size;
		this->arr = new T[this->size];

		for (int i = 0; i < this->size; i++)
		{
			this->arr[i] = other.arr[i];
		}
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
		this->arr = new T[this->size];

		for (int i = 0; i < this->size; i++)
		{
			this->arr[i] = other.arr[i];
		}

		return *this;
	}

	void print()
	{
		for (int i = 0; i < this->size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	void pushBack(const T value)
	{
		T *newArr = new T[size + 1];

		for (int i = 0; i < size; i++)
		{
			newArr[i] = arr[i];
		}

		delete[] arr;
		newArr[size++] = value;
		arr = newArr;
		newArr = nullptr;
	}

	void popBack()
	{
		T *newArr = new T[size--];

		for (int i = 0; i < size; i++)
		{
			newArr[i] = arr[i];
		}

		delete[] arr;
		arr = newArr;
		newArr = nullptr;
	}

private:
	T *arr;
	int size;
};
