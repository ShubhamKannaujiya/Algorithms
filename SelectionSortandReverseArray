#include <iostream>

using namespace std;
void SSort(int a[], int n);
void reversearry(int a[], int n);
void printarray(int a[], int n);
int main() {

  int a[100], n, i;
  cout << "\nEnter the number of data element to be sorted: ";
  cin >> n;
  for (i = 0; i < n; i++) {
    cout << "Enter element " << i + 1 << " in array : ";
    cin >> a[i];
  }

  cout << "The array is ";
  printarray(a, n);

  SSort(a, n);

  cout << "Sorted array: \n";
  printarray(a, n);

  cout << "reversed array: \n";
  reversearry(a, n);
  printarray(a, n);

  return 0;
}

void SSort(int a[], int n) {
  void swap(int * x, int * y);
  int i, j, min, temp;
  for (i = 0; i < n - 1; ++i) {
    min = i;
    for (j = i + 1; j < n; j++){
		if (a[j] > a[min])  
            	min = j;
					swap( & a[min], & a[j]);

	}      
  }
}

void swap(int * x, int * y) {
  int temp;
  temp = * x;
  * x = * y;
  * y = temp;
}

void reversearry(int a[], int n) {
  void swap(int * x, int * y);
  int start = 0, end = n - 1;
  while (start < end) {
    swap( & a[start], & a[end]);
    start++;
    end--;
  }
}

void printarray(int a[], int n) {
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << endl;
}
