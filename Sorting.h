/*
 * Sorting.h
 *
 *  Created on: Feb 8, 2015
 *      Author: ronny
 */

#ifndef SORTING_H_
#define SORTING_H_

#include <vector>

class Sorting
{

	public:

		static void mergesort ( std::vector<int>& array, int left, int right );
		static void merge ( std::vector<int>& array, int left, int middle, int right );
		static void printVector ( const std::vector<int>& storedData );

		Sorting();
		virtual ~Sorting();

	private:


};

#endif /* SORTING_H_ */
