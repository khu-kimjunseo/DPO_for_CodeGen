### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string get_closest_vowel(std::string word) {
    if (word.size() < 3) {
        return "";
    }

    std::set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'O', 'U', 'I'};
    for (int i = word.size() - 2; i >= 1; i--) {
        if (vowels.count(word[i])) {
            if (!vowels.count(word[i+1]) && !vowels.count(word[i-1])) {
                return std::string(1, word[i]);
            }
        }
    }
    return "";
}

### Python version

def get_closest_vowel(word: str) -> str:
    return get_closest_vowel(word.lower())

def get_closest_vowel_from_word(word: str) -> str:
    return get_closest_vowel(word.lower())

def get_closest_vowel_from_word_from_closest_vowel(word: str, closest_vowel: str) -> str:
    return get_closest_vowel(word.lower() + closest_vowel)

def get_closest_vowel_from_word_from_closest_vowel_from_closest_vowel(word: str, closest_vowel: str, closest_vowel_from_closest_vowel: str) -> str:
    return get_closest_vowel(word.lower() + closest_vowel + closest_vowel_from_closest_vowel)

def get_closest_vowel_from_word_from_closest_vowel_from_closest_vowel_from_closest_vowel(word: str, closest_vowel: str, closest_vowel_from_closest_vowel: str, closest_vowel_from_closest_vowel_from_closest_vowel: str) -> str:
    return get_closest_vowel(word.lower() + closest_vowel + closest_vowel_from_closest_vowel + closest_vowel_from_closest_vowel)

def get_closest_vowel_from_word_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest_vowel_from_closest