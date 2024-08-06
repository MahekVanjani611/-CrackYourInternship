
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to find minimum number of pages.
bool isPossible(int arr[], int n, int m, int curr_min)
{
    int studentsRequired = 1;
    int curr_sum = 0;

   
    for (int i = 0; i < n; i++) {

        if (arr[i] > curr_min)
            return false;

        if (curr_sum + arr[i] > curr_min) {
 
            studentsRequired++;

            curr_sum = arr[i];


            if (studentsRequired > m)
                return false;
        }

        else
            curr_sum += arr[i];
    }
    return true;
}

// function to find minimum pages
long long  findPages( int n,int arr[], int m)
{
    long long sum = 0;

    if (n < m)
        return -1;
    int mx = INT_MIN;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        mx = max(mx, arr[i]);
    }

    int start = mx, end = sum;
    int result = INT_MAX;

    while (start <= end) {

        int mid = (start + end) / 2;
        if (isPossible(arr, n, m, mid)) {
   
            result = mid;

            end = mid - 1;
        }

        else

            start = mid + 1;
    }

    return result;
}


