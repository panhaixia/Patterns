public void SortShell(int [] list)
 {
     int i;
     for(i=1;i<=list.Length/9;i=3*i+1);
     for(;i>0;i/=3)
     {
         for(int i=i+1;i<=list.Length;i+=inc)
        {
            int t=list[i-1];
            int j=i;
            while((j>inc)&&(list[j-inc-1]>t))
            {
                list[j-1]=list[j-inc-1];
                j-=inc;
            }
            list[j-1]=t;
        }
    }
}
