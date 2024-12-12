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
    std::tuple<float, float> closest_pair;
    float distance = -1;
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i+1; j < numbers.size(); j++) {
            float new_distance = std::abs(numbers[i] - numbers[j]);
            if (distance == -1 || new_distance < distance) {
                distance = new_distance;
                closest_pair = std::make_tuple(std::min(numbers[i], numbers[j]), std::max(numbers[i], numbers[j]));
            }
        }
    }
    return closest_pair;
}

### Python version

from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    """
    Find the closest elements in a list of numbers.

    :param numbers: A list of numbers.
    :return: The closest elements in the list.
    """
    return find_closest_elements(numbers[0:len(numbers)])

### C++ version

#import unittest
#import unittest.mock
#import unittest.mock

#from unittest.mock import patch
#from unittest.mock import MagicMock
#from unittest.mock import call

#from unittest.mock import MagicMock
#from unittest.mock import call

#from unittest.mock import MagicMock
#from unittest.mock import call

#from unittest.mock import MagicMock
#from unittest.mock import call

#from unittest.mock import MagicMock
#from unittest.mock import call

#from unittest.mock import MagicMock
#from unittest.mock import call

#from unittest.mock import MagicMock
#from unittest.mock import call

#from unittest.mock import MagicMock
#from unittest.mock import call

#from unittest.mock import MagicMock
#from unittest.mock import call

#from unittest.mock import MagicMock
#from unittest.mock import call

#from unittest.mock import MagicMock
#from unittest.mock import call

#from unittest.mock import MagicMock
#from unittest.mock import call

#from unittest.mock import MagicMock
#from unittest.mock import call

#from unittest.mock import MagicMock
#from unittest.mock import call

#from unittest.mock import MagicMock
#from unittest.mock import call

#from unittest.mock import MagicMock
#from unittest.mock import call

#from unittest.mock import MagicMock
#from unittest.mock import call

#from unittest.mock import MagicMock
#from unittest.mock import call

#from unittest.mock import MagicMock
#from unittest.mock import call

#from unittest.mock import MagicMock
#from unittest.mock import call

#from unittest.mock import MagicMock
#from unittest.mock import call

#from unittest.mock import MagicMock
#from unittest.mock import call

#from unittest.mock import MagicMock
#from unittest.mock import call

#from unittest.mock import MagicMock
#from unittest.mock import call

#from unittest.