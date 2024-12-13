#include <iostream>
#include <vector>
#include <map>
#include <set>
#include<list>

using namespace std;

vector<int>::iterator findInSorted(vector<int>::iterator first, vector<int>::iterator last, int el) {
	if (el > *(last - 1) || el < *first) {
		return last;
	}
	for (vector<int>::iterator iter = first; iter < last; ++iter) {
		if (*iter == el) {
			return iter;
		}
	}
	return last;
}