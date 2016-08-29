public static void BubbleSort(int[] R)
{
    for (int i = 0; i < R.Length - 1; i++)
    {
        bool noswap = true;
        for (int j = 0; j < R.Length - 1-i; j++)
        {
            if (R[j] > R[j + 1])
            {
                int temp = R[j];
                R[j] = R[j + 1];
                R[j + 1] = temp;
                noswap = false;
            }
        }
        if (noswap)
        {
            break;
        }
    }
}
