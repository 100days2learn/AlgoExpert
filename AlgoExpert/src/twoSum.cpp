/*
 * twoSum.cpp
 *
 *  Created on: 10-May-2022
 *      Author: abhishektewari
 */


#include <vector>
#include <set>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
	vector<int> twoSum;
	set<int> collectElem;

	for(int i = 0; i < array.size(); i++)
	{
			for (auto it = collectElem.begin(); it != collectElem.end(); it++)
			{
					if((*it != array[i]) && ((*it + array[i]) == targetSum))
						 {
							 	twoSum.push_back(array[i]);
							  twoSum.push_back(*it);
						 }
			}
			collectElem.insert(array[i]);
	}
  return twoSum;
}

int main()
{
	return 0;
}

