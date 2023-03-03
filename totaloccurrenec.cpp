#include<iostream>
#include<vector>
using namespace std;
 int first_occurrence(vector<int> arr,int target){
    int size;
    int start=0;
    int end=arr.size()-1;
    int  mid=(start+end)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==target){
          ans=mid;
          end=mid-1;

        }
        else if (target<arr[mid])
        {
            end=mid-1;
        }
        else if(target>arr[mid]){
            start=mid+1;
        }
        mid=(start+end)/2;
        
    }
    return ans;
}
int last_occurrence(vector<int>arr,int target){

int size;
int start=0;
int end=arr.size()-1;

int ans=-1;
 int mid=(start+end)/2;
 while(start<=end){
if(target==arr[mid]){
    ans=mid;
    start=mid+1;
}
else if(target<arr[mid]){
    end =mid-1;

}
else if(target>arr[mid]){
    start=mid+1;
}
mid=(start+end)/2;
 }
return ans;
}

int total_occurrence(vector<int>arr,int target){
        int total_occurrence=(last_occurrence(arr,target)-first_occurrence(arr,target))+1;
        return total_occurrence;
    }     
int main(){
    vector<int>arr{2,4,4,4,4,4,4,4,6,8,10};
    int target=4;
 int indexoftarget =  total_occurrence(arr,target);
 cout<<"total kitni baar aya "<<indexoftarget<<endl;

}
