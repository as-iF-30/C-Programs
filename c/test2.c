#include<iostream>
using namespace std;
int main()
{
    int n,a[100],i;
    float j=0,k=0,l=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]>0)
        {
            j++;
        }
        else if(a[i]<0)
        {
            k++;
        }
       else if(a[i]=0)
       {
           l++;
       }
    }
    cout<<j/n<<endl<<k/n<<endl<<l/n;
}

