public static void SELECTSORT(int[] R)
{
    for (int i = 0; i < R.Length-1; i++)
    {
        int index = i;
        for (int j = i + 1; j < R.Length; j++)
        {
            if (R[j] < R[index])
            {
                index = j;
            }
        }
        //½»»»R[i]ºÍR[index]
         if (index != i)
        {
            int t = R[i]; R[i] = R[index]; R[index] = t;
        }
    }
}
