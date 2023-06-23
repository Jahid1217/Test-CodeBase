#include <iostream>

using namespace std;

    void inputarr(int *arra, int row){
        for(int i=0; i<row; i++){
            cin>>arra[i];
        }
    }
    void printarr(int *arr, int row){
        for(int i=0; i<row;i++){
            cout<<arr[i]<<"\t"<<endl;
        }
    }
    void initarr(int *rows,int row)
    {
        for(int i=0;i<row;i++){
            rows[i]= new int[row];
        }
    }


int main()
{
    int *rows= new int*[row];
    inputarr(arra,row);
    printarr(arr,row);
    return 0;
}
