//折半插入排序(Binary Insertion Sort)
void binInsertSort(seqList list)
{
	int i = 0, j = 0;
	int low = 0, high = 0, mid = 0;
	for(i = 2; i <= list.length(); i++)
	{
		list[0].key = list[i].key;
		low = 1;
		high = i - 1;
		while(low <= high)
		{
			mid = (low + high) / 2;
			if(list[0].key < list[mid].key)
				high = mid - 1;
			else
				low = mid + 1;
		}
		for(j = i - 1; j >= high + 1; --j)
			list[j + 1].key = list[j].key;
		list[high + 1] = list[0].key;
	}
}