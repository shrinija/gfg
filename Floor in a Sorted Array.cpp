// using binary search...
//binary search me actually kya hota vo dekhana... matlab.. jo elements hai .. uska pattern kaise change hota .. jab ham divide karte array ko...
//so that problem sahi se strike karega



//........................................................................................................
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
              
                if(v[mid]<x && v[mid]>ans)   // see this condition is unnecessary    ... because ham jab start =mid+1  karree... tab next v[mid] pehle vale se to bada hi hoga aur v[mid]<x vala condition to else me hi check ho gaya
                {
                ans = mid;
                }
                start = mid+1;
            }
        }
        
        return ans;
    }

//..............................................................................................................

//better approach..

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
                ans = mid;          
                start = mid+1;
            }
        }
        
        return ans;
    }
//..............................................................................................................................
