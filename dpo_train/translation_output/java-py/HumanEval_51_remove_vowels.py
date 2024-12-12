def remove_vowels(text: str) -> str:
    return text.replaceAll("(?i)[aeiou]", "");

def check(candidate):
    assert candidate('') == ''
    assert candidate('abcdef\nghijklm') == 'bcdf\nghjklm'
    assert candidate('fedcba') == 'fdcb'
    assert candidate('eeeee') == ''
    assert candidate('acBAA') == 'cB'
    assert candidate('EcBOO') == 'cB'
    assert candidate('ybcd') == 'ybcd'

def test_check():
    check(remove_vowels)

test_check()
