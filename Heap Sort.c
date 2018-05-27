void PercDown(int a[], int i, int n)
{
	int Child;
	int Tmp;

	for (Tmp = a[i]; LeftChild(i) < n; i = Child)
	{
		Child = LeftChild(i);
		if (Child != n - 1 && a[Child + 1] > a[Child])
			Child++;
		if (Tmp < a[Child])
			a[i] = a[Child];
		else
			break;
	}
	a[i] = Tmp;
}

void Swap(int *a1, int *a2)
{
	int temp;
	temp = *a1;
	*a1 = *a2;
	*a2 = temp;
}
void HeapSort(int a[], int n)
{
	int i;

	for (i = n / 2; i >= 0; i--)
		PercDown(a, i, n);
	for (i = n - 1; i > 0; i--)
	{
		Swap(&a[0], &a[i]);
		PercDown(a, 0, i);
	}
}
