#include<iostream>
using namespace std;
void pattern1(int n){
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
         cout<<"* ";
       cout<<endl;   
    }
}
void pattern2(int n)
{  
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        cout<<j<<" ";
       cout<<endl; 
    }
}
void pattern3(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        cout<<i<<" ";
       cout<<endl; 
    }
}
void pattern4(int n)
{   int i,j;
    for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
        cout<<"* ";
       cout<<endl; 
    }
}
void pattern5(int n)
{
     int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
        cout<<j <<" ";
       cout<<endl; 
    }
}
void pattern6(int n)
{
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        cout<<"  ";
        for(k=1;k<=2*i-1;k++)
        cout<<"* ";
       cout<<endl; 
    }
}
void pattern7(int n)
{
    int i,j,k;
    for(i=1;i<=n;i++)
    {   for(j=1;j<i;j++)
        cout<<"  ";
        for(k=1;k<=2*(n-i)+1;k++)
         cout<<"* ";
        
        
       cout<<endl; 
    }
}
void pattern8(int n)
{
    pattern6(n);
    pattern7(n);
}
void pattern9(int n)
{
    for(int i=1;i<=2*n-1;i++)
    {   int stars=i;
        if(i>n)
        stars=2*n-i;
        for(int j=1;j<=stars;j++)
         cout<<"* ";
        cout<<endl; 
    }
}

void pattern10(int n)
{   int start=1;
    for(int i=0;i<n;i++)
   { if(i%2==0) start=1;
    else start=0;
    
        for(int j=0;j<=i;j++)
        {cout<<start;
         start=1-start;
        }
     cout<<endl;
   }
}
void pattern11(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        cout<<j<<" ";
        for(int k=1;k<=2*(n-i);k++)
        cout<<"  ";
        for(int l=i;l>=1;l--)
        cout<<l<<" ";
       cout<<endl; 
    }
}
void pattern12(int n)
{   int num=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
void pattern13(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char ch='A';ch<='A'+i;ch++)
        cout<<ch;
       cout<<endl; 
    }
}
void pattern14(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char ch='A';ch<'A'+n-i;ch++)
        cout<<ch;
       cout<<endl; 
    }
}
void pattern15(int n)
{
    for(int i=0;i<n;i++)
    {   char ch='A'+i;
        for(int j=0;j<=i;j++)
        cout<<ch;
       cout<<endl; 
    }
}
void pattern16(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        cout<<"  ";
        char ch='A';
        int breakp=i;
        for(int k=0;k<2*i+1;k++)
        {
            cout<<ch<<" ";
            if(k<breakp)
            ch++;
            else
            ch--;

        }
        cout<<endl; 
    }
}
void pattern17(int n)
{
    for(int i=0;i<n;i++)
    {   
        for(char ch='E'-i;ch<'E'+1;ch++)
        cout<<ch<<" ";
       cout<<endl; 
        
    }
}
void pattern18(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        cout<<"* ";
        for(int k=1;k<=2*(i-1);k++)
        cout<<"  ";
        for(int l=1;l<=n-i+1;l++)
        cout<<"* ";
       cout<<endl; 
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        cout<<"* ";
        for(int k=1;k<=2*(n-i);k++)
        cout<<"  ";
        for(int l=1;l<=i;l++)
        cout<<"* ";
       cout<<endl; 
    }
}
void pattern19(int n)
{   int space=8;
    for(int i=1;i<=2*n-1;i++)
    {   int stars=i;
        if(i>n)
        stars=2*n-i;
        for(int j=1;j<=stars;j++)
        cout<<"* ";
        for(int k=1;k<=space;k++)
         cout<<"  ";
        for(int l=1;l<=stars;l++)
         cout<<"* ";
        if(i>=n)
        space+=2;
        else
        space-=2;
       cout<<endl;   


    }
}
void pattern20(int n)
{
    for(int i=0;i<n;i++)
    {   cout<<"* ";
        if(i==0||i==n-1)
       {
        for(int j=0;j<=n-2;j++)
        cout<<"* ";
       }
       else
       {
        for(int l=0;l<n-2;l++)
        cout<<"  ";
        cout<<"* ";
       }
       cout<<endl;
    }
}
void pattern21(int n)
{   int print=n;
    for(int i=0;i<2*n-1;i++)
    {
        cout<<n;
        print=print-i;
        for(int j=0;j<2*n-1;j++)
        cout<<print<<" ";
        //if(n-i>)
        if(i==n-1)
        for(int k=0;k<2*n-1;k++)
        cout<<n<<" ";
       cout<<endl; 
    }
}
int main()
{
    int i,j;
    int n;
    cout<<"ip"<<endl;

    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>j;
        pattern20(j);
    }
   
}