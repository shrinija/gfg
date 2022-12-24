try solving binary search problems in best way..

//..................................................



-->O(n)
  -->but array is sorted ....go for better approach
  
     int searchInsertK(vector<int>Arr, int N, int k)
    {
        // code here
        for(int i=0;i<N;i++)
        {
            if(Arr[i]==k)
            {
                return i;
            }
        }
        int i=0;
        while(Arr[i]<k && i<N)
        {
            i++;
        }
        return i;
    }

 //..............................................................
 


-->logn  .. sol  .. but.. there is some pattern..or say easy way.. to solve binary search problems..
  
 int searchInsertK(vector<int>Arr, int N, int k)
    {
        // code here
        int s=0;
        int e=N-1;
        int mid;
        int pos=N;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(Arr[mid]<k)
            {
                s=mid+1;
            }
            else if(Arr[mid]>=k)
            {
                pos=mid;
                e=mid-1;
                if(Arr[mid]==k)
                {
                    break;
                }
            }
        }
        return pos;
    }

//...............................................................


  -->logn 
  --> good one..

int searchInsertK(vector<int>Arr, int N, int k)
    {
        // code here
           int start=0;
           int end=N-1;
           
        while(start<=end)
        {
            
         int mid=start+(end-start)/2;
         
         if(k>Arr[mid])
         {
           start=mid+1;
         }
         else if(k<Arr[mid])
         {
           end=mid-1;
         }
         else 
         {
           return mid;
         }
        }
      return start;
    }
