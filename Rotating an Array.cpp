better solution......................try.........................?




//...........................................................................................................................
void leftRotate(int arr[], int n, int d) {
        // code here
      reverse(arr,arr+n);
      reverse(arr,arr+n-d);
      reverse(arr+n-d,arr+n);
    }

//..............

--> using reverse() in STL
// Reverse the array
    reverse(arr, arr + n);
Time Complexity: O(N) where N is the size of the array.
Auxiliary Space: O(1)
//...........................................................................................................................
  
   void leftRotate(int arr[], int n, int d) {
        // code here
        int ans[n];       // actually creating variable sized array is not good practice... but if vector was given this could be one of the solution..
        
        for(int i=0;i<n;i++)
        {
            ans[(n-d+i)%n]=arr[i];
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=ans[i];
        }
    }
tc: o(n)+o(n)
sc: O(n)
//.....................................................................................................................
  
  
