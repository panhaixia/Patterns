#include <stdlib.h>
#include<iostream>
using namespace std;
typedef int* IntArrayPtr;

int Divide(int a[],int left,int right)
{
    int k=a[left];  //��ֵ
    do
    {
    while(left<right&&a[right]>=k) --right;
        if(left<right)
        {
        a[left]=a[right];
        ++left;
        }

    while(left<right&&a[left]<=k)++left;
    if(left<right)
    {
        a[right]=a[left];
        --right;
    }
    }while(left!=right);
    //�������ֵλ�ã���Ϊ����������
    a[left]=k;
    return left;
}

void QuickSort(int a[],int left,int right)
{
    int mid;
    if(left>=right)return;

    mid=Divide(a,left,right);
    cout<<a[mid]<<'\n';
    for(int j=left;j<=right;j++)
    cout<<a[j]<<" ";
    cout<<'\n';

        //��ֵ��벿��
    QuickSort(a,left,mid-1);
        //��ֵ�Ұ벿��
    QuickSort(a,mid+1,right);
}

void FillArray(int a[],int size)//��������
{
    cout<<"������"<<size<<"������������֮���ÿո����:"<<endl;
    for(int index=0;index<size;index++)
    cin>>a[index];
}

int main()
{
    int array_size;
    cout<<"��������Ҫ�����Ԫ�ظ�����";
    cin>>array_size;
    IntArrayPtr a;
    a=new int[array_size];//��̬����

    FillArray(a,array_size);
    cout<<'\n'<<"��������ʼ��"<<endl;

    QuickSort(a, 0, array_size-1);
    cout<<"end"<<'\n';
    for(int k=0;k<array_size;k++)
    {
    cout<<a[k]<<" ";
    }
    cout<<'\n';
    system("pause");//getchar();
    return 0;
}
