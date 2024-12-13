#include <iostream>
#include <vector>
#include <map>
#include <set>
#include<list>

using namespace std;

void plusesDeleter(vector<int>& nums) {
	for (vector<int>::iterator iter = nums.begin(); iter < nums.end(); ++iter) {
		if (*iter > 0) {
			nums.erase(iter);
			iter = nums.begin();
		}
	}
}