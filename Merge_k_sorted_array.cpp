// Node -> custom data type
class Node {
    public: 
    int data;
    int i;
    int j;
    
    Node (int data , int row, int col){
        this->data = data;
        i = row;
        j= col;
    }
};

class compare {
    public:
    bool operator()(Node* a , Node* b){
        return a->data > b->data;
    }
};


class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        // create MIN-Heap
        priority_queue<Node* , vector<Node*> , compare > minHeap;
        
//  step 1: insert first element of all array in MinHeap 

    for(int i =0; i<K; i++){
        Node* temp = new Node(arr[i][0] , i , 0);
        minHeap.push(temp);
    }
    
    vector<int> ans;
    
    // step 2: 
    
    while(minHeap.size() > 0){
            Node* temp = minHeap.top();
            ans.push_back(temp->data);
            minHeap.pop();
            
            int i = temp->i;
            int j = temp->j;
        
            if(j+1 < arr[i].size()){
                Node* next = new Node(arr[i][j+1] , i , j+1);
                minHeap.push(next);
            }
    }
    return ans;
    
 }
};



// 2nd solution 




#include <bits/stdc++.h> 

class data{
    public:
    int val;
    int apos;
    int vpos;

    data(int v,int ap,int vp){
        val = v;
        apos = ap;
        vpos =vp;
    }
};

class compare{
    public:
    bool operator()(data &d1,data &d2){
        return d1.val > d2.val;
    }
};

vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays,int k)
{

  vector<int> ans; 

 priority_queue<data,vector<data>,compare>pq;

 for(int i=0;i<k;i++){
     data d(kArrays[i][0],i,0);
     pq.push(d);
 }

 while(!pq.empty()){
     data curr = pq.top();
     ans.push_back(curr.val);
     pq.pop();
     int ap = curr.apos , vp = curr.vpos;

     if(vp+1 < kArrays[ap].size()){
         data d(kArrays[ap][vp+1],ap,vp+1);
         pq.push(d);
     }
 }

   return ans;

}
