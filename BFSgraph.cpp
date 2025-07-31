vector<int> bfs(vector<vector<int>> &adj) {
        
        
        int V = adj.size();
        vector< int> vis(V,0);
        vis[0] = 1;
        queue<int> q ;
        
        q.push(0);
        vector<int> ans;
        
        while(!q.empty()){
            
            int curr = q.front() ;
            q.pop();
            
            ans.push_back(curr);
            
            for (auto it : adj[curr]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                    
                }
                
                
            }
            
        }
        return ans;
    }
