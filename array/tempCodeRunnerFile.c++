  int temp=0;
        vector<int>v(2);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i]+brr[j]<x){
                    if(temp<arr[i]+brr[j]){
                        temp=arr[i]+brr[j];
                        v[0]=arr[i];
                        v[1]=brr[j];
                    }
                }
            }
        }
        
        return v;