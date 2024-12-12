### Python version

from typing import List
from typing import Union

def split_words(txt: str) -> Union[List[str], int]:
    if " " in txt:
        return txt.split()
    elif "," in txt:
        return txt.replace(',',' ').split()
    else:
        return len([i for i in txt if i.islower() and ord(i)%2 == 0])

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
union Union_std_vector_std_string__long{
    std::vector<std::string> f0;
    long f1;    Union_std_vector_std_string__long(std::vector<std::string> _f0) : f0(_f0) {}
    Union_std_vector_std_string__long(long _f1) : f1(_f1) {}
    ~Union_std_vector_std_string__long() {}
    bool operator==(std::vector<std::string> f) {
        return f0 == f ;
    }    bool operator==(long f) {
        return f1 == f ;
    }
};
Union_std_vector_std_string__long split_words(std::string txt) {
    union Union_std_vector_std_string__long f0 = split_words(txt.c_str());
    union Union_std_vector_std_string__long f1 = split_words(txt.c_str()+txt.size());
    return f0;
}

#include<iostream>
#include<fstream>
#include<string>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<vector>
#include<sstream>
#include<bits/stdc++.h>
#include<bits/string_view.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<bits/stdc++.h