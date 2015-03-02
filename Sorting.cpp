/*
 * Sorting.cpp
 *
 *  Created on: Feb 8, 2015
 *      Author: ronny
 */

#include "Sorting.h"
#include <stdio.h>

void Sorting::mergesort ( std::vector<int>& array, int left, int right )
{
	if ( left < right )
	{
		int middle = ( left + right ) / 2;
		Sorting::mergesort ( array, left, middle );
		Sorting::mergesort ( array, middle + 1, right );
		Sorting::merge ( array, left, middle, right );
	}
}

void Sorting::merge ( std::vector<int>& array, int left, int middle, int right )
{
	int L = middle - left + 1;
	int R = right - middle;

	std::vector<int> tempLeft ( L );
	std::vector<int> tempRight ( R );

	for ( int i = 0; i < L; ++i )
	{
		tempLeft[i] = array[left + i];
	}

	for ( int i = 0; i < R; ++i )
	{
		tempRight[i] = array[middle + 1 +i];
	}

	int i = 0, j = 0, k = 0;

	while ( i != L && j != R )
	{
		if ( tempLeft[i] < tempRight[j] )
		{
			array[left + k] = tempLeft[i];
			i++;
		}
		else
		{
			array[left+k] = tempRight[j];
			j++;
		}

		k++;
	}

	while ( i != L )
	{
		array[left + k] = tempLeft[i];
		k++;i++;
	}

	while ( j != R )
	{
		array[left + k] = tempRight[j];
		k++;j++;
	}

	Sorting::printVector ( array );
}

void Sorting::printVector ( const std::vector<int>& storedData )
{
	for ( std::vector<int>::const_iterator it = storedData.begin (); it != storedData.end(); ++it )
	{
		printf ( "%d - ", *it );
	}
	printf ( "\n" );
}

Sorting::Sorting() {
	// TODO Auto-generated constructor stub

}

Sorting::~Sorting() {
	// TODO Auto-generated destructor stub
}

