#include <stdio.h>

int main()
{
  int arr[10];
  int count[10];
  int iscounted[10] = {0};

  for (int i = 0; i < 10; i++)
  {
    printf("Enter: ");
    scanf("%d", &arr[i]);
    count[i] = 0;
  }

  for (int i = 0; i < 10; i++)
  {
    if (!iscounted[i])
    {
      for (int j = 0; j < 10; j++)
      {
        if (arr[i] == arr[j])
        {
          count[i]++;
          iscounted[j] = 1;
        }
      }
    }
  }

  for (int i = 0; i < 10; i++)
  {
    if (count[i] > 0)
    {
      printf("%d occurs %d times.\n", arr[i], count[i]);
    }
  }

  return 0;
}
