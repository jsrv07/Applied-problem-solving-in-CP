class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        
        rev=[False,False,False]
        res=0
        for ch in reversed(s):
            if(ch=='I'):
                res+=(-1 if rev[2] else 1)
            elif(ch=='X'):
                res+=(-10 if rev[1] else 10)
                rev[2]=True
            elif(ch=='C'):
                res+=(-100 if rev[0] else 100)
                rev[1]=True
            elif(ch=='V'):
                res+=5
                rev[2]=True
            elif(ch=='L'):
                res+=50
                rev[1]=True
            elif(ch=='D'):
                res+=500
                rev[0]=True
            elif(ch=='M'):
                res+=1000
                rev[0]=True
            
        return res