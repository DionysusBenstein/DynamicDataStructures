/*******************************************************************/

/* Original File Name: Map.h                                       */

/* Date: ‎21-09-2018                                                */

/* Developer: Dionysus Benstein                                    */

/* Copyright © 2018 Dionysus Benstein. All rights reserved.        */

/* Description: Реализация ассоциативного массива переменного
   размера														   */

/*******************************************************************/

#pragma once

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