//基于向量的顺序查找，不要求向量是已排序的
//slist是顺序表, 监视哨在低下标处
int seqSearch(seqList slist, keyTpye key)
{
	slist[0].key = key; //监视哨
	int i = 0;
	for(i = slist.length(); slist[i].key != key; --i);
	return i;
}

//监视哨在高下标处
int seqSearch(seqList slist, keyType key)
{
	slist[slit.length()].key = key;
	int i = 0;
	for(i = 0; slist[i].key != key; ++i);
	return i;
}

//基于链表的顺序查找
//linkedList是链表, 监视哨在表头结点
int seqSearch(linkedList *llist, keyType key)
{
	llist->data = key;
	linkedList *p = llist->next;
	int i = 1;
	while(p)
	{
		if(p->data == key) return i;
		else
		{
			p = p->next;
			i++;
		}
	}
	return i;
}
