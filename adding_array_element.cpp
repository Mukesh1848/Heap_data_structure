class Solution{
public:
  
int minOperations(int arr[], int n, int k) {
    priority_queue<int, vector<int>, greater<int> > pq;
    for (int i = 0; i < n; i++)
        pq.push(arr[i]);
    int count = 0;
    while (pq.size() > 1 && pq.top() < k) {
        int min1 = pq.top();
        pq.pop();
        int min2 = pq.top();
        pq.pop();
        int sum = min1 + min2;
        pq.push(sum);
        count++;
    }
    if (pq.top() < k)
        return -1;
    return count;
         }
};
