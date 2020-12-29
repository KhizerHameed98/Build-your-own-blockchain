import hashlib

class Block:
    def __init__(self,previousHash,transaction):
        self.transaction=transaction
        self.previousHash=previousHash
        string_to_hash = "".join(transaction) +previousHash
        self.blockHash = hashlib.sha256(string_to_hash.encode()).hexdigest()