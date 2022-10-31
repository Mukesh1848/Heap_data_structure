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
        for(int i=0; i<size+1;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main() {

  heap h;
  h.insertToHeap(50);
  h.insertToHeap(55);
  h.insertToHeap(53);
  h.insertToHeap(52);
  h.insertToHeap(54);
  h.insertToHeap(67);
  h.printHeap();
    return 0;
}
