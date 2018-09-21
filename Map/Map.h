template <typename K, typename V>
class Map
{
public:
	

private:
	struct Pair
	{
		K key;
		V value;
	};

	size_t size;
	Pair pair[size];
};