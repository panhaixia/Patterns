#include <iostream>
using namespace std;

void SelectSort(int*  , int );
int main()
{
    int data[]={1,9,12,7,26,5,4};
    SelectSort(data,7);
    for(int i=0;i<7;i++)
    cout<<dec<<data[i]<<"  ";
    cout<<"\n";
    return 0;
}

void  SelectSort(int* pData,int Count)
{
    int iTemp;
    for(int i=0;i<Count-1;i++)
    {
    for(int j=i+1;j<Count;j++)
    {
        if(pData[i]<pData[j])
        {
        iTemp=pData[i];
        pData[i]=pData[j];
        pData[j]=iTemp;
        }
    }
    }
}
