class Solution {
public:
   bool isSafe(vector<string> &mat, int n, int row, int col){
	if(row>=n || col>=n || row<0 || col<0)
		return false;

	// check row
	for(int i=col;i>=0;i--)
		if(mat[row][i]=='Q')
			return false;

	//check top-left diagonal
	for(int i=row,j=col;i>=0 && j>=0;i--,j--)
		if(mat[i][j]=='Q')
			return false;

	//check bottom-left diagonal
	for(int i=row,j=col;i<n && j>=0;i++,j--)
		if(mat[i][j]=='Q')
			return false;

	return true;
}

void nQueensUtil(vector<vector<string>> &res, vector<string> &currRes, int n, int col){
	if(col==n){
		res.push_back(currRes);
		return;
	}

	// try all rows for current column if its safe and then backtrack
	for(int i=0;i<n;i++){
		if(isSafe(currRes,n,i,col)){
			currRes[i][col] = 'Q';
			nQueensUtil(res,currRes,n,col+1);
			currRes[i][col] = '.';
		}
	}
}


vector<vector<string>> solveNQueens(int n) {
	vector<vector<string>> res;
	vector<string> currRes(n,string(n,'.'));

	nQueensUtil(res,currRes,n,0);

	return res;}
};