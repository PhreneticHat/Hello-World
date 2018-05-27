void Merge(int a[], int tmp_array[], int Lpos, int Rpos, int RightEnd)
{
	int i, LeftEnd, NumElements, TmpPos;

	LeftEnd = Rpos - 1;
	TmpPos = Lpos;
	NumElements = RightEnd - Lpos + 1;

	while (Lpos <= LeftEnd && Rpos <= RightEnd)
		if (a[Lpos] <= a[Rpos])
			tmp_array[TmpPos++] = a[Lpos++];
		else
			tmp_array[TmpPos++] = a[Rpos++];

	while (Lpos <= LeftEnd)
		tmp_array[TmpPos++] = a[Lpos++];
	while (Rpos <= RightEnd)
		tmp_array[TmpPos++] = a[Rpos++];

	for (i = 0; i < NumElements; i++, RightEnd--)
		a[RightEnd] = tmp_array[RightEnd];
}


void MSort(int a[], int tmp_array[], int Left, int Right)
{
	int Center;

	if (Left < Right)
	{
		Center = (Right + Left) / 2;
		MSort(a, tmp_array, Left, Center);
		MSort(a, tmp_array, Center + 1, Right);
		Merge(a, tmp_array, Left, Center+1, Right);
	}

}


void MergeSort(int a[], int n)
{
	int *tmp_array;

	tmp_array = (int*)malloc(n * sizeof(int));
	if (tmp_array != NULL)
	{
		MSort(a, tmp_array, 0, n-1);
		Print_Data(a, n);
		free(tmp_array);
	}
	else
	{
		printf("No space for new array");
	}
}
