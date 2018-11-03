#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_List	*new_node;

	*new_node = (s_struct *)malloc(sizeof(s_struct));
	if (new_node == NULL)
		return (NULL);
	if (content == NULL)
	{
		new_node->content = NULL;
		new_node->content_size = 0;
		new_node->next = NULL;
		return (new_node);
	}
	new_node->content = (void *)malloc(sizeof(new_node->content) * content_size);
	if (new_node->content == NULL)
		return (NULL);
	new_node->content = ft_memcpy(new_node->content, content, content_size);
	new_node->content_size = content_size;
	new_node->next = NULL;
	return (new_node);
}
