int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.

	int i=0,j=0;

	for(;j<n;j++){
		if(arr[j]>arr[i]){
			i++;
			arr[i] = arr[j];
		}
	}

	return i+1;
}