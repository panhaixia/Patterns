#include <iostream>
using namespace std;

void InsertSort(int*  , int );
int main()
{
    int data[]={1,-30,12,7,-1,5,4};
    InsertSort(data,7);
    for(int i=0;i<7;i++)
        cout<<dec<<data[i]<<"  ";
        cout<<"\n";
    //system ( "pause" );//getchar();
    return 0;
 }

void  InsertSort(int* pData,int Count)
{
    int iTemp;int iPos;
    for(int i=1;i<Count;i++)
    {
        iPos=i-1;
        iTemp=pData[i];
        while((iPos>=0)&&(iTemp<pData[iPos]))
        {
            pData[iPos+1]=pData[iPos];
            iPos--;
        }
        pData[iPos+1]=iTemp;
    }
}
