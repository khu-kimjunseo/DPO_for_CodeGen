from typing import Optional

def string_to_md5(text: str) -> Optional[str]:
    return Problem.stringToMd5(text)

def check(candidate):
    assert candidate('Hello world') == '3e25960a79dbc69b674cd4ec67a72c62'
    assert candidate('') == None
    assert candidate('A B C') == '0ef78513b0cb8cef12743f5aeb35f888'
    assert candidate('password') == '5f4dcc3b5aa765d61d8327deb882cf99'

def test_check():
    check(string_to_md5)

test_check()
