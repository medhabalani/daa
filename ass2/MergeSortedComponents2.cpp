#include<bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define pi pair<int,int>

int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int n;  //size of input array
    cin >> n;

    vector<int> a(n); // input array

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<vector<int>>sorted_components; //to store sorted components

    vector<int>temp; //temporary vector

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


    set<pair<int, pi>>st; //element,ith array,jth element of ith array

    for (int i = 0; i < (int)sorted_components.size(); i++) {  //insert the first element of each sorted
        int cur = sorted_components[i][0];                     //component into the set

        st.insert({cur, {i, 0}});
    }

    vector<int>ans;   //for storing final sorted array

    while (!st.empty()) {

        auto x = *st.begin();  //extract an element from beginning of the set
        st.erase(st.begin());

        ans.push_back(x.ff);    //append it to the answer

        if (x.ss.ss + 1 < (int)sorted_components[x.ss.ff].size()) {
            int cur = sorted_components[x.ss.ff][x.ss.ss + 1];

            st.insert({cur, {x.ss.ff, x.ss.ss + 1}});
        }
    }
    cout << "The final sorted array is : ";  //printing the sorted array
    for (auto i : ans)cout << i << " ";

}
