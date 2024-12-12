from typing import List

def sorted_list_sum(lst: List[str]) -> List[str]:
    return sorted_list_sum(lst)

def check(candidate):
    assert candidate(['aa', 'a', 'aaa']) == ['aa']
    assert candidate(['school', 'AI', 'asdf', 'b']) == ['AI', 'asdf', 'school']
    assert candidate(['d', 'b', 'c', 'a']) == []
    assert candidate(['d', 'dcba', 'abcd', 'a']) == ['abcd', 'dcba']
    assert candidate(['AI', 'ai', 'au']) == ['AI', 'ai', 'au']
    assert candidate(['a', 'b', 'b', 'c', 'c', 'a']) == []
    assert candidate(['aaaa', 'bbbb', 'dd', 'cc']) == ['cc', 'dd', 'aaaa', 'bbbb']

def test_check():
    check(sorted_list_sum)

test_check()
