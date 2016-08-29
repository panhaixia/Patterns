public static void QUICKSORT(int[] N,int left,int right)
{
    //����Ԫ�����������һ������������
    if (left < right)
    {
        int p = PARTITION(N, left, right);  //��һ�λ���
        QUICKSORT(N, left, p-1);    //�ݹ鴦��������
        QUICKSORT(N, p+1, right);   //�ݹ鴦��������
    }
}
//����
public static int PARTITION(int[] R, int left,int right)
{
    int i = left;
    int j = right;
    int temp = R[i];
    while (i != j)
    {
        //��������ɨ�裬���ҵ�һ���Ȼ�׼��С����
        while ((R[j] >= temp) && (i<j))
        {
            j--;
        }
        if (i < j)
        {
            //�����ҵ������ͻ�׼�������ڻ�׼�����轻����Σ�������ʱ���ý�temp->R[j]
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
    //��λ��׼��
    R[i] = temp;
    return i;
}
