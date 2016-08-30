#include <stdlib.h>
#include<iostream>
using namespace std;
typedef int* IntArrayPtr;

int Divide(int a[],int left,int right)
{
    int k=a[left];  //轴值
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
    //排序后轴值位置，分为两个子序列
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

        //轴值左半部分
    QuickSort(a,left,mid-1);
        //轴值右半部分
    QuickSort(a,mid+1,right);
}

void FillArray(int a[],int size)//输入数据
{
    cout<<"请输入"<<size<<"个整数，数字之间用空格隔开:"<<endl;
    for(int index=0;index<size;index++)
    cin>>a[index];
}

int main()
{
    int array_size;
    cout<<"请输入需要排序的元素个数：";
    cin>>array_size;
    IntArrayPtr a;
    a=new int[array_size];//动态数组

    FillArray(a,array_size);
    cout<<'\n'<<"快速排序开始："<<endl;

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
