/**
 *key_index - This is the entry point of the code
 *@key: jnfvikfv
 *@size: kehgfvbeukr
 *Return:0 Success
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);
	return (hash_value % size);
}
