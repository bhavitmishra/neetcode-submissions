class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        // time = target - startposition / speed 
        vector<pair<int,int>>posi;
        stack<double>st;
        for(int i = 0 ; i < speed.size() ; i++)
        {
            posi.push_back({position[i] , speed[i]});
        }
        sort(posi.begin() , posi.end());
        for(int i = posi.size() - 1 ; i >= 0 ; i--)
        {
            double t = (double)(target - posi[i].first) / posi[i].second;
            if(st.empty()) st.push(t);
            else
            {
                if(st.top() >= t) 
                {
                    // continue because will be part of the same fleet
                    continue;
                }
                else{
                    // new fleet found , so push the new fleet leader
                    st.push(t);
                }
            }
        }
        return st.size();
    }
};
