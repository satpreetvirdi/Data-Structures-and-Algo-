int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        multimap<int,pair<int,int>> me;
    
        for(int i=0;i<n;++i)
            me.insert({end[i],{start[i],i}});
        int las = 0,cnt=0; 
        for(auto el : me)
        {
            if(el.second.first > las)
            {
                cnt++;
                las = el.first;
            }
        }
        return cnt;
    }