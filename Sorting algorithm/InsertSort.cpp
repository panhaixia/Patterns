public void Sort(int[] sortArray)
{
    int j = 0;
    int key = 0;   // key为哨兵
    for (int i = 1; i < sortArray.Length; i++)     //[0..i-1]已经排好的有序列
    {
        if (sortArray[i] < sortArray[i - 1])
        {
            key = sortArray[i];
            j = i - 1;
            while (j >= 0 && key < sortArray[j]) //当sortArray[i] ≥sortArray[j] 时终止
            {
                sortArray[j + 1] = sortArray[j];
                j--;
            }
            sortArray[j + 1] = key;  //插入到j的后面
        }
    }
}
