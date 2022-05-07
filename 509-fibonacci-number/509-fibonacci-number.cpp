class Solution {
public:
    int fibhelper(int n,int *ans)
    {
          if(n<=1)
        {     ans[n]=n;  
              return n;
         }
        
        if(ans[n-1]==-1)
        {
            ans[n-1]=fibhelper(n-1,ans);
        }
       
         if(ans[n-2]==-1)
        {
            ans[n-2]=fibhelper(n-2,ans);
        }
        
        
        return  ans[n-1]+ans[n-2];
    }
    
    int fib(int n) {
       
//         int *ans=new int[n+1];
        
//         for(int i=0;i<n+1;i++)
//         {
//             ans[i]=-1;
//         }
            
//      return fibhelper(n,ans);
        
        if(n==0||n==1)
            return n;
            
        
        int remain=n-2;
        remain+=1;
        int a=0,b=1;
        int count=1;
        int ans;
        while(count<=remain)
        {
            ans=a+b;
            a=b;
            b=ans;
            count++;
            
        }
        return ans;
      
        
        
        
}};