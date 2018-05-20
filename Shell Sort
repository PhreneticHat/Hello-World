void ShellSort(int a[], int n)
{
	int j, gap;
	int temp,site;

	for (gap = n / 2; gap > 0; gap /= 2)
	{
		for (j = gap; j < n; j++)
		{
			if (a[j] < a[j - gap])
			{
				temp = a[j];
				site = j-gap;
				while (site >= 0 && a[site] > temp)
				{
					a[site + gap] = a[site];
					site -= gap;
				}
				a[site+gap] = temp;
			}
		}
	}
}
