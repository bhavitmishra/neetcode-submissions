class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& a) {
        stack<pair<int , int> >s;
        vector<int>v;
        int n = a.size();
        for(int i = n -1 ; i >= 0 ; i--)
        {
            if(s.size()==0) v.push_back(0);
            else if(s.size()>0 && s.top().first>a[i]) v.push_back(s.top().second - i);
            else if(s.size()>0 && s.top().first<=a[i])
            {
                while(s.size()>0 && s.top().first <=a[i]) s.pop();
                if(s.size()==0) v.push_back(0);
                else v.push_back(s.top().second - i);
            }
            s.push({a[i] , i});
        }
        reverse(v.begin() , v.end());
        return v;
    }
};
