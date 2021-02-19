#include<bits/stdc++.h>
using namespace std;

int main() {


  int n, key;
  cin >> n >> key;

  int arr[n];   //for storing input array

  for (int i = 0; i < n; i++) {            //taking input of array
    cin >> arr[i];
  }

  int low = 0 , high = n - 1, ans = -1;  //initialising lower bounds and upper bounds 

  while (low <= high) {

    int mid = low + (high - low) / 2;

    if (arr[low] == key) {            //check at lower bound of search space
      ans = low;
      break;
    }

    if (arr[high] == key) {           //check at upper bound of search space
      ans = high;
      break;
    }

    if (arr[mid] == key) {            //check at middle of search space
      ans = mid;
      break;
    }

    if (arr[mid] < key) {            //comparing the value at mid to the key and 
      low = mid + 1;                 //reducing the search space to half of its previous value.
    }
    else {
      high = mid - 1;
    }
  }


  cout << ans << "\n";               //printing the final answer



}
