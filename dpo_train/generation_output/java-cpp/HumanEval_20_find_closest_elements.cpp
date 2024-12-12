### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Pair<Float, Float> findClosestElements(ArrayList<Float> numbers) {
        Pair<Float, Float> closestPair = null;
        Float distance = null;

        for (int idx = 0; idx < numbers.size(); idx++) {
            Float elem = numbers.get(idx);
            for (int idx2 = 0; idx2 < numbers.size(); idx2++) {
                Float elem2 = numbers.get(idx2);
                if (idx != idx2) {
                    Float newDistance = Math.abs(elem - elem2);
                    if (distance == null || newDistance < distance) {
                        distance = newDistance;
                        closestPair = Pair.with(Math.min(elem, elem2), Math.max(elem, elem2));
                    }
                }
            }
        }

        return closestPair;
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
std::tuple<float, float> find_closest_elements(std::vector<float> numbers) {
    std::unordered_map<float, float> map;
    std::vector<float> sortedNumbers;
    std::vector<float> sortedNumbers2;
    std::vector<float> sortedNumbers3;
    std::vector<float> sortedNumbers4;
    std::vector<float> sortedNumbers5;
    std::vector<float> sortedNumbers6;
    std::vector<float> sortedNumbers7;
    std::vector<float> sortedNumbers8;
    std::vector<float> sortedNumbers9;
    std::vector<float> sortedNumbers10;
    std::vector<float> sortedNumbers11;
    std::vector<float> sortedNumbers12;
    std::vector<float> sortedNumbers13;
    std::vector<float> sortedNumbers14;
    std::vector<float> sortedNumbers15;
    std::vector<float> sortedNumbers16;
    std::vector<float> sortedNumbers17;
    std::vector<float> sortedNumbers18;
    std::vector<float> sortedNumbers19;
    std::vector<float> sortedNumbers20;
    std::vector<float> sortedNumbers21;
    std::vector<float> sortedNumbers22;
    std::vector<float> sortedNumbers23;
    std::vector<float> sortedNumbers24;
    std::vector<float> sortedNumbers25;
    std::vector<float> sortedNumbers26;
    std::vector<float> sortedNumbers27;
    std::vector<float> sortedNumbers28;
    std::vector<float> sortedNumbers29;
    std::vector<float> sortedNumbers30;
    std::vector<float> sortedNumbers31;
    std::vector<float> sortedNumbers32;
    std::vector<float> sortedNumbers33;
    std::vector<float> sortedNumbers34;
    std::vector<float> sortedNumbers35;
    std::vector<float> sortedNumbers36;
    std::vector<float> sortedNumbers37;
    std::vector<float> sortedNumbers38;
    std::vector<float> sortedNumbers39;
    std::vector<float> sortedNumbers40;
    std::vector<float> sortedNumbers41;
    std::vector<float> sortedNumbers42;
    std::vector<float> sortedNumbers43;
    std::vector<float> sortedNumbers44;
    std::vector<float> sortedNumbers45;
    std::vector<float> sortedNumbers46;
    std::vector<float> sortedNumbers47;
    std::vector<float> sortedNumbers48;
    std::vector<float> sortedNumbers49;
    std::vector<float> sortedNumbers50;
    std::vector<float> sortedNumbers51;
