public static void QUICKSORT(int[] N,int left,int right)
{
    //数组元素如果不大于一个就无需排序。
    if (left < right)
    {
        int p = PARTITION(N, left, right);  //第一次划分
        QUICKSORT(N, left, p-1);    //递归处理左子区
        QUICKSORT(N, p+1, right);   //递归处理右子区
    }
}
//划分
public static int PARTITION(int[] R, int left,int right)
{
    int i = left;
    int j = right;
    int temp = R[i];
    while (i != j)
    {
        //从左往右扫描，查找第一个比基准数小的数
        while ((R[j] >= temp) && (i<j))
        {
            j--;
        }
        if (i < j)
        {
            //交换找到的数和基准数，由于基准数还需交换多次，所以暂时不用将temp->R[j]
            R[i] = R[j];
            i++;
        }

        while ((R[i] <= temp) && (i < j))
        {
            i++;
        }
        if (i< j)
        {
            R[j] = R[i];
            j--;
        }
    }
    //定位基准数
    R[i] = temp;
    return i;
}
