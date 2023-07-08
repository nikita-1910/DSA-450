#include<bits/stdc++.h>
using namespace std;

class petrolPump{
    public:
    int petrol, distance;
};

int print(petrolPump arr[], int n){
    int start=0, end=1;
    int curr=arr[start].petrol-arr[start].distance;
    while(end!=start || curr<0){
        while (curr<0 && start!=end){
            curr-=arr[start].petrol-arr[start].distance;
            start=(start+1)%n;
            if(start==0){
                return -1;
            }
        }
        curr+=arr[end].petrol-arr[end].distance;
        end=(end+1)%n;
    }
    return start;
}

int main(){
    petrolPump arr[]={{6, 4}, {3, 6}, {7, 3}};
    int n=sizeof(arr)/sizeof(arr[0]);
    int start=print(arr, n);
    (start==-1)?cout<<"NO solution" : cout<<"Start = "<<start;
    return 0;
}