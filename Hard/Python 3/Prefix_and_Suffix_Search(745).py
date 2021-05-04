class WordFilter:
    def __init__(self, words: List[str]):
        self.wordIndexDict = {}
        for i, word in enumerate(words):
            # build and insert prefix+suffix string
            # generate all matching searchStrings
            for suffixStart in range(len(word),-1,-1):
                for prefixEnd in range(len(word)+1):
                    currString = word[suffixStart:]+'#'+word[:prefixEnd]
                    # overwrite with larger i
                    self.wordIndexDict[currString] = i

    def f(self, prefix: str, suffix: str) -> int:
        # build our searchString
        searchString = suffix+'#'+prefix
        # find with searchString
        if searchString in self.wordIndexDict:
            return self.wordIndexDict[searchString]
        return -1