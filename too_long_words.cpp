#include <iostream>
#include <string>

using namespace std;
 // and === >  &&
 // or ==== >  ||
 // NOT ====>  !
 // diffrent ===> !=

int main()
{
    int n;
    //cout<<"donner le nbre de mots"<<endl;
    cin>>n;

    for (int i=0;i<n;i++){
        //cout<<"donner le mot"<<endl;
        string mot;
        cin>>mot;
        int length = mot.size();
        if(length>10){
            cout<<mot[0]<<length-2<<mot[length-1]<<endl;
        }
        else{
            cout<<mot<<endl;
        }
    }
    return 0;
}
