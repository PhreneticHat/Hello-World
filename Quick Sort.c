void QuickSort(int a[],int l ,int r)
{
	if (l < r)
	{
		//swap(s[l],s[(l+r)/2])将中间的这个数和第一个数交换
		int i = l, j = r, x = a[l];
		while (i < j)
		{
			while (i < j && a[j] >= x)//从右向左找第一个小于x的数  
				j--;
			if (i < j)
				a[i++] = a[j];

			while (i < j && a[i] < x)// 从左向右找第一个大于等于x的数  
				i++;
			if (i < j)
				a[j--] = a[i];
		}
		a[i] = x;
		QuickSort(a, l, i - 1);// 递归调用   
		QuickSort(a,i + 1, r);
	}
}
