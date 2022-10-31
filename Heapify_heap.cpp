
#include <iostream>
using namespace std;

class heap{
    public:
    int arr[100] ;
    int size;
    
    heap(){
        arr[0] =-1;
        size = 0;
    }
    
void insertToHeap(int val){
        // insert at last position
        size = size + 1;
        int index = size;
        arr[index] = val;
    
    while(index > 1){
        int parent = index /2;
        if(arr[parent] < arr[index]){
            swap(arr[parent] , arr[index]);
            index = parent;
        }
        else{
            return;
        }
    }
}

    void printHeap(){
        for(int i=1; i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
    
    void deleteFromHeap(){
        if(size==0){
            return;
        }
        
        // step 1 : put last element into first index 
        arr[1] = arr[size];
        size--;
        
    // take root node to its correct place 
    int i =1;
    while(size > 1){
        int leftIndex = 2*i;
        int rightIndex = 2*i+1;
        
        if(leftIndex < size && arr[leftIndex] < arr[i]){
            swap(arr[i] , arr[leftIndex]);
            i = leftIndex;
        }
        else if(rightIndex < size && arr[i] < arr[rightIndex]){
            swap(arr[i] , arr[rightIndex]);
            i = rightIndex;
        }
        else{
            return;
        }
    }
}

};

void heapify(int arr[] , int n, int i){
    
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;
    
    if(left < n && arr[largest] < arr[left]){
        largest = left;
    }
    
    if(right < n && arr[largest] < arr[right]){
        largest = right;
    }
    
    if(largest != i){
        swap(arr[largest] , arr[i]);
        heapify(arr , n , largest);
    }
}

int main() {

  heap h;
  h.insertToHeap(50);
  h.insertToHeap(55);
  h.insertToHeap(53);
  h.insertToHeap(52);
  h.insertToHeap(54);
  h.insertToHeap(67);
  h.printHeap();
  h.deleteFromHeap();
//   h.printHeap();
//   h.deleteFromHeap();
//   h.printHeap();
//   h.deleteFromHeap();
//   h.printHeap();
//   h.deleteFromHeap();
//   h.printHeap();
//   h.insertToHeap(67);
//   h.printHeap();

int arr[6] = {-1 , 54 , 53 , 55 , 52 , 50};
int n = 5;
for(int i =n/2; i>0; i--){
    heapify(arr , n ,i);
}

cout<< " printing the array Now "<<endl;

for(int i =0 ; i<n;i++){
    cout<<arr[i]<<" ";
}cout<<endl;

//  h.heapify()
//  h.print();
    return 0;
}
