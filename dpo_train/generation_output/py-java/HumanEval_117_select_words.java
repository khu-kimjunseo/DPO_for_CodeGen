### Python version

from typing import List

def select_words(s: str, n: int) -> List[str]:
    result = []
    for word in s.split():
        n_consonants = 0
        for i in range(0, len(word)):
            if word[i].lower() not in ["a","e","i","o","u"]:
                n_consonants += 1 
        if n_consonants == n:
            result.append(word)
    return result

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> selectWords(String s, long n) {
        ArrayList<String> result = new ArrayList<>();
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == ' ') {
                result.add(s.substring(0, i));
            }
        }
        return result;
    }
}

class Solution {
    public static void main(String[] args) {
        String s = "a b c d e f g h i j k l m n o p q r s t u v w x y z";
        ArrayList<String> words = Problem.selectWords(s, 10);
        System.out.println(words);
    }
}
