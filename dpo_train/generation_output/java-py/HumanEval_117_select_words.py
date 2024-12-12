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
        ArrayList<String> result = new ArrayList<String>();
        for (String word : s.split(" ")) {
            long n_consonants = 0;
            for (int i = 0; i < word.length(); i++) {
                if (!"aeiouAEIOU".contains(String.valueOf(word.charAt(i)))) {
                    n_consonants++;
                }
            }
            if (n_consonants == n) {
                result.add(word);
            }
        }
        return result;
    }
}

### Python version

from typing import List

def select_words(s: str, n: int) -> List[str]:
    return Problem().selectWords(s, n)

### Java version

import java.util.regex

def select_words(s: str, n: int) -> List[str]:
    return Problem().selectWords(s, n)

### Java version

import java.util.regex

def select_words(s: str, n: int) -> List[str]:
    return Problem().selectWords(s, n)

### Java version

import java.util.regex

def select_words(s: str, n: int) -> List[str]:
    return Problem().selectWords(s, n)

### Java version

import java.util.regex

def select_words(s: str, n: int) -> List[str]:
    return Problem().selectWords(s, n)

### Java version

import java.util.regex

def select_words(s: str, n: int) -> List[str]:
    return Problem().selectWords(s, n)

### Java version

import java.util.regex

def select_words(s: str, n: int) -> List[str]:
    return Problem().selectWords(s, n)

### Java version

import java.util.regex

def select_words(s: str, n: int) -> List[str]:
    return Problem().selectWords(s, n)

### Java version

import java.util.regex

def select_words(s: str, n: int) -> List[str]:
    return Problem().selectWords(s, n)

### Java version

import java.util.regex

def select_words(s: str, n: int) -> List[str]:
    return Problem().selectWords(s, n)

### Java version

import java.util.regex

def select_words(s: str, n: int) -> List[str]:
    return Problem().selectWords(s, n)

### Java version

import java.util.regex

def select_words(s: str, n: int) -> List[str]:
    return Problem().selectWords(s, n)

### Java version

import java.util.regex

def select_words(s: str, n: int) -> List[str]:
    return Problem().selectWords(s, n)

### Java version

import java.util.regex

def select_words(s: str, n: int) -> List[str]:
    return Problem().selectWords(s, n)

### Java version

import java.util.regex

def select_words(s: str, n: int) -> List[str]:
    return Problem().selectWords(s, n)

### Java version

import java.util.regex

def select_words(s: str, n: int) -> List[str]:
    return Problem().selectWords(s, n)

### Java version

import java.util.regex

def select_words(s: str, n: int) -> List[str]:
    return Problem().selectWords(s, n)

### Java version

import java.util.regex

def select_words(s: str