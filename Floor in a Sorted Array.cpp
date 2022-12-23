int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        long long start = 0;
        long long end   = n-1;
        long long ans = -1;
        long long mid;
        
        while(start <= end) 
        {
             mid = (start + end)/2;
            
            if(v[mid] == x)
            {
                return mid;
            }
            
            else if(v[mid] > x)
            {
                end = mid-1;
            }
            
            else
            {
                ans = mid;            // ye possible ans hai to esko store karlo...parr kya koi esse bada hai.. jo x se chota hai.. so to check that start=mid+1
                start = mid+1;
            }
        }
        
        return ans;
    }
