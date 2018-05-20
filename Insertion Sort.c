void InsertSort(int a[], int n)
{
	int temp;
	int i, j;
	for (i = 1; i < LEN; i++)
	{
		temp = a[i];
		for (j = i;j > 0 && a[j-1] > temp; j--)
		{
			a[j] = a[j - 1];
		}
		a[j] = temp;
	}
	Print_Data(a, n);
}
