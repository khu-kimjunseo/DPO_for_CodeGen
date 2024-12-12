### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> eat(long number, long need, long remaining) {
    if(need <= remaining){
        return { number + need , remaining-need };
    } else{
        return { number + remaining , 0};
    }
}

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> eat(long number, long need, long remaining) {
        ArrayList<Long> result = new ArrayList<>();
        ArrayList<Long> eat = eat(number, need, remaining);
        for(long i = 0; i < eat.size(); i++){
            result.add(eat.get(i));
        }
        return result;
    }
}

class Solution {
    public static void main(String[] args) {
        long number = Long.parseLong(args[0]);
        long need = Long.parseLong(args[1]);
        long remaining = Long.parseLong(args[2]);
        long result = Problem.eat(number, need, remaining);
        System.out.println(result);
    }
}

class Solution2 {
    public static void main(String[] args) {
        long number = Long.parseLong(args[0]);
        long need = Long.parseLong(args[1]);
        long remaining = Long.parseLong(args[2]);
        long result = Problem.eat(number, need, remaining);
        System.out.println(result);
    }
}

class Solution3 {
    public static void main(String[] args) {
        long number = Long.parseLong(args[0]);
        long need = Long.parseLong(args[1]);
        long remaining = Long.parseLong(args[2]);
        long result = Problem.eat(number, need, remaining);
        System.out.println(result);
    }
}

class Solution4 {
    public static void main(String[] args) {
        long number = Long.parseLong(args[0]);
        long need = Long.parseLong(args[1]);
        long remaining = Long.parseLong(args[2]);
        long result = Problem.eat(number, need, remaining);
        System.out.println(result);
    }
}

class Solution5 {
    public static void main(String[] args) {
        long number = Long.parseLong(args[0]);
        long need = Long.parseLong(args[1]);
        long remaining = Long.parseLong(args[2]);
        long result = Problem.eat(number, need, remaining);
        System.out.println(result);
    }
}

class Solution6 {
    public static void main(String[] args) {
        long number = Long.parseLong(args[0]);
        long need = Long.parseLong(args[1]);
        long remaining = Long.parseLong(args[2]);
        long result = Problem.eat(number, need, remaining);
        System.out.println(result);
    }
}

class Solution7 {
    public static void main(String[] args) {
        long number = Long.parseLong(args[0]);
        long need = Long.parseLong(args[1]);
        long remaining = Long.parseLong(args[2]);
        long result = Problem.eat(number, need, remaining);
        System.out.println(result);
    }
}

class Solution8 {
    public static void main(String[] args) {
        long number = Long.parseLong(args[0]);
        long need = Long.parseLong(args[1]);
        long remaining = Long.parseLong(args[2]);
        long result = Problem.eat(number, need, remaining);
        System.out.println(result);
    }
}

class Solution9 {
    public static void main(String[] args) {
        long number = Long.parseLong