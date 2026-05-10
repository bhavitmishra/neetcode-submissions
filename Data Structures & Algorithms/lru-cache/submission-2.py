class LRUCache:
    def __init__(self, capacity: int):
        self.cap = capacity
        self.gett = defaultdict()
        self.freq = defaultdict()
        self.operations = 0
    
    def get(self, key: int) -> int:
        if key not in self.gett:
            return -1
        self.operations += 1
        self.freq[key] = self.operations
        return self.gett[key]

    def put(self, key: int, value: int) -> None:
        self.operations += 1
        if key not in self.gett and len(self.gett) == self.cap:
            rm = min(self.freq, key=lambda k: self.freq[k])
            del self.gett[rm]
            del self.freq[rm]
        self.gett[key] = value
        self.freq[key] = self.operations