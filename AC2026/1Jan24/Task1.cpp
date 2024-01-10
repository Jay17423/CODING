//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    sort(arr, arr + n); //Sort the array in increasing order
	    for(int i= n-1 ;i>0;i--){
	        if(arr[i]!=arr[i-1]){           //CHecking Wheter the last and second last element is same
	                                        // or different , if different print arr[i-1] else check for
	                                       // other elemnts
	            return arr[i-1];
	            
	        }
	       
	        }
	        return -1;
	        
	    }
