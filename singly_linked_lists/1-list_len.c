size_t list_len(const list_t *h)
{
	int N_nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		N_node += 1;
	}
	return (N_nodes);
	
}
