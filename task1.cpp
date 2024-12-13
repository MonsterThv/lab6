#include <iostream>
#include <vector>
#include <map>
#include <set>
#include<list>

using namespace std;

vector<int>::iterator Find(vector<int>::iterator first, vector<int>::iterator last, int el) {
	for (vector<int>::iterator iter = first; iter < last; ++iter) {
		if (*iter == el) {
			return iter;
		}
	}
	return last;
}