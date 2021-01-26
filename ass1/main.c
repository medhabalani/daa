#include<stdio.h>
#include<stdlib.h>

int vis[12];

void reverse(int* arr, int l, int r)
{
    while(l<r){
        int temp = arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        l++;
        r--;
    }
}

int get_length(int l,int r){

  int x = (rand()%(r-l+1)+l);
    if(!vis[x]){
      vis[x]=1;
      return x;
  }
  return get_length(l,r);
}
    
void permute(int* arr, int len) 
{
    if(arr == NULL || len<=1)
        return;
 
    int p=0;            
    for(int i=len-2; i>=0; i--){
        if(arr[i]<arr[i+1]){
            p=i;
            break;
        }    
    }
 
    int q = 0;
    for(int i=len-1; i>p; i--){
        if(arr[i]> arr[p]){
            q=i;
            break;
        }    
    }
 
    if(p==0 && q==0){
        reverse(arr, 0, len-1);
        return;
    }
 
    int temp=arr[p];
    arr[p]=arr[q];
    arr[q]=temp;
 
    if(p<len-1){
        reverse(arr, p+1, len-1);
    }
}

int is_sorted(int *arr,int len){
    
    for(int i=0;i<len-1;i++){
        if(arr[i]>arr[i+1])return 0;
    }
    return 1;
}


int main(){
    
   int no_of_sequences_printed=0;
    
   while(no_of_sequences_printed <11){
    
       int len=get_length(1,11);
       int arr[len];
       
       for(int j=0;j<len;j++){
           arr[j]=j+1;
       }
       
       int curr_no_of_permutations = 0;
       int max_no_of_permutations=1;
       
       for(int j=1;j<=len;j++){
           max_no_of_permutations*=j;
       }
       
       while(curr_no_of_permutations<max_no_of_permutations){
           
           if(is_sorted(arr,len)){
               
               for(int j=0;j<len;j++){
                   printf("%d ",arr[j]);
               }
               printf("\n");
               no_of_sequences_printed++;
           }
           permute(arr,len);
           curr_no_of_permutations++;
       }
       
       
       
   } 
}
