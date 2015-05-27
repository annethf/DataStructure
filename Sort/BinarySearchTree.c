//二叉排序树（中序遍历二叉排序树得到的关键字
//序列是一个递增的有序序列

//递归算法
BiTree BSTRecursion(BiTree *tree, keyType key)
{
	if(!tree || key == tree->key) return tree;
	else if(key < tree->key) return BST(tree->lchild, key);
	else return BST(tree->rchild, key);
}

//非递归算法
BiTree BSTNonRecursion(BiTree *tree, keyType key)
{
	while(!tree)
	{
		if(key == tree->key)
			return tree; //找到
		else if(key < tree->key)
			tree = tree->lchild;
		else
			tree = tree->rchild;
	}
	return NULL; //没找到
}