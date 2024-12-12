### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static HashMap<String,Long> histogram(String test) {
        HashMap<String,Long> dict1=new HashMap<String,Long>();
        List<String> list1=Arrays.asList(test.split(" "));
        long t=0;
        for(String i:list1) {
            if(Collections.frequency(list1,i)>t && !i.equals("")) {
                t=Collections.frequency(list1,i);
            }
        }
        if(t>0) {
            for(String i:list1) {
                if(Collections.frequency(list1,i)==t) {
                    dict1.put(i,t);
                }
            }
        }
        return dict1;
    }
    
}

### Python version

from typing import Dict

def histogram(test: str) -> Dict[str, int]:
    return Problem().histogram(test)

### Java version

import java.util.regex

def histogram(test: str) -> Dict[str, int]:
    return Problem().histogram(test)

### Java version

import java.util.regex

def histogram(test: str) -> Dict[str, int]:
    return Problem().histogram(test)

### Java version

import java.util.regex

def histogram(test: str) -> Dict[str, int]:
    return Problem().histogram(test)

### Java version

import java.util.regex

def histogram(test: str) -> Dict[str, int]:
    return Problem().histogram(test)

### Java version

import java.util.regex

def histogram(test: str) -> Dict[str, int]:
    return Problem().histogram(test)

### Java version

import java.util.regex

def histogram(test: str) -> Dict[str, int]:
    return Problem().histogram(test)

### Java version

import java.util.regex

def histogram(test: str) -> Dict[str, int]:
    return Problem().histogram(test)

### Java version

import java.util.regex

def histogram(test: str) -> Dict[str, int]:
    return Problem().histogram(test)

### Java version

import java.util.regex

def histogram(test: str) -> Dict[str, int]:
    return Problem().histogram(test)

### Java version

import java.util.regex

def histogram(test: str) -> Dict[str, int]:
    return Problem().histogram(test)

### Java version

import java.util.regex

def histogram(test: str) -> Dict[str, int]:
    return Problem().histogram(test)

### Java version

import java.util.regex

def histogram(test: str) -> Dict[str, int]:
    return Problem().histogram(test)

### Java version

import java.util.regex

def histogram(test: str) -> Dict[str, int]:
    return Problem().histogram(test)

### Java version

import java.util.regex

def histogram(test: str) -> Dict[str, int]:
    return Problem().histogram(test)

### Java version

import java.util.regex

def histogram(test: str) -> Dict[str, int]:
    return Problem().histogram(test)

### Java version

import java.util.regex

def histogram(test: str) -> Dict[str, int]:
    return Problem().histogram(test)

### Java version

import java.util.regex

def histogram(test: str) -> Dict[str, int]:
    return Problem().histogram(test)

### Java version

import java.util.