#include <iostream>
#include <vector>
#include <map>
#include <set>
#include<list>

using namespace std;

int wordsCounter(const string& str) {
	vector<string> words;
	string word = "";
	for (auto i : str) {
		if ((i == ' ' || i == '.' || i == ',') && word.length() != 0) {
			words.push_back(word);
			word = "";
		}
		else {
			if (i != ' ' && i != '.' && i != ',') word.push_back(i);
		}
	}
	if (word.length() != 0) {
		words.push_back(word);
	}
	return words.size();
}