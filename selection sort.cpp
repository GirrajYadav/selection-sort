#include<iostream>
using namespace std;
void swapping(int &a, int &b) {        
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void selectionSort(int *array, int size) {
   int i, j, min;
   for(i = 0; i<size-1; i++) {
      min = i;   
      for(j = i+1; j<size; j++)
         if(array[j] < array[min])
            imin = j;
         swap(array[i], array[min]);
   }
   }
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];           //create an array with given number of elements
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   selectionSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}
