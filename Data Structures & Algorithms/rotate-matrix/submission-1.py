class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        
        # m=[[1,2,3],[4,5,6],[7,8,9]]
        # m.reverse()
        # [[7,8,9],[4,5,6],[1,2,3]]   
        matrix.reverse()
        for i in range(len(matrix)):
            for j in range(i+1,len(matrix[0])):
                temp=matrix[i][j]
                matrix[i][j]=matrix[j][i]
                matrix[j][i]=temp
        #no built in swap