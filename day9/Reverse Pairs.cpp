class Solution {
public:
    void merge(vector<int>& arr, int low, int mid, int high) {
        vector<int> temp;
        int left = low;
        int right = mid + 1;

        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            } else {
                temp.push_back(arr[right]);
                right++;
            }
        }

        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }

        while (right <= high) {
            temp.push_back(arr[right]);
            right++;
        }

        for (int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }
    }

    long long countPairs(vector<int>& arr, int low, int mid, int high) {
        int right = mid + 1;
        long long cnt = 0;
        for (int i = low; i <= mid; i++) {
            while (right <= high && (long long)arr[i] > 2LL * arr[right]) right++;
            cnt += (long long)(right - (mid + 1));
        }
        return cnt;
    }

    long long mergeSort(vector<int>& arr, int low, int high) {
        long long cnt = 0;
        if (low >= high) return cnt;
        int mid = (low + high) / 2 ;
        cnt += mergeSort(arr, low, mid);  
        cnt += mergeSort(arr, mid + 1, high); 
        cnt += countPairs(arr, low, mid, high); 
        merge(arr, low, mid, high);  
        return cnt;
    }

    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        return (int)mergeSort(nums, 0, n - 1); // Cast to int if required by function signature
    }
};
