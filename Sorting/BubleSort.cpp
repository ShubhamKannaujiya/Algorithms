#include <iostream>

using namespace std;
void bublesort(int a[], int n);
void printarray(int a[], int n);

int main() {
  int a[100], n, i;
  cout << "\nEnter the number of data element to be sorted: ";
  cin >> n;
  for (i = 0; i < n; i++) {
    cout << "Enter element" << i + 1 << "in array : ";
    cin >> a[i];
  }

  cout << "The array is ";
  printarray(a, n);

  bublesort(a, n);

  cout << "Sorted array: \n";
  printarray(a, n);

  return 0;
}

void bublesort(int a[], int n) {
  void swap(int * x, int * y);
  int i = 0, j = 0, temp;

  for (i = 0; i < n; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        swap( & a[j], & a[j + 1]);

      }
    }
  }
}
void printarray(int a[], int n) {
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << endl;
}

void swap(int * x, int * y) {
  int temp;
  temp = * x;
  * x = * y;
  * y = temp;
}
