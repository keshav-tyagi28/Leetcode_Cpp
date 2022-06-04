class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
           vector<string> ans(score.size()) ;
       priority_queue< pair<int,int> > pq;
       for(int i=0;i<score.size();i++)
           pq.push(make_pair(score[i],i));
        
        int rank=1;
        while(!pq.empty())
        {
            
            if(rank==1)
                ans[pq.top().second]="Gold Medal";
              
             else if(rank==2){
           ans[pq.top().second]="Silver Medal";
        }
        else if(rank==3){
            ans[pq.top().second]="Bronze Medal";
        }
        else{
            ans[pq.top().second]=to_string(rank);
        }
        rank++;
        pq.pop();
            
            
            
        }
    return ans;
    }
    
    
};