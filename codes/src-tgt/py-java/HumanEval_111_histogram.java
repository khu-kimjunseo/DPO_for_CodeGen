### Python version

from typing import Dict

def histogram(test: str) -> Dict[str, int]:
    dict1={}
    list1=test.split(" ")
    t=0

    for i in list1:
        if(list1.count(i)>t) and i!='':
            t=list1.count(i)
    if t>0:
        for i in list1:
            if(list1.count(i)==t):
                
                dict1[i]=t
    return dict1

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

