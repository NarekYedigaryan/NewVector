#include "Vector.h"
#include <iostream>
#include <vector>
int main()
{
  //Vector<int> arr={1,2,3,4,4}; don't work correct
  Vector<int> arr;
 arr.push_back(1);
 arr.push_back(2);
 arr.push_back(3);
 arr.push_back(4);
 arr.push_back(5);
 


Vector<int> arr1;
 arr1.push_back(6);
 arr1.push_back(5);
 arr1.push_back(4);
 arr1.push_back(3);
 arr1.push_back(2);
 arr1.push_back(1);

 arr.swap(arr1);
 for (int i = 0; i < arr.size(); i++)
 {
    std::cout<<arr[i]<<" ";
 }
 std::cout<<std::endl;
 for (int i = 0; i < arr.size(); i++)
 {
    std::cout<<arr1[i]<<" ";
 }
 
 

}