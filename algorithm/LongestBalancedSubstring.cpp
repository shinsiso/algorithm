#include "stdafx.h"

using namespace std;
using namespace std::tr1;

/* 
Problem: 
An array with 0's and 1's, find in O(n) time and O(1) space the longest 
sequence with equal number of 1's and 0's.
*/
string longestBalancedSubstring(const string& s)
{
	unordered_map<int, int> history;
	int sum = 0;
	history[0] = 0;

	int startIdx = 0;
	int longestLen = 0;
	for(int i = 0; i < s.size(); ++i)
	{
		if(s[i] == '0') --sum;
		else if(s[i] == '1') ++sum;
		if(history.find(sum) == history.end()){
			history[sum] = i + 1;
		}
		else{
			int len = i - history[sum] + 1;
			if(longestLen < len){
				longestLen = len;
				startIdx = history[sum];
			}
		}
	}

	return s.substr(startIdx, longestLen);
}