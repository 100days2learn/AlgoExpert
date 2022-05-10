/*
 * validateSubsequence.cpp
 *
 *  Created on: 10-May-2022
 *      Author: abhishektewari
 */


using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  // Write your code here.
	int startIndex = 0;
	int matchingIndex = 0, matchfound = 0;
	for(int j = 0; j < sequence.size(); j++)
	{
			for(int i = startIndex; i < array.size(); i++)
			{
					if(array[i] == sequence[j])
					{
							startIndex = i + 1;
							matchfound++;
							break;
					}
			}
	}
	if(matchfound == sequence.size())
		return true;
	else
  	return false;
}


