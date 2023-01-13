typedef struct node
{
    char *str;
    unsigned int len;
    struct node *next
} list_t;

int main()
{
    list_t *head = malloc(sizeof(list_t));
    head -> next = NULL;
    

}