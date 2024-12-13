#include <iostream>
#include <vector>
#include <map>
#include <set>
#include<list>

using namespace std;

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