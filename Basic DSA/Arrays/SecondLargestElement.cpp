/*
Time complexity: O(n)
Space complexity: O(1)
*/

int findSecondLargest(int n, vector<int> &arr)
{
    long long int firstMax = INT_MIN, secondMax = INT_MIN;
    
    for (int i=0; i<n; i++) {
        if (arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        }
        else if (arr[i] > secondMax and arr[i] < firstMax) {
            secondMax = arr[i];   
        }
    }

    if (secondMax == INT_MIN) {
        return -1;
    }
    else {
        return secondMax;
    }
    
}
