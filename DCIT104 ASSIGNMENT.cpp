#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int p,q=2,n,counter=0,sum=0,flag=1;
    //the program ask to input maximum limit
    cout<<"Enter the value to n:";
    cin>>n;
    //store the maximum in the max variable
    while(counter<n){
        for(p=2; p<=q-1; p++){
            if(q%p==0){
                flag=0;
                break;
            
            }
        }

        //when the 'p' is prime then add to sum
        if(flag){
            sum+=q;
            counter++;
        }
        q++;
        flag=1;
    }
    cout<<"sum of first "<<n<<" prime numbers:"<<sum;
    getch();
    return 0;
}