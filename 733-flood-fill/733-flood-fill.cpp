class Solution {
public:
    static bool validate(vector<vector<int>>&image,int i,int j,int n ,int m , int oldcolor ){
        if(i>=0 && i<n && j>=0 &&j<m && image[i][j]==oldcolor){
            return true;
        }else{
            return false;
        }
    }
    void recursive(vector<vector<int>>&image,int sr,int sc,int n ,int m , int oldcolor ,int newColor){
        image[sr][sc]= newColor;
        
        if(validate(image,sr+1,sc,n,m,oldcolor)){
            recursive(image,sr+1,sc,n,m,oldcolor,newColor);
        }
        if(validate(image,sr-1,sc,n,m,oldcolor)){
            recursive(image,sr-1,sc,n,m,oldcolor,newColor);
        }
        if(validate(image,sr,sc+1,n,m,oldcolor)){
            recursive(image,sr,sc+1,n,m,oldcolor,newColor);
        }
        if(validate(image,sr,sc-1,n,m,oldcolor)){
            recursive(image,sr,sc-1,n,m,oldcolor,newColor);
        }
        
        
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int n = image.size();
        int m = image[0].size();
        
        int oldcolor = image[sr][sc];
        if(oldcolor==color){
            return image;
        }
        recursive(image,sr,sc,n,m,oldcolor,color);
        return image;
    }
};