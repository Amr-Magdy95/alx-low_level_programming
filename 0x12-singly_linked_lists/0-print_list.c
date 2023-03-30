/**
 * print_list - print LL
 * @h: head of the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int res = 0;
	list_t *temp = NULL;

	temp = malloc(sizeof(list_t));
	temp = h;

	while (temp->next != NULL)
	{
		if (temp->str == NULL)
		{
			temp->n = 0;
			temp->str = malloc(sizeof(char) * 6);
			temp->str = "(nil)";
		}
		printf("[%d] %s]n", temp->n, temp->str);
		res++;
		temp = temp->next;
	}
	return (res);
}
