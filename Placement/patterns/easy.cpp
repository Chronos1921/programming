#include<iostream>
using namespace std;
void squarestarf(int n){
    cout<<"Square using for loop \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}
void squarestarw(int n){
    cout<<"Square using while loop \n";
    int i=0;
    
    while(i<n){
        int j=0;
        while(j<n){
            cout<<"* ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
}
void numberpatf(int n){
    cout<<"Number using for loop \n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    
}
void numberpatw(int n){
    cout<<"Number using while loop \n";
    int i=1;
    
    while(i<=n){
        int j=0;
        while(j<n){
            cout<<i<<" ";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
}
void pat3(int n){
    int i=0;
    while (i<n)
    {
        int j=0;
        while(j<n){
            cout<<n-j<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }
    
}
void pat4(int n){
    int i=1;
    int j=1;
    while (i<=n)
    {
        while(j<=i*n){
            cout<<j<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }
    
}
void pat5(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
        
    }
    
}
void pat6(int n){
    int count=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<count++<<" ";
        }
        count=i+2;;
        cout<<endl;
        
    }
    
}
void pat7(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            cout<<i-j+1<<" ";
        }
        cout<<endl;
        
    }

    
}
void pat8(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<char((i)+'A')<<" ";
        }
        cout<<endl;
    }
    
}
void pat9(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j >=1; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}
void pat10(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<char((j)+'A')<<" ";
        }
        cout<<endl;
    }
    
}
void pat11(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<char((i+j)+'A')<<" ";
        }
        cout<<endl;
    }
    
}
void pat12(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<char((i+j)+'A');
        }
        cout<<endl;
    }
    
}
void pat13(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j =n-i-1; j <n; j++)
        {
            cout<<char((j)+'A');
        }
        cout<<endl;
    }
    
}
void pat14(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j<n-i-1)
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
            
        }
        cout<<endl;
    }
    
}
void pat15(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j =0; j <n; j++)
        {
            if(i<=j)
            cout<<i+1<<" ";
            else
            cout<<"  ";
        
        }
       
        cout<<endl;
    }
    
}
void pat16(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j =0; j <n; j++)
        {
            if (j<n-i-1)
            {
                cout<<"  ";
            }
            else
            cout<<n-j<<" ";
        }
        for (int k = 0; k < i; k++)
        {
            cout<<k+2<<" ";
        }
        
        cout<<endl;
    }
    
}
void pat17(int n){
    for (int i = 0; i < n; i++)
    {
        int l=1;
        for (int j =0; j <n; j++)
        {
            if (j<n-i-1)
            {
                cout<<"  ";
            }
            else{
                cout<<l<<" ";
                l++;
            }
            
        }
        for (int k = 0; k < i; k++)
        {
            cout<<i-k<<" ";
        }
        
        cout<<endl;
    }
    
}
void pat18(int n){
    for (int i = 1; i <=n; i++)
    {
        
        int j=1;
        while (j<=n-i){
            cout<<"  ";
            j++;
        }
        int k=1;
        while(k<=i){
            cout<<k<<" ";
            k++;
        }
        
        int l=i;
        while (l>1)
        {
            cout<<l-1<<" ";
            l--;
        }
        
        cout<<endl;
    }
    
}

int main(){
    
    int n=4;
    //squarestarf(n);
    //squarestarw(n);
    //numberpatf(n);
    //numberpatw(n);
    //pat3(n);
    //pat4(n);
    //pat5(n);
    //pat6(n);
    //pat7(n);
    //pat8(n);
    //pat9(n);
    //pat10(n);
    //pat11(n);
    //pat12(n);
    //pat13(n);
    //pat14(n);
    //pat15(n);
    //pat16(n);
    //pat17(n);
    pat18(n);
}