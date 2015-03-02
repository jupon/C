#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Sorting.h"
#include <vector>

using namespace testing;
using namespace std;

using testing::ElementsAreArray;

const int twoData[] = { 3, 2 };
const int threeData[] = { 5, 10, 1 };
const int unsorted[] = { 7, 6, 5, 4, 3, 2, 1 };
const int sorted[] = { 1, 2, 3, 4, 5, 6, 7 };
//const int unsorted[] = { 90, 11, 25, 11, 2, 3, 90, 1, 3, 5 ,17, 19 };


TEST ( Sorting, MergeSortThreeData )
{
	vector<int> unsorted (threeData, threeData + sizeof(threeData) / sizeof(threeData[0]) );

	Sorting::mergesort ( unsorted, 0, 2 );

	int exThreeData[] = { 1, 5, 10 };

	EXPECT_THAT ( unsorted, ElementsAreArray ( exThreeData ) );
}

TEST ( Sorting, MergeSortTwoData )
{
	vector<int> unsorted (twoData, twoData + sizeof(twoData) / sizeof(twoData[0]) );

	Sorting::mergesort ( unsorted, 0, 1 );

	int exTwoData[] = { 2, 3 };

	EXPECT_THAT ( unsorted, ElementsAreArray ( exTwoData ) );
}

TEST ( Sorting, MergeSortUnsortedData )
{
	vector<int> unsortedvec (unsorted, unsorted + sizeof(unsorted) / sizeof(unsorted[0]) );

	Sorting::mergesort ( unsortedvec, 0, 6 );

	int exsortedData[] = { 1, 2, 3, 4, 5, 6, 7 };

	EXPECT_THAT ( unsortedvec, ElementsAreArray ( exsortedData ) );
}

TEST ( Sorting, MergeSortSortedData )
{
	vector<int> unsortedvec (sorted, sorted + sizeof(sorted) / sizeof(sorted[0]) );

	Sorting::mergesort ( unsortedvec, 0, 6 );

	int exsortedData[] = { 1, 2, 3, 4, 5, 6, 7 };

	EXPECT_THAT ( unsortedvec, ElementsAreArray ( exsortedData ) );
}
