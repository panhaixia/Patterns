public void Sort(int[] sortArray)
{
    int j = 0;
    int key = 0;   // keyΪ�ڱ�
    for (int i = 1; i < sortArray.Length; i++)     //[0..i-1]�Ѿ��źõ�������
    {
        if (sortArray[i] < sortArray[i - 1])
        {
            key = sortArray[i];
            j = i - 1;
            while (j >= 0 && key < sortArray[j]) //��sortArray[i] ��sortArray[j] ʱ��ֹ
            {
                sortArray[j + 1] = sortArray[j];
                j--;
            }
            sortArray[j + 1] = key;  //���뵽j�ĺ���
        }
    }
}
