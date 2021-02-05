#include<bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> a, vector<int> b) {

    int x = (int)a.size();
    int y = (int)b.size();

    int l = 0, r = 0;
    vector<int>ans;

    while (l < x || r < y) {
        if (r == y || (l < x && a[l] < b[r])) {
            ans.push_back(a[l]);
            l++;
        }
        else {
            ans.push_back(b[r]);
            r++;
        }
    }

    return ans;
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif



    int n;    // the size of input array
    cin >> n;

    vector<int> a(n);    // input array

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<vector<int>>sorted_components; // to store sorted components

    vector<int>temp;    //temporary vector

    temp.push_back(a[0]);

    for (int i = 1; i < n; i++) {

        if (a[i] >= temp.back()) {

            temp.push_back(a[i]);
        }
        else {
            sorted_components.push_back(temp);
            temp.clear();
            temp.push_back(a[i]);
        }
    }
    if ((int)temp.size())sorted_components.push_back(temp);


    cout << "The sorted components are : "; // printing the sorted components

    for (auto i : sorted_components) {
        cout << "{ ";
        for (auto j : i) {
            cout << j << " ";
        }
        cout << "},";

    }
    cout << "\n\n";

    while ((int)sorted_components.size() >= 2) {     // keep merging the sorted components until
        // we get final sorted array
        vector<int> a = sorted_components.back();
        sorted_components.pop_back();
        vector<int> b = sorted_components.back();
        sorted_components.pop_back();

        vector<int> arr = merge(a, b);

        sorted_components.push_back(arr);
    }
    cout << "The final sorted array is : ";
    for (auto i : sorted_components[0])cout << i << " ";

}
