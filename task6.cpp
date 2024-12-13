#include <iostream>
#include <vector>
#include <map>
#include <set>
#include<list>

using namespace std;

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