template <typename T>
class Vector
{
public:
	Vector()
	{
		//
	}

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
	
	~Vector()
	{
		delete[] arr;
	}

private:
	T *arr;
	int size;
};
