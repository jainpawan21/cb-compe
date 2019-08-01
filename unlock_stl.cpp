// Below is C++ code to print largest permutation 
// after atmost K swaps 
#include<bits/stdc++.h> 
using namespace std; 

// Function to calculate largest permutation after 
// atmost K swaps 
void KswapPermutation(int arr[], int n, int k) 
{ 
	// Auxiliary dictionary of storing the position 
	// of elements 
	int pos[n+1]; 

	for (int i = 0; i < n; ++i) 
		pos[arr[i]] = i; 

	for (int i=0; i<n && k; ++i) 
	{ 
		// If element is already i'th largest, 
		// then no need to swap 
		if (arr[i] == n-i) 
			continue; 

		// Find position of i'th largest value, n-i 
		int temp = pos[n-i]; 

		// Swap the elements position 
		pos[arr[i]] = pos[n-i]; 
		pos[n-i] = i; 

		// Swap the ith largest value with the 
		// current value at ith place 
		swap(arr[temp], arr[i]); 

		// decrement number of swaps 
		--k; 
	} 
} 

// Driver code 
int main() 
{ 
	
	int n;
	int k; 
	cin>>n>>k;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	KswapPermutation(arr, n, k); 
	cout << "Largest permutation after "
		<< k << " swaps:n"; 
	for (int i=0; i<n; ++i) 
		printf("%d ", arr[i]); 
	return 0; 
} 

