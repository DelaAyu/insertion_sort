#include <stdio.h>
#include <iostream>
 using namespace std;

int main(int argc, char **argv)
{
	int data[5]={5,2,6,4,1},a,b,tamp;
    for(a=1; a<5; a++)
    {
        tamp=data[a];
        b=a-1;
        
        while (data[b]>tamp && b>-1)
        {
            data[b+1]=data [b];
            b--;
        }
        data[b+1]=tamp;
    }
    cout<<"data terurut:";
    for(a=0; a<5; a++)
    {
        cout<<data [a]<<" ";
    }
	return 0;
}
