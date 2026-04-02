#include <iostream>

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
    int arr[200];
    int s=0;
    for(int i=0;i<a;i++){
        arr[s]=s1[i];
        s++;
    }
    for(int i=0;i<b;i++){
        bool found=false;
        for(int j=0;j<a;j++){
            if(s2[i]==s1[j]){
                found =true;
                break;
            }

        }
        if(found==false){
            arr[s]=s2[i];
            s++;
        }
    }
    cout<<"The union of Two set is "<<endl;
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"  ";
    }

}
