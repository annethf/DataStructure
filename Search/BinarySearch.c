//slist为已升序排序的顺序表，key为待查找的关键字
int binSearch(seqList slist, keyType key)
{
	int low = 1, high = slist.length(), mid = 0;
	while(low <= high)
	{
		mid = (low + high) / 2;
		if(slist[mid].key == key) return mid;
		if(slist[mid].key < key)
			high = mid + 1;
		else
			low = mid - 1;
	}
	return 0;  //low < high 查找失败！
}
//升序排列
int binSearch(seqList slist, keyType key)
{
	int low = 1, high = slist.length(), mid = 0;
	while(low <= high)
	{
		mid = (low + high) / 2;
		if(slist[mid].key == key) return mid;
		if(slist[mid].key > key)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return 0;
}
//降序排列
int binSearch(seqList slist, keyType key)
{
	int low = 1, high = slist.length(), mid = 0;
	while(low <= high)
	{
		mid = (low + high) / 2;
		if(slist[mid].key == key) return mid;
		if(slist[mid].key < key)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return 0;
}

int binSearch(seqList slist, keyType key)
{
	int low = 1, high = slist.length(), mid = 0;
	while(low <= high)
	{
		mid = (low + high) / 2;
		if(slist[mid].key == key) return mid;
		if(slist[mid].key > key)
			high = mid + 1;
		else
			low = mid - 1;
	}
	return 0;
}































