def get_closest_vowel(word: str) -> str:
    return get_closest_vowel(word.lower())

def check(candidate):
    assert candidate('yogurt') == 'u'
    assert candidate('full') == 'u'
    assert candidate('easy') == ''
    assert candidate('eAsy') == ''
    assert candidate('ali') == ''
    assert candidate('bad') == 'a'
    assert candidate('most') == 'o'
    assert candidate('ab') == ''
    assert candidate('ba') == ''
    assert candidate('quick') == ''
    assert candidate('anime') == 'i'
    assert candidate('Asia') == ''
    assert candidate('Above') == 'o'

def test_check():
    check(get_closest_vowel)

test_check()
