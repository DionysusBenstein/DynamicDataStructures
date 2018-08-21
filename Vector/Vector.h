using namespace std;

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

	void print()
	{
		for (int i = 0; i < this->size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}

private:
	T *arr;
	int size;
};
