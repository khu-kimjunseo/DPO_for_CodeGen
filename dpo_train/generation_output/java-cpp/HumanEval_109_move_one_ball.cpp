### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean moveOneBall(ArrayList<Long> arr) {
        if (arr.size() == 0) {
            return true;
        }
        List<Long> sortedArray = new ArrayList<>(arr);
        Collections.sort(sortedArray);
        int minIndex = arr.indexOf(Collections.min(arr));
        List<Long> myArr = new ArrayList<>(arr.subList(minIndex, arr.size()));
        myArr.addAll(arr.subList(0, minIndex));
        for (int i = 0; i < arr.size(); i++) {
            if (!myArr.get(i).equals(sortedArray.get(i))) {
                return false;
            }
        }
        return true;
    }
}

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
bool move_one_ball(std::vector<long> arr) {
    std::vector<long> sortedArray = new std::vector<long>();
    std::vector<long> myArr = new std::vector<long>();
    for (int i = 0; i < arr.size(); i++) {
        sortedArray.push_back(arr[i]);
        myArr.push_back(arr[i]);
    }
    std::sort(sortedArray.begin(), sortedArray.end());
    std::sort(myArr.begin(), myArr.end());
    int minIndex = arr.indexOf(Collections.min(arr));
    List<Long> myArr2 = new List<Long>();
    myArr2.push_back(myArr.at(minIndex));
    myArr2.push_back(myArr.at(minIndex));
    for (int i = 0; i < arr.size(); i++) {
        if (!myArr2.get(i).equals(sortedArray.get(i))) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<long> arr = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,