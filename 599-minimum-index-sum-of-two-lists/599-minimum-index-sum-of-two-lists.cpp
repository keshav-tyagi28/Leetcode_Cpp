class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        
        vector<string> ans;
        int c=INT_MAX;
        vector<pair<int,int> > v;
        unordered_map<string,int> m;
       
        for(int i=0;i<list1.size();i++)
            m[list1[i]]=i;
        
        
        for(int i=0;i<list2.size();i++)
        {
            if(m.find(list2[i])!=m.end())
            {
                cout<<"inside find"<<list2[i]<<" ";
                int pos=m[list2[i]];
                int add= i+pos;
                if(add<c || add==c)
              v.push_back( make_pair(add,i) );    

            }
            
        }
        
        sort(v.begin(),v.end());
        int f= v[0].first;
        ans.push_back(list2[v[0].second]);
        int i=1;
        while(  i<v.size() && v[i].first==f  )
        {
            ans.push_back(list2[v[i].second]);
            i++;
        } 
        
        return ans;
        
        
    }
        
        
        
        
        
        
        
        
        

//          vector<string>::iterator itr;
//                 vector<string> ans;

//         vector<pair<int,int> > v;
//         int c=INT_MAX;
//         for(int i=0;i<list1.size();i++)
//         {
//             string check=list1[i];
//             itr=find(list2.begin(),list2.end(),check);
//             if(itr!=list2.end())
//             {
//                 int pos= itr-list2.begin();
//                 int add= i+pos;
//                 if(add<c || add==c)
//                 v.push_back( make_pair(add,i) );    
//             }
         
//         }
    
//         sort(v.begin(),v.end());
//         int f= v[0].first;
//         ans.push_back(list1[v[0].second]);
//         int i=1;
//         while(v[i].first==f)
//         {
//             ans.push_back(list1[v[i].second]);
//             i++;
//         }
//                 return ans;

//     }
};