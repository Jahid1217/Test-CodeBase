#include<iostream>
using namespace std;

int main(){

    int n;
    int array[a];
    cout<<"enter Array Size: ";
    cin>>n;
    cout<<endl;

    cout<<"enter Array: ";
    for(int i=0;i<n; i++){
        cin>>array[a];
    }
    cout<<endl;
    cout<<"Not Sorting Array:";
    for(int i=0; i<n; i++){
        cout<<array[a]<<"\t";
    }
    cout<<endl;
    int i, j, temp;
    cout<<"Bubble Sorting: ";
    for(int i=0; i<n; i++){
        for(int j=i+1; j<i; j++){
                if(array[j]<array[i]){
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
                }
        }
    }
    for(int i=0; i<n; i++){
        cout<<array[a]<<"\t";
    }

    return 0;
}
