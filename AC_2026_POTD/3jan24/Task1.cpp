int minMoves(int a[], int n, int k)
{
    long count=0;
    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1]){
            int new1 = ceil((a[i+1]-a[i])*1.0/k);
            a[i+1]=a[i+1]-(k*new1);
            count = count + new1;
    
        }
    }
    return count % 1000000007;
}