--> {{0, 0}, {1, 1}}
--> {{0, 0}, {2,2}}   ......this test case... ans should be -1 ...take care ...


int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int count=0;
	    int ans=0;
	    int index=-1;
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            if(arr[i][j]==1)
	            {
	                count++;
	            }
	        }
	        if(count>ans)
	        {
	            ans=count;
	            index=i;
	        }
	        count=0;
	    }
	    return index;
	}
//................................


//because they are sorted..

int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	      for(int j=0;j<m;j++)   
	      {
	        for(int i=0;i<n;i++)
	       {
	         if(arr[i][j]==1)
	         return i;
	       }
	      }
	    return -1;
	}
