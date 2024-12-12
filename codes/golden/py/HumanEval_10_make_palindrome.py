def make_palindrome(string: str) -> str:
    if not string:
        return ''

    beginning_of_suffix = 0

    while string[beginning_of_suffix:] != string[beginning_of_suffix:][::-1]:
        beginning_of_suffix += 1

    return string + string[:beginning_of_suffix][::-1]