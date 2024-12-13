#include <iostream>
#include <vector>
#include <map>
#include <set>
#include<list>

using namespace std;

void reverseNum(list<int>& nums) {
	for (list<int>::iterator iter = nums.begin(); iter != nums.end(); ++iter) {
		nums.insert(iter, *iter * -1);
	}
	for (auto i : nums) {
		cout << i << ' ';
	}
}