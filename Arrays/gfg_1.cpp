//https://www.geeksforgeeks.org/check-if-a-key-is-present-in-every-segment-of-size-k-in-an-array/

#include <bits/stdc++.h>
using namespace std;
 
bool findxinkindowSize(int arr[], int x, int k, int n)
{   int val;
	for (int i = 0; i < n; ){
	    val = 0;
	    int loops = k;
	    while (loops && i < n){
	        if (arr[i] == x ) {
	            val = 1;
	           // break;
	        }
	        loops--;
	        i++;
	    }
	    if (val == 0) return false;
	}
	return true;
    
}
 
int main()
{
    int arr[] = {  21, 23, 56, 65, 34, 54, 76, 32, 23, 45, 21, 23, 25 };
    int x = 23, k = 5;
    int n = sizeof(arr) / sizeof(arr[0]);
    if (findxinkindowSize(arr, x, k, n))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}