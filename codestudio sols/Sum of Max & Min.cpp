
int sumOfMaxMin(int arr[], int n){
    int maxE=arr[0];
    int minE=arr[0];
    for(int i=0;i<n;i++)
    {
	maxE=max(maxE,arr[i]);
    minE=min(minE,arr[i]);
    }
    return maxE+minE;
    
}