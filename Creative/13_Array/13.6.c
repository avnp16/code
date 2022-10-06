//13.6	WAP to get two array and merge it into the third array

int main(int argc, char const *argv[])
{
    int i, n1, n2, n3;

    printf("Enter the Size of Array a :");
    scanf("%d", &n1);

    printf("Enter the Size of Array b :");
    scanf("%d", &n2);

    int a[n1];
    int b[n2];

    for (i = 0; i < n1; i++)
    {
        printf("A[%d]=", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n2; i++)
    {
        printf("B[%d]=", i);
        scanf("%d", &b[i]);
    }

    n3 = n1 + n2;
    int c[n3];

    for (i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }

    for (i = 0; i < n2; i++)
    {
        c[i + n1] = b[i];
    }
    for (i = 0; i < n3; i++)
    {
        printf("c[%d]=%d\t", i, c[i]);
    }

    return 0;
}
