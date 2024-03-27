
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
   
  int arr[] = {50,52,63,78,56};    // desing a heap with the help of array
   vector<int> v(arr,arr+6);
   
   make_heap(v.begin(),v.end());     // created a heap
   cout<<"front "<<v.front()<<endl;   // front element of a heap
//   cout<<"pop value "<<pop_heap()<<endl;
   pop_heap(v.begin(),v.end());   // pop ffrom a heap
   v.pop_back();                  // pop also from a vector
   cout<<"front "<<v.front()<<endl   // after pop front elemnt of a heap
   v.push_back(99);                 // insert a new element into a heap
   push_heap(v.begin(),v.end());    // insert a new elemnt into a heap
   cout<<"front "<<v.front()<<endl;    // after insert front elemnt of a heap
   
   sort_heap(v.begin(),v.end());         // sort a heap
    std::cout << "final sorted range :";
  for (unsigned i=1; i<v.size(); i++)
    std::cout << ' ' << v[i];
    
    
   std::cout << '\n';
   cout<<"front "<<v.front()<<endl;
   cout<<"back "<<v.back()<<endl;
   
   reverse(v.begin(),v.end());      // reverse heap
    std::cout << "final reverse range :";
  for (unsigned i=1; i<v.size(); i++)
    std::cout << ' ' << v[i];
    
    
   std::cout << '\n';
   cout<<"front "<<v.front()<<endl;
   cout<<"back "<<v.back()<<endl;
   
}
