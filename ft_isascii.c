int ft_isascii(int c)
{
    if ((c >= 0  && c <= 127))
    {
        return(1);
    }
    return(0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     int c = 76;
//     printf("%d", isascii(c));
//     printf("\n%d", ft_isascii(c));
// }