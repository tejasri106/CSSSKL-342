/*
 * ArrayDemo
 *
 * Created by Rob Nash
 *
 * Modified by Yang Peng on 01/09/18
 */

#include <iostream>
using namespace std;

// Forward declarations.
void display(int* data, int size);
void bubble(int* data, int size);
void swap(int* data, int idx1, int idx2);
int linearSearch(int* data, int size, int target);

int main(int argc, const char * argv[])
{
  const int SIZE = 7;
  // These are auto variables.
  int set[] = new int[SIZE] {1,4,3,2,5,9,8}; // Size implicit
  int set2[] = new int[SIZE] {30, 23, 25, 19, 100, 12, 7};
  // How does it look like in JAVA?
  // int[] myArray = new int[3];
  // int[] myArray = {1, 2, 3};
  // int[] myArray = new int[] {1, 2, 3};
    
  // You have to pass the size in; a C++ array is just a dumb block of
  // storage; no size information is carried with it and no bounds
  // checking is done.
  display(set, SIZE);
  bubble(set, SIZE);
  display(set, SIZE);
  int result = linearSearch(set, SIZE, 53);
  cout << "linear search: " << result << endl;

  delete[] set;
  delete[] set2;

  set = nullptr;
  set1 = nullptr;
    
  return 0;
}

void display(int* data, int size) {
  for(int i = 0; i < size; i++) {
    cout << data[i] << ",";
  }
  cout << std::endl;
}

void bubble(int* data, int size) {
  for(int i = 0; i < size; i++) {
    for(int k = 0; k < size - 1 - i; k++) {
        int *p1 = data + k; 
        int *p2 = data + k + 1;
        if (*p1 < *p2) {
            swap(p1, p2);
        }
      
    } 
  }
}

void swap(int* idx1, int* idx2) {
  int temp = *idx1;
  *idx1 = *idx2;
  *idx2 = temp; 
}

int linearSearch(int* data, int size, int target) {
  for (int i = 0; i < size; i++) {
    if (data[i] == target) {
      return i;
    }
  }
  return -1;
}
 
