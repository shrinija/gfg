//...................................................................................
// see just by changing variables thinking properly we can write better code..

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    pair<int,int>ans;
    int f=-1,c=-1;                  // lets make changes here........... see next code
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
        else
        {
            c = min(c,arr[i]);
        }
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

//..... 
//or 

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    int f=INT_MIN,c=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
           return {arr[i], arr[i]};
        }
        else if(arr[i]>f && arr[i]<x)
        {
            f=arr[i];
        }
        else if(arr[i]<c && arr[i]>x )
        {
             c=arr[i];
        }
    }
    if(f==INT_MIN)
    {
        f=-1;
    }
    if(c==INT_MAX)
    {
        c=-1;
    }
    return {f,c};
}

//.......................................................................................


