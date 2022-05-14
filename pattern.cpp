// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() 
{
    int j,i,size;
    cout<<"Enter Size:";
    cin>>size;
    for(i=1;i<=size;i++)
    {
        for(j=1;j<=size;j++)
        {
            if(j==size+1-i||j==i)
            {
                cout<<"* ";
            }
           
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}