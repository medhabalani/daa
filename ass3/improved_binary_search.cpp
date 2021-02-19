#include<bits/stdc++.h>
using namespace std;
int no_of_itr_binary_search=0;
int no_of_itr_improved_binary_search=0;
int improved_binary_search(int arr[],int n,int key){
	int l=0;
	int r=n-1;
	int ans=-1,mid;
	while(l<=r){
		no_of_itr_improved_binary_search++;
		mid=l+(r-l)/2;
		if(arr[l]==key){
			ans=l;
			return ans;
		}
		else if(arr[r]==key){
			ans=r;
			return ans;
		}
		else if(arr[mid]==key){
			ans=mid;
			return ans;
		}
		else if(arr[mid]<key){
			l=mid+1;
			r=r-1;
		}
		else{
			r=mid-1;
			l=l+1;
		}
	}
	return ans;
}
int binary_search(int arr[],int n,int key){
	int l=0;
	int r=n-1;
	int ans=-1,mid;
	while(l<=r){
		no_of_itr_binary_search++;
		mid=l+(r-l)/2;
		if(arr[mid]==key){
			ans=mid;
			return ans;
		}
		else if(arr[mid]<key){
			l=mid+1;
		}
		else{
			r=mid-1;
		}
	}
	return ans;
}
int main(){
	int n,i,j,key;
	cin>>n>>key;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];  //sorted array
	cout<<"index: "<<binary_search(a,n,key)<<endl;
	cout<<"No. of iterations in binary search: "<<no_of_itr_binary_search<<endl;
	cout<<"index: "<<improved_binary_search(a,n,key)<<endl;
	cout<<"No. of iterations in improved binary search: "<<no_of_itr_improved_binary_search<<endl;
}
