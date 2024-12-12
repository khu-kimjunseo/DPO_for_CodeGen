from typing import Optional

def string_to_md5(text: str) -> Optional[str]:
    import hashlib
    return hashlib.md5(text.encode('ascii')).hexdigest() if text else None