### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::optional<long> prod_signs(std::vector<long> arr) {
    if (arr.empty()) return std::nullopt;
    long prod = 0;
    auto neg_count = std::count_if(arr.begin(), arr.end(), [](long x){return x < 0;});
    if (std::find(arr.begin(), arr.end(), 0) != arr.end()) prod = 0;
    else prod = pow(-1, neg_count);
    long sum = 0;
    for (auto i : arr) sum += std::abs(i);
    return prod * sum;
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
    public static Optional<Long> prodSigns(ArrayList<Long> arr) {
        if (arr.size() == 0) return std::nullopt;
        long prod = 0;
        for (long i : arr) prod += i;
        return prod_signs(arr);
    }
}

class Solution {
    public static void main(String[] args) {
        ArrayList<Long> arr = new ArrayList<>();
        arr.add(1);
        arr.add(2);
        arr.add(3);
        arr.add(4);
        arr.add(5);
        arr.add(6);
        arr.add(7);
        arr.add(8);
        arr.add(9);
        arr.add(10);
        arr.add(11);
        arr.add(12);
        arr.add(13);
        arr.add(14);
        arr.add(15);
        arr.add(16);
        arr.add(17);
        arr.add(18);
        arr.add(19);
        arr.add(20);
        arr.add(21);
        arr.add(22);
        arr.add(23);
        arr.add(24);
        arr.add(25);
        arr.add(26);
        arr.add(27);
        arr.add(28);
        arr.add(29);
        arr.add(30);
        arr.add(31);
        arr.add(32);
        arr.add(33);
        arr.add(34);
        arr.add(35);
        arr.add(36);
        arr.add(37);
        arr.add(38);
        arr.add(39);
        arr.add(40);
        arr.add(41);
        arr.add(42);
        arr.add(43);
        arr.add(44);
        arr.add(45);
        arr.add(46);
        arr.add(47);
        arr.add(48);
        arr.add(49);
        arr.add(50);
        arr.add(51);
        arr.add(52);
        arr.add(53);
        arr.add(54);
        arr.add(55);
        arr.add(56);
        arr.add(57);
        arr.add(58);
        arr.add(59);
        arr.add(60);
        arr.add(61);
        arr.add(62);
        arr.add(63);
        arr.add(64);
        arr.add(65);
        arr.add(66);
        arr.add(67);
        arr.add(68);
        arr.add(69);
        arr.add(70);
        arr.add(71);
        arr.add(72);
        arr.add(73);
        arr.add(74);
        arr.add(75);
        arr.add(76);
        arr.add(77);
        arr.add(78);
        arr.add(79);
        arr.add(80);
        arr.add(81);
        