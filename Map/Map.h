/*******************************************************************/

/* Original File Name: Map.h                                       */

/* Date: ‎21-09-2018                                                */

/* Developer: Dionysus Benstein                                    */

/* Copyright © 2018 Dionysus Benstein. All rights reserved.        */

/* Description: Реализация ассоциативного массива переменного
   размера														   */

/*******************************************************************/

#pragma once
#include <iostream>

using namespace std;

template <typename K, typename V>
class Map
{
public:
	//Constructors
	Map()
	{
		size = 0;
		map = nullptr;
	}

	Map(K key, V value, size_t size)
	{
		this->size = size;
		map = new Pair[this->size];
		for (size_t i = 0; i < size; i++)
		{
			map[i].value = value;
			map[i].key = key;
		}
	}

	//Public methods
	void print() const
	{
		for (size_t i = 0; i < this->size; i++)
			cout << "Key: " << map[i].key << " = " << "Value: " << map[i].value << endl;
	}

private:
	struct Pair
	{
		K key;
		V value;
	};

	size_t size;
	Pair *map;	
};