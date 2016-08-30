#include <iostream>
using namespace std;

void BubbleSort(int*  , int );
int main()
{
    int data[]={10,9,13,7,32,5,2};
    BubbleSort(data,7);
    for(int i=0;i<7;i++)
        cout<<dec<<data[i]<<"  ";
        cout<<"\n";
    return 0;
 }

void  BubbleSort(int* pData,int n)
{
    int iTemp;

    bool bFilish=false;
    for(int i=0;i<n-1;i++)
    {
        if(bFilish=true)
            break;
        bFilish=true;
        for(int j=n-1;j>i;j--)
        {
            if(pData[j]<pData[j-1])
            {
                iTemp=pData[j-1];
                pData[j-1]=pData[j];
                pData[j]=iTemp;
                bFilish=false;
            }

        }
    }
}
