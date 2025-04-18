class Solution {
public:
    void dfs(int i,int j, vector<vector<char>>&v , int n,int m){
        if(i<0 or j<0 or i>=n or j>=m or v[i][j]!='1') return;  
        v[i][j]='2';
        dfs(i+1,j,v,n,m);
        dfs(i-1,j,v,n,m);
        dfs(i,j+1,v,n,m);
        dfs(i,j-1,v,n,m);   
    }
    int numIslands(vector<vector<char>>& v) { 
        int n=v.size();
        int m=v[0].size();
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]=='1'){
                    dfs(i,j,v,n,m);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};