//
//
//
//
//  Created by PRATIK PANDEY on 29/01/21.
//Linear Search

//#include <stdio.h>
//int LinearSearch(int arr[],int size,int element){
//    for(int i=0;i<size;i++){
//        if(arr[i]==element){
//            return i;
//        }
//    }
//    return -1;
//}
//
//
//int main() {
//    int arr[]={1,5,6,7,3,44,82,23,53,90};
//    int size=sizeof(arr)/sizeof(int);
//    int element=82;
//    int searchindex=LinearSearch(arr, size, element);
//    printf("The Element %d was Found At %d index\n",element,searchindex);
//    return 0;
//}
#include <stdio.h>
int BinarySearch(int arr[],int size,int element){
    int low,mid,high;
    low=0;
    high=size-1;
    mid=(low+high)/2;
    while(low<=high){
        if(arr[mid]==element){
            return mid;
        }
        if(element>arr[mid]){
            low=mid+1;

        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

int main(){
   
    int arr[]={1,3,5,7,9,22,34,75};
    int size=sizeof(arr)/sizeof(int);
    int element=5;
    int searchedindex=BinarySearch(arr,size,element);
    printf("The Element %d is found at %d\n",element,searchedindex);
    return 0;
}

