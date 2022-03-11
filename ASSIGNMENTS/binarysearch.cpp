 #include<iostream>
using namespace std;
int search(int ar[],int x,int n)
{
    for(int i=0;i<n;i++)
    {
        if(ar[i]==x)
        return i;

    }

    return -1;
}
int main()
{
    int n ;int x;

    cout<<"enter the size of array\n"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements"<<endl;

    for(int i =0;i<n;i++)
    cin>>arr[i];
    cout<<"enter the key"<<endl;
    cin>>x;

    int t=search(arr,x,n);
    if(t==-1)
    cout<<"number not found"<<endl;
    else
    cout<<"number found at index "<<t<<endl;


}
