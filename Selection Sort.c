void SelectSort(int a[], int n)
{
	int i, j;
	int max, site;

	for (i = 0; i < n; i++)
	{
		max = a[i];
		site = 0;
		for (j = i; j < n; j++)
		{
			if (max <= a[j])
			{
				max = a[j];
				site = j;
			}
		}

		for (j = site; j>0; j--)
		{
			a[j] = a[j - 1];
		}
		a[j] = max;
	}
}
