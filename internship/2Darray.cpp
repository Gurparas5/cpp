#include<iostream>
using namespace std;
int main(){
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Array: \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum=0;
    cout<<"Sum of first row: ";
    for(int j=0;j<3;j++) sum+=a[0][j];
    cout<<sum;
}