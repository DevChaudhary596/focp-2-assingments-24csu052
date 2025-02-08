#include<iostream> 
#include<vector>
using namespace std;
int nextprime(int num){
    for(int a=2;a<num;a++){
        if(num%a==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    int x=0;
    cout<<"enter the number ";
    cin>>n;
    int i, arr[n];
for (i=2;i<n;i++)
    {
        if(n%i==0){
            cout<<"the number is not prime\n";
            goto factors;
        }    
    }
    if(i==n)
    {       cout<<"the number is prime \n"<<"the factors of the number is 1 and "<<n<<"\n";
            n++;
            goto nextprimenumber;
    }
factors:
cout<<"the factors of this number are \n";
        for(int z=1;z<=n;z++){
            if(n%z==0){
                cout<<z<<" \n";
            }
        }
nextprimenumber:
     while(!nextprime(n)){
        n++;
     }
    cout<<"the next prime number is "<<n;
    return 0;
}
