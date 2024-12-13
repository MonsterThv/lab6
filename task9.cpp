#include <iostream>
#include <vector>
#include <map>
#include <set>
#include<list>

using namespace std;

void sort(list<int>& l) {
	list<int>::iterator second = l.begin();
	list<int>::iterator last = l.end();
	bool flag = false;
	second++;
	last--;
	for (list<int>::iterator first = l.begin(); first != last; ++first) {
		if (flag) {
			first = l.begin();
			flag = false;
		}
		if (*first < *second) {
			int temp = *first;
			*first = *second;
			*second = temp;
			first = l.begin();
			second = l.begin();
			second++;
			flag = true;
		}
		else {
			second++;
		}
	}
}