int get_endianness(void);
{
int x = 1;
char *a;

a = (char *)&x;
if (a[0] == 1)
{
return (1);
}
else
{
return (0);
}
}
