public class InsertSort {
    public void insertSort(int[] array, int first, int last) {
        int temp, i, j;
        for (i = first + 1; i <= last - 1; i++) {// Ĭ���Ե�һ����Ϊ�������У��������ΪҪ���������
            temp = array[i];
            j = i - 1;
            while (j >= first && array[j] > temp) {// �Ӻ���������������������С��temp��������Ƽ���������ֱ��������С�ڻ����temp��������
                array[j + 1] = array[j];
                j--;
            }
            array[j + 1] = temp;
            // ��ӡÿ��������
            for (int m = 0; m <= array.length - 1; m++) {
                System.out.print(array[m] + "\t");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        InsertSort insertSort = new InsertSort();
        int[] array = { 5, 69, 12, 3, 56, 789, 2, 5648, 23 };
        insertSort.insertSort(array, 0, array.length);// ע��˴���0-9������0-8
        for (int i = 0; i <= array.length - 1; i++) {
            System.out.print(array[i] + "\t");
        }
    }
}
