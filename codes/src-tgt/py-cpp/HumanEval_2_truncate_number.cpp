### Python version

def truncate_number(number: float) -> float:
    return number % 1.0

### C++ version

#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
float truncate_number(float number) {
    return number - floor(number);
}

