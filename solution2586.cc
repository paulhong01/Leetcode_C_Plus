#include "solution2586.h"

#include <string>
#include <vector>
#include <unordered_set>

namespace Leetcode {
namespace {
int isVowelString(const std::string& word, const std::unordered_set<char>& vowel_char) {
    return vowel_char.count(word[0]) != 0 && vowel_char.count(word[word.size()-1]) != 0;
}
}   // namespace 

int vowelStrings(std::vector<std::string>& words, int left, int right) {
    // TC:O(N), SC:O(1)
    char vowel_array[] = {'a', 'e', 'i', 'o', 'u'};
    std::unordered_set<char> vowel_char(std::begin(vowel_array), std::end(vowel_array));
    int num_vowel_string = 0;
    for (int i = left; i <= right; i++) {
        if (isVowelString(words[i], vowel_char)) {
            ++num_vowel_string;
        }
    }
    return num_vowel_string;
}

}   // namespace Leetcode
