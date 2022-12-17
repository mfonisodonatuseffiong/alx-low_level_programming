/**
 * print_square - prints a square
 * @size: print size
 * Return: Always
 */

void print_square(int size)
{

int i;
int k;

if (size > 0)
{
for (i =0; 1 < size; i++)
{

for (k = 0; k < size; k++)
{
_putchar(35);
}
_putchar ('\n');

}

}

else
{
_putchar ('\n');
}

}
