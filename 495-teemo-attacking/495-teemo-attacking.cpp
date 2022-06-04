class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
     
        int stime=timeSeries[0];
        int etime= stime+duration-1;
        int c=0;
        for(int i=1;i<timeSeries.size();i++)
        {
            if(timeSeries[i]>etime)
            {
                int add=etime-stime+1;
                c+=add;
                stime=timeSeries[i];
                etime=stime+duration-1;
                
            }
            else if(timeSeries[i]==etime)
            {
                
                int add=etime-stime;
                c+=add;
                stime=timeSeries[i];
                etime=stime+duration-1;
              
            }
            else{
                
                int add=timeSeries[i]-stime;
                c+=add;
                stime=timeSeries[i];
                etime=stime+duration-1;
                
            }
            
        }
        
        int add=etime-stime+1;
        c+=add;
        
        return c;
    }
};