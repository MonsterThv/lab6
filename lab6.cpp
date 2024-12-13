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

int wordsCounter(const string& str) {
	vector<string> words;
	string word = "";
	for (auto i : str) {
		if ((i == ' ' || i == '.' || i == ',') && word.length() != 0) {
			words.push_back(word);
			word = "";
		}
		else {
			if(i != ' ' && i != '.' && i != ',') word.push_back(i);
		}
	}
	if (word.length() != 0) {
		words.push_back(word);
	}
	return words.size();
}

map<string, int> wordsMapCounter(const string& str) {
	vector<string> words;
	set<string> un_words;
	map<string, int> res;
	string word = "";
	for (auto i : str) {
		if ((i == ' ' || i == '.' || i == ',') && word.length() != 0) {
			words.push_back(word);
			un_words.insert(word);
			word = "";
		}
		else {
			if (i != ' ' && i != '.' && i != ',') word.push_back(i);
		}
	}
	if (word.length() != 0) {
		un_words.insert(word);
		words.push_back(word);
	}
	for (auto i : un_words) {
		res[i] = count(words.begin(), words.end(), i);
	}
	return res;
}

vector<std::string> uniqueWords(const string& str) {
	vector<string> res;
	set<string> un_words;
	string word = "";
	for (auto i : str) {
		if ((i == ' ' || i == '.' || i == ',') && word.length() != 0) {
			un_words.insert(word);
			word = "";
		}
		else {
			if (i != ' ' && i != '.' && i != ',') word.push_back(tolower(i));
		}
	}
	if (word.length() != 0) {
		un_words.insert(word);
	}
	for (auto i : un_words) {
		res.push_back(i);
	}
	return res;
}

int diffWordsCounter(const string& str) {
	set<string> un_words;
	string word = "";
	for (auto i : str) {
		if ((i == ' ' || i == '.' || i == ',') && word.length() != 0) {
			un_words.insert(word);
			word = "";
		}
		else {
			if (i != ' ' && i != '.' && i != ',') word.push_back(tolower(i));
		}
	}
	if (word.length() != 0) {
		un_words.insert(word);
	}
	return un_words.size();
}

void reverseNum(list<int>& nums) {
	for (list<int>::iterator iter = nums.begin(); iter != nums.end(); ++iter) {
		nums.insert(iter, *iter * -1);
	}
	for (auto i : nums) {
		cout << i << ' ';
	}
}

void plusesDeleter(vector<int>& nums) {
	for (vector<int>::iterator iter = nums.begin(); iter < nums.end(); ++iter) {
		if (*iter > 0) {
			nums.erase(iter);
			iter = nums.begin();
		}
	}
}

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



int main()
{
	std::list<int> v = { 1, 0, -8, -9, 3, 10, 23, -7 };
	sort(v);
	for (auto i : v) {
		cout << i << ' ';
	}
}
