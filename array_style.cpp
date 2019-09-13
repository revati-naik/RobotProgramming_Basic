#include <iostream>
#include <array>
using namespace std;


int main()
{
    cout<<"----C-Style Array----"<<endl;
    int arr[3]{9,9,9};
    int size_arr=sizeof(arr)/4;
    cout<<"Size of the Array: "<<size_arr<<endl;
    arr[0]=1;
    arr[size_arr-1]=7;
    cout<<arr[0]<<","<<arr[1]<<","<<arr[2]<<endl;
    
    cout<<"----std::array----"<<endl;
    std::array<int,3>arr_1={9,9,9};
    int size_arr_1=arr_1.size();
    cout<<"Size of the Array: "<<size_arr_1<<endl;
    arr_1.front()=1;
    arr_1.back()=7;
    cout<<arr_1[0]<<","<<arr_1[1]<<","<<arr_1[2]<<endl;
	return 0;
}
