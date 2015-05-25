//slist为已升序排序的顺序表，key为待查找的关键字
int binSearch(seqList slist, keyType key)
{
	int low = 1, high = slist.length(), mid = 0;
	while(low <= high)
	{
		mid = (low + high) / 2;
		if(slist[mid].key == key) return mid;
		if(slist[mid].key < key)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return 0;  //low < high 查找失败！
}

//降序排列
int binSearch(seqList slist, keyType key)
{
	int low = 1, high = slist.length(), mid = 0;
	while(low <= high)
	{
		mid = (low + high) / 2;
		if(slist[mid].key == key) return mid;
		if(slist[mid].key > key)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return 0;
}

/*
无论是升序还是降序，都要调整判断条件slist[mid].key与key的比较符号，保证high=mid-1;
high一定不能是mid+1，因为这样会进入四循环
*/





























