#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

std::vector<std::vector<std::string>> anagrams(std::vector<std::string>& string_list) {
    std::vector<std::vector<std::string>> ans;
    std::unordered_map<std::string, std::vector<std::string>> mp;
    for (const auto& s : string_list) {
        std::string word = s;
        std::sort(word.begin(), word.end());
        mp[word].push_back(s);
    }
    ans.reserve(mp.size());
    for (const auto& it : mp) {
            ans.push_back(it.second);
    }
    return ans;
}

void test_anagrams() {
    int n;
    std::cin >> n;
    std::vector<std::string> string_list;
    std::string s;
    for (int i = 0; i < n; i++) {
        std::cin >> s;
        string_list.push_back(s);
    }
    std::vector<std::vector<std::string>> ans = anagrams(string_list);
    for (const auto& anagram_list : ans) {
        for (auto & i : anagram_list) {
            std::cout << i << " ";
        }
        std::cout << '\n';
    }
}