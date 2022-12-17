--> question simply feels tricky...
  -->but just like finding max of two sum...
  -->think...
  
  
  -->also take proper variables ... int   or long long int ...


class Solution{
    public:
        long long pairWithMaxSum(long long arr[], long long N)
    {
        // Your code goes here
        long long int sum=0;
        long long int maxsum=0;
        for(long long int i=1;i<N;i++)
        {
            sum=arr[i]+arr[i-1];
            maxsum=max(maxsum,sum);
        }
        return maxsum;
    }
};

