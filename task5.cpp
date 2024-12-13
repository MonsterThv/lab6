#include <iostream>
#include <vector>
#include <map>
#include <set>
#include<list>

using namespace std;

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