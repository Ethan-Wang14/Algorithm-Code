//res keeps the head node of the merged list
//p keeps every sorted node of the two lists during the loop
ListNode *merge(ListNode *h1, ListNode *h2)
{
	if(h1 == NULL)
		return h2;
	if(h2 == NULL)
		return h1;
	
	ListNode *res, *p;

	//Init res and p
	if(h1 -> val < h2 -> val)
	{
		res = h1;
		h1 = h1 -> next;
	}
	else
	{
		res = h2;
		h2 = h2 -> next;
	}
	p = res;

	while(h1 != NULL && h2 != NULL)
	{
		if(h1 -> val < h2 -> val)
		{
			p -> next = h1;
			h1 = h1 -> next;
		}
		else
		{
			p -> next = h2;
			h2 = h2 -> next;
		}

		p = p -> next;
	}

	if(h1 != NULL)
	{
		p -> next = h1;
	}
	else if(h2 != NULL)
	{
		p -> next = h2;
	}

	return res;
}
