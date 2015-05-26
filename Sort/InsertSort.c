#插入排序(非递减排序)
void insertSort(seqList list)
{
	int i = 0, j = 0;
	for(i = 2; i <= list.length(); i++)
	{
		if(list[i].key < list[i - 1].key)
		{
			list[0].key = list[i].key; //设置哨兵
			list[i].key = list[i - 1].key;
			//从右往左依次和待插入关键字(哨兵)进行比较，往后移动关键字誊出哨兵的正确位置
			for(j = i - 2; list[0].key < list[j].key; --j) 
			{
				list[j + 1].key = list[j].key; //关键字后移
			}
			list[j + 1].key = list[0].key; //插入哨兵
		}
	}
}