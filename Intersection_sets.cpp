#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter size of first set:  "<<endl;
    cin>>a;
    cout<<"Enter size of second set:  "<<endl;
    cin>>b;
    int s1[a],s2[b];
    for(int i=0;i<a;i++){
        cout<<"Enter element number ("<<i+1<<") of the first set  ";
        cin>>s1[i];
    }
    for(int i=0;i<b;i++){
        cout<<"Enter element number ("<<i+1<<") of the second set  ";
        cin>>s2[i];
    }
    int arr[100];
    int s=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(s1[i]==s2[j]){
                arr[s]=s1[i];
                s++;
                break;
            }
        }
}
for(int i=0;i<s;i++){
    cout<<arr[i]<<" ";
}

}
