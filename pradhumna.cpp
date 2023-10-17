#include <iostream>
using namespace std;
int main() {
    int arr[5],sum=0;
    cout<<"Enter 5 numbers:";
    for(int i=0;i<5;i++){
    cin>>arr[i];
    sum=sum+arr[i];
    }
    int avg=sum/5;
    cout<<"Avg is "<<avg;

    return 0;
}
