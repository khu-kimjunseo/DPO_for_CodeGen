### Python version

from typing import List


def parse_music(music_string: str) -> List[int]:
    note_map = {'o': 4, 'o|': 2, '.|': 1}
    return [note_map[x] for x in music_string.split(' ') if x]

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<long> parse_music(std::string music_string) {
    std::vector<long> result;
    std::stringstream ss(music_string);
    std::string line;
    while (std::getline(ss, line)) {
        result.push_back(parse_music(line));
    }
    return result;
}

std::string get_music_string(std::vector<long> music_vector) {
    std::stringstream ss(std::stringstream::in | std::stringstream::out);
    std::string line;
    for (long i = 0; i < music_vector.size(); i++) {
        ss << music_vector[i];
        if (i < music_vector.size() - 1) {
            ss << ' ';
        }
    }
    return ss.str();
}

std::string get_music_string(std::unordered_map<long, std::string> music_map) {
    std::stringstream ss(std::stringstream::in | std::stringstream::out);
    std::string line;
    for (long i = 0; i < music_map.size(); i++) {
        ss << music_map[i];
        if (i < music_map.size() - 1) {
            ss << ' ';
        }
    }
    return ss.str();
}

std::string get_music_string(std::unordered_set<long> music_set) {
    std::stringstream ss(std::stringstream::in | std::stringstream::out);
    std::string line;
    for (long i = 0; i < music_set.size(); i++) {
        ss << music_set[i];
        if (i < music_set.size() - 1) {
            ss << ' ';
        }
    }
    return ss.str();
}

std::string get_music_string(std::unordered_set<long> music_set, std::string separator) {
    std::stringstream ss(std::stringstream::in | std::stringstream::out);
    std::string line;
    for (long i = 0; i < music_set.size(); i++) {
        ss << music_set[i];
        if (i < music_set.size() - 1) {
            ss << separator;
        }
    }
    return ss.str();
}

std::string get_music_string(std::unordered_map<long, std::string> music_map, std::string separator) {
    std::stringstream ss(std::stringstream::in | std::stringstream::out);
    std::string line;
    for (long i = 0; i < music_map.size(); i++) {
        ss << music_map[i];
        if (i < music_map.size() - 1) {
            ss << separator;
        }
    }
    return ss.str();
}

std::string get_music_string(std::unordered_set<long> music_set, std::string separator) {
    std::stringstream ss(std::stringstream::in | std::stringstream::out);
    std::string line;
    for (long i = 0; i < music_set.size(); i++) {
        ss << music_set[i];
        if (i < music_set.size() - 1) {
            ss << separator;
        }
    }
    return ss.str();
}

std::string get_music_string(std::unordered_map<long, std::string> music_map, std::string separ