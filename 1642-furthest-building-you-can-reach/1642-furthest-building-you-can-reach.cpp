class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
         priority_queue<int> maxB;
    
        int i=0, diff =0; // i is used for storing the position and diff for storing difference.
        for(i=0; i<heights.size()-1; i++){ // go till before the last building.
            
            //difference of the height of corresponding buildings
            diff = heights[i+1]-heights[i];
            
            //If next building is equal or samaller than current then go to next building.
            if(diff <= 0){
                continue;
            }

                if(diff<=bricks){
                bricks -= diff; 
                maxB.push(diff);
                }
            else if(ladders>0)
            {
                if(maxB.size())
                {
                    int top=maxB.top();
                    if(top>diff)
                    {
                        bricks+=top;
                        maxB.pop();
                        maxB.push(diff);
                        bricks-=diff;
                        

                    }    
                    
                }
                ladders--;
                
                
            }
            else
                    break;
                
        }
        
        // return the present position.
        return i;
    }
};