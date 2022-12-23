pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    pair<int,int>ans;
    int f=-1,c=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            f=arr[i];
            c=arr[i];
        }
        if(arr[i]>f && arr[i]<x)
        {
            f=arr[i];
        }
        else if(c==-1 && arr[i]>x )
        {
             c=arr[i];
        }
        else if( arr[i]<c && arr[i]>x)
        {
            c=arr[i];
        }
    }
    return {f,c};
}


///////.........................................................................................



see this..............................
just changing                                      c               its makes difference





pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    int f=INT_MIN;
    int c=INT_MAX;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return {x,x};
        }
        else if(arr[i]<x)
        {
            f = max(f,arr[i]);
        }
        else c = min(c,arr[i]);
    }
    
    if(f==INT_MIN) 
    {
      f = -1;
    }
    if(c==INT_MAX)
    {
      c = -1;
    }
    return {f,c};
}















