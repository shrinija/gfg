a1[]=4 1 7 8 10
a2[]=2 3 9

//...........................................................................................

//TLE...........after 200 test cases
  T.C.=O(n^2)
  S.c=O(1)
  //........


        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
           long long int i=0;
            
            while(i<n )
            {
                long long int j=0;
                if(arr1[i]>=arr2[j])
                {
                    swap(arr1[i],arr2[j]);
                    i++;
                 //sort arr[2]
             
                    while(j<m-1)
                    {
                        if(arr2[j]>arr2[j+1])
                        {
                            swap(arr2[j],arr2[j+1]);
                        }
                        else 
                        break;
                        
                        j++;
                    }
                }
                else
                {
                    i++;
                }
                
            }
        }
//.................................................................................

 void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            int i = n-1;
            int j = 0;
        while(i>=0 && j<=m-1)
        {
            if(arr1[i] >= arr2[j])
            {
               swap(arr1[i],arr2[j]);
                 i--;
                 j++;
            }
            else
            {
                break;
            }
        }
          sort(arr1,arr1+n);
          sort(arr2,arr2+m);
        } 

//...........................................................................................
