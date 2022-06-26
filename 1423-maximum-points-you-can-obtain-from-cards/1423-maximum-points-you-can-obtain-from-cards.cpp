class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int sum=0;
        int i;
        for(i=0;i<k;i++)
            sum+=cardPoints[i];
        
        if(cardPoints.size()==k)
            return sum;
        
        i=k-1;
        int z=0,j=cardPoints.size()-1;
        int maxi=sum;
        while(z<k)
        {
            sum-=cardPoints[i];
            i--;
            
            sum+=cardPoints[j];
            j--;
            
            
            maxi=max(maxi,sum);
            z++;
            
        }
        
        return maxi;
        
    }
};