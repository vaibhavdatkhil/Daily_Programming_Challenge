#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

string reverseWords(const string& s) {
    istringstream iss(s);
    vector<string> words;
    string word;

    
    while (iss >> word) {
        words.push_back(word);
    }

    
    reverse(words.begin(), words.end());

    
    ostringstream oss;
    for (size_t i = 0; i < words.size(); ++i) {
        if (i > 0) oss << ' ';
        oss << words[i];
    }

    return oss.str();
}

int main() {
    string s1 = "the sky is blue";
    string s2 = "  hello world  ";
    string s3 = "a good   example";

    cout << reverseWords(s1) << endl; 
    cout << reverseWords(s2) << endl; 
    cout << reverseWords(s3) << endl; 

    return 0;
}
