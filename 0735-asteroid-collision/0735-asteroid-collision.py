class Solution:
    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
        result = []
    
        for spirit in asteroids:
            while result and spirit < 0 < result[-1]:
                if result[-1] < -spirit:
                    result.pop()
                    continue
                elif result[-1] == -spirit:
                    result.pop()
                break
            else:
                result.append(spirit)
    
        return result