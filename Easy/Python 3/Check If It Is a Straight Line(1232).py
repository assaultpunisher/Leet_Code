class Solution:
    def checkStraightLine(self, coordinates: List[List[int]]) -> bool:
        def get_slope(a, b):
            if b[0] == a[0]:
                return '#'
            return (b[1]-a[1])/(b[0]-a[0])
        slope = get_slope(coordinates[0], coordinates[1])
        for i in range(1, len(coordinates)-1):
            if get_slope(coordinates[i], coordinates[i+1]) != slope:
                return False
        return True