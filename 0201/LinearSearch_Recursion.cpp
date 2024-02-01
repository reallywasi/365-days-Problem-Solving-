// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool ls(int* arr, int size, int ele)
{
    if(size==0)
    {
        return false;
    }
    if(ele==arr[0])
    {
        return true;
    }
    
            return ls(arr+1,size-1,ele);

}



int main() 
{

int arr[5]={1,9,25,4,5};
int ele=43;
int size=5;
bool x=ls(arr,size,ele);
cout<<x;
    
    return 0;
}
