#include <iostream>
#include <array>
using namespace std;


int main()
{
    int arr[3]{9};
    int size_arr=sizeof(arr)/4;
    cout<<"Size of the Array"<<size_arr<<endl;
    arr[0]=1;
    arr[size_arr-1]=7;
    cout<<arr[3]<<endl;
	return 0;
}
